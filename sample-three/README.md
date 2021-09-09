# 编译

## 安装autotools

* 参考 https://www.cnblogs.com/thrillerz/p/4728374.html
* 下载 http://www.macports.org/install.php
* 安装macports 正常安装，安装会很慢，等待就可以
* 安装 autotools
    * sudo port install M4
    * sudo port -v install autoconf
    * sudo port install automake

## 编译

* 参考 https://blog.csdn.net/initphp/article/details/43705765#
* 根据文章一步一步执行即可

```shell

autoscan

# 修改 configure.scan
# AC_INIT(hello,1.0,aaa@gmail.com)
# AM_INIT_AUTOMAKE(hello,1.0)

mv configure.scan configure.ac

aclocal

autoconf

autoheader

# 创建 Makefile.am
# AUTOMARK_OPTIONS = foreign
# bin_PROGRAMS = hello
# hello_SOURCES = main.c val.h val.c get.h get.c sum.h sum.c

touch NEWS
touch README
touch AUTHORS
touch ChangeLog

automake --add-missing

./congigure

make


```
    
