//
// Created by juneleo on 2021/9/8.
//

#include "../include/val.h"

int val(int *x) {
    //引入libevent的方法
    struct event_base *base; //定义一个event_base
    base = event_base_new(); //初始化一个event_base
    const char *a =  event_base_get_method(base); //查看用了哪个IO多路复用模型，linux一下用epoll
    printf("METHOD:%s\n", a);
    event_base_free(base);  //销毁libevent

    puts("This is Value==");
    printf("X:%d \n", *x);
    return 0;
}