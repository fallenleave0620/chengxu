#include"stdio.h"
int main(){
    int count1=0,count2=0;/*char c=[100];while(c[i]!='\n)*/
    char c;
    while((c=getchar())!='\n'){
        if(((c>='a')&&(c<='z'))||((c>='A')&&(c<='Z')))count1++;
        else if((c>='0')&&(c<='9'))count2++;
    }
    printf("alphabet%d\nnumber%d",count1,count2);
    return 0;
}