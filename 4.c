#include<stdio.h>
#include<math.h>
#include<assert.h>
#include<errno.h>//练习题
int main()
{
    //1
    // double a,b,c;
    // scanf("%lf/%lfs",&a,&b);
    // a=pow(a,2);
    // b=pow(b,2);
    // c=a+b;
    // printf("%.0f\n",c);
    //2
    // double r;
    // scanf("%lf",&r);
    // if(r>=0)printf("%.1f",(M_PI*pow(r,2)));
    // else printf("The number is not  corret! ");
    // return 0;
    //3
    // double x,y;
    // scanf("%lf",&x);
    // if(x<0)printf("y=2x+1(%f)\n",y=2*x+1);
    // else {
    //     if(x==0)printf("y=0(%.0f)\n",y=0);
    //     else printf("y=2*x-1(%f)",y=2*x-1);
    // }
    // return 0;
    //4
    // int a[4]={111,999,777,888},max;
    // for(int i=0;i<4;i++){
    //     printf("a[%d]=%d\n",i,a[i]);
    // }
    // for(int i=0,s=1;i<3,s<3;i++,s++){
        
    //     if((a[i]>=a[s])==1)max=a[i];
    //     else max=a[s];
        
    // }
    // printf("max=%d",max);
    //5
    // double x,y;
    // scanf("%lf",&x);
    // if(x>0)printf("%-.0f",y=3);
    // else {
    //     if(x==0)printf("%-.0f",y=5);
    //     else printf("%-.0f",y=1);
    // }
    // return 888;
    //6
//     void com(double x,double y);
//     double x,y;
//     scanf("%lf/%lf",&x,&y);
//     com(x,y);
//     return 8957687;
    //7
    // struct frinends{
    //     int age;
    // }I,Y;
    // scanf("%d/%d",&I.age,&Y.age);
    // if(I.age>Y.age)printf("age max=%d",I.age);
    // else printf("age max=%d",Y.age);
    // return 0;
    //8
    // int x,y,mix,an;
    // errno=0;
    // scanf("%d,%d,%d",&x,&y,&an);
    // mix=x+y;
    // if(((mix>an)||(mix<an))==1)printf("wrong");
    // else printf("right");
    // return 0;
    //9
    // int score;
    // scanf("%d",&score);
    // if((score>=0)&&(score<=100)==1){
    //     switch(score){
    //         case 0:
    //         case 10:
    //         case 20:
    //         case 30:
    //         case 40:
    //         case 50:
    //         case 60:printf("E");break;
    //         case 70:printf("D");break;
    //         case 80:printf("C");break;
    //         case 90:printf("B");break;
    //         case 100:printf("A");
    //         default: printf("输入分数对应区间");
    //     }
    // }
    // else printf("傻逼不会用不要算");
    // return 0;
    //10
    // double a,b;
    // char c;
    // printf("数字+运算符号+数字=\n");
    // scanf("%lf/%lf\n",&a,&b);
    // c=getchar();
    // printf("-----\n");
    // switch(c){
    //     case '+':printf("%.1f\n",a+b);break;
    //     case '-':printf("%.1f\n",a-b);break;
    //     case '*':printf("%.1f\n",a*b);break;
    //     case '/':printf("%.1f\n",a/b);break;
    //     default:printf("不合法字符");
    // }
    // return 0;
    //11
    unsigned int add,n,in,i;
    scanf("%d",&n);
    for(i=2,in=1;i<=n;i++){
        in=in*i;
    }
    printf("%d",in);
    return 0;
    
}
// //6
// void com(double x,double y){
//     if(x>=y)printf("max=%f",x);
//     else printf("max=%f",y);
// }
