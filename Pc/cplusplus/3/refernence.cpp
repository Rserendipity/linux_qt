#include <iostream>
using namespace std;

// 引用的初始化
void fun1()
{
    // 开辟了一段连续的4个字节的空间
    // 引用就可以给这个变量取一个别名
    int a = 0;
    // 左值为引用，右值是取地址
    // 引用必须初始化
    // 引用名不可被修改
    // 引用不会开辟空间
    // b完全等价于a
    int& b = a; // 这个b就是a的引用

    int temp = 10;

    // 这里的含义是把temp赋值给b
    // 不是把b改成对temp的引用
    b = temp;

    cout << a << endl;
    cout << b << endl;
}

void fun2()
{
}

int main()
{
    // fun1();
    fun2();
    return 0;
}
