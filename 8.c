#include"stdio.h"
#include"string.h"
#include"windows.h"
int main(){
    int *p;
    int a[4]={0},b[4]={1,2,3,4};
    // p=&a;
    // printf("%x,%d",p,*p);
    void test(int *a,int *b);
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
    system("pause");
    return 0;
}
void test(int *a,int *b){
    for(int i=0;i<4;i++){
        a=b;
    }
    printf("%d\n%d",*a,*b);
}