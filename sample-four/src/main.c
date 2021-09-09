//
// Created by juneleo on 2021/9/8.
//

#include "../include/common.h"
#include "../include/sum.h"
#include "../include/get.h"


//入口主函数
int main() {

    puts("当前线程sleep 2秒");
    sleep(2);
    int x = 10;
    int y = 20;
    int z = sum(&x, &y);
    puts("This is Main");
    printf("Z:%d\n", z);
    x = 20;
    z = get(&x, &y);
    printf("Z:%d\n", z);
    return 1;
}