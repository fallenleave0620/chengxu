#include"stdio.h"
#include"string.h"
#include"windows.h"
int main(){
    int *p;
    int a[4]={0},b[4]={1,2,3,4};
    // p=&a;
    // printf("%x,%d",p,*p);
    void test(int *,int *);
    void (*TESTt)(int *a,int *b);//指向函数的指针，函数名为一个指针，是函数入口
    TESTt=test;//该指针指向已知函数test（它可随时指向不同函数），如果调用，格式为c=(*p)(a,b);
    test(a,b);
    // extern int cout ;
    // extern int endl;
    printf("\n");
    struct android{
        char a[10];
        int number;
        int year;
    }android11={"android12",12,2020};
    /*成员运算符的优先级最高，
    等同于括号/中括号*/
    struct android *android10;
    android10=&android11;
    printf("android version=%s\nandroid num=%d\nandroid create=%d\n",
    android10->a,android10->number,android10->year);//->指向运算符
    struct android android9[3];
    char *sb="git commit some files";
    system("pause");
    return 0;
}
void test(int *a,int *b){
    for(int i=0;i<4;i++){
        a=b;
    }
    printf("%d\n%d",*a,*b);
}
/*void fun(int(*x1)(int),int(*x2)(int,int)){
    int a,b,i=3,j=5;
    a=(*x1)(i);
    b=(*x2)(i,j);//指向函数的指针变量作为参数传递，可在该函数中调用相关指针指向的函数
}
int * sb(int(*pointer)[4],int n);//返回指针值的函数，返回地址（指针）*/