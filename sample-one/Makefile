################################################################################################
## 方式一
################################################################################################

main:get.o sum.o val.o main.o
	gcc -o main get.o sum.o val.o main.o
main.o:main.c
	gcc -c main.c
val.o:val.h val.c
	gcc -c val.c
sum.o:val.h sum.h sum.c
	gcc -c sum.c
get.o:get.h get.c
	gcc -c get.c
clean:
	rm -rf *.o \
		main

################################################################################################
##方式二 使用变量
################################################################################################

#object = get.o sum.o val.o \
#		main.o
#main:$(object)
#	gcc -o main ${object}
#main.o:main.c
#	gcc -c main.c
#val.o:val.h val.c
#	gcc -c val.c
#sum.o:val.h sum.h sum.c
#	gcc -c sum.c
#get.o:get.h get.c
#	gcc -c get.c
#clean:
#	rm -rf *.o \
#		main


################################################################################################
##方式三 自动推导
################################################################################################

#object = get.o sum.o val.o main.o
#main:$(object)
#	gcc -o main ${object}
#main.o:get.h sum.h
#clean:
#	rm -rf *o main
#
#
#
###
#.PHONY:clean cleanall
#clean:
#	rm -rf *.o
#cleanall:clean
#	rm -rf main

################################################################################################
## 方式四
################################################################################################

# $(MAKE) ：是make命令
# $(CC) ：是gcc的命令
# $@：可以获取到当前的目标
# @echo： 这个命令是输出一行字符串。make -s 则只显示echo输出的命令，不显示执行的命令行。

#object = get.o sum.o val.o main.o
#
#main:$(object)
#	@echo it is compile main.c now! .....
#	$(CC) -o $@ ${object}
#	$(MAKE) clean
#main.o:get.h sum.h
#
#.PHONY:clean cleanall
#clean:
#	-rm -rf *.o
#cleanall:clean
#	-rm -rf main


