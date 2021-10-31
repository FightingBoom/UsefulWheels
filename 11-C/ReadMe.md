# 1 环境说明

## 1.1 VSCode 环境
使用 MinGW 编译器，版本如下：
```shell
C:\Users\zhaochen>gcc --version
gcc (x86_64-posix-seh-rev0, Built by MinGW-W64 project) 8.1.0
Copyright (C) 2018 Free Software Foundation, Inc.
This is free software; see the source for copying conditions.  There is NO
warranty; not even for MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.


C:\Users\zhaochen>g++ --version
g++ (x86_64-posix-seh-rev0, Built by MinGW-W64 project) 8.1.0
Copyright (C) 2018 Free Software Foundation, Inc.
This is free software; see the source for copying conditions.  There is NO
warranty; not even for MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.


C:\Users\zhaochen>
```

## 1.2 编译环境
由于目前文件较少，因此采用如下编译方式：
```shell
# 编译命令
gcc .\ModulTest.c .\CWheels.c

# 执行进程
.\a.exe
```
后续文件增多后，可以考虑使用 Makefile 编译。
