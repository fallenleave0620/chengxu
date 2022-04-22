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
    struct android{
        char a[10]="version";
        int number;
        int year;
    }android11;
    android android10;
    system("pause");
    return 0;
}
void test(int *a,int *b){
    for(int i=0;i<4;i++){
        a=b;
    }
    printf("%d\n%d",*a,*b);
}