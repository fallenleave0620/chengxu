#include"stdio.h"
#include"string.h"
int main(){
    int *p;
    int a=1;
    p=&a;
    printf("%x,%d",p,*p);
    return 0;
}