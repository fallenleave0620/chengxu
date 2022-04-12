#include<bits/stdc++.h>
#include<windows.h>
#include<cmath>//数学头文件 <cmath>
#include<iostream>/*该文件定义了 cin、cout、cerr 和 clog 对象，分别对应于标准输入流、标准输出流、非缓冲标准错误流和缓冲标准错误流。*/
#include<iomanip>/*该文件通过所谓的参数化的流操纵器（比如 setw 和 setprecision），来声明对执行标准化 I/O 有用的服务。*/
#include<fstream>/*该文件为用户控制的文件处理声明服务。*/
/*在变量声明的时候，
如果没有确切的地址可以赋值，
为指针变量赋一个 NULL 值是一个良好的编程习惯。
赋为 NULL 值的指针被称为空指针。
NULL 指针是一个定义在标准库中的值为零的常量。*/
using namespace std;
int main()
{
    int a=66u,b=22l;
    double x=3e+5l;
    /*整数常量也可以带一个后缀，
    后缀是 U 和 L 的组合，
    U 表示无符号整数（unsigned），
    L 表示长整数（long）。
    后缀可以是大写，也可以是小写，
    U 和 L 的顺序任意。
    当使用小数形式表示时，必须包含整数部分、小数部分，
    或同时包含两者。当使用指数形式表示时， 
    必须包含小数点、指数，或同时包含两者。
    带符号的指数是用 e 或 E 引入的。*/
    bool ss ;/*布尔常量共有两个，它们都是标准的 C++ 关键字：
    true 值代表真。
    false 值代表假。
    我们不应把 true 的值看成 1，
    把 false 的值看成 0。*/
    /*static extern mutable(仅适用于类的对象) thread_local (C++11)
    (thread_local 说明符可以与 static 或 extern 合并。
    可以将 thread_local 仅应用于数据声明和定义，
    thread_local 不能用于函数声明或定义。)*/
    cout << "hello world" << endl;//Lambda 函数与表达式(c++11)
    int i;double d;
    int&  r = i;/*在这些声明中，(即变量拥有两个名字)
    & 读作引用。
    因此，第一个声明可以读作 "r 是一个初始化为 i 的整型引用"，
    第二个声明可以读作 "s 是一个初始化为 d 的 double 型引用"。

    引用很容易与指针混淆，它们之间有三个主要的不同：

    不存在空引用。引用必须连接到一块合法的内存。
    一旦引用被初始化为一个对象，就不能被指向到另一个对象。
    指针可以在任何时候指向到另一个对象。
    引用必须在创建时被初始化。指针可以在任何时间被初始化。*/
    double& s = d;//C++ 把引用作为参数/返回值
    system("pause");
    return 0;
}