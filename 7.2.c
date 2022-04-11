#include"stdio.h"
#include"math.h"
#include"windows.h"
#define Delta (b*b-4*a*c)
int main(){
    void answer(float a,float b,float c);
    float a,b,c;
    scanf("%f\n%f\n%f",&a,&b,&c);
    answer(a,b,c);
    printf("\n");
    system("pause");
    return 0;
}
void answer(float a,float b,float c){
    float x1,x2;
    if(Delta>=0){
        x1=(-b+sqrt(Delta))/(2*a);
        x2=(-b-sqrt(Delta))/(2*a);
        printf("x1=%3.2f,x2=%3.2f\n",x1,x2);
        if(Delta==0){
            printf("x1=x2,it has same answer");
        }
    }
    else printf("Invaild answer");
}