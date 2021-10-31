# 1 环境说明

## 1.1 开发环境

### 1.1.1 Windows 环境
使用 Windows 10 专业版

### 1.1.2 VSCode 环境
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
由于目前只有一个公共头文件，因此可直接使用 Run Code ，进行编译、执行操作。

后续文件增多后，可以考虑使用 Makefile 编译。
