# swap 函数错误记录

## 问题
写了一个函数 `swap(int a, int b)` 想交换两个数，结果没成功。

## 原因
C 语言的函数参数是值传递，`a` 和 `b` 在函数里只是副本，交换不会影响外部变量。

## 正确做法
改成传指针：
```c
void swap(int *a, int *b) {
    int tmp = *a;
    *a = *b;
    *b = tmp;
}
