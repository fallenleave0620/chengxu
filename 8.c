#include"stdio.h"
#include"string.h"
#include"windows.h"
#include"bits/stdc++.h"
int main(){
    int *p;
    int a[4]={0},b[4]={1,2,3,4};
    // p=&a;
    // printf("%x,%d",p,*p);
    void test(int *a,int *b);
    test(a,b);
    printf("\n");
    struct android{
        char a[10];
        int number;
        int year;
    }android11={"android12",12,2020};
    printf("android version=%s\nandroid num=%d\nandroid create=%d\n",
    android11.a,android11.number,android11.year);
    struct android android10;
    system("pause");
    return 0;
}
void test(int *a,int *b){
    for(int i=0;i<4;i++){
        a=b;
    }
    printf("%d\n%d",*a,*b);
}