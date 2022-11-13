# learn-opengl


https://zhuanlan.zhihu.com/p/438768458

https://learnopengl.com/Introduction

[TOC]

## code1
- 新建一个窗口

## code2
- 绘制方块，加入纹理贴图，加入鼠标控制

## code3
- 使用assimp库读取obj文件
- assimp下载地址：https://github.com/assimp/assimp/releases
- 编译方式：
在assimp目录下：
```
mkdir build
cd build
cmake -G"MinGW Makefiles" ..
cmake --build .
cmake install .
```
- build过程可能出现error，需要找到对应的出错文件，在不影响程序功能的情况下进行修改
