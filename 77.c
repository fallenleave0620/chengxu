#include<stdio.h>
#include<windows.h>
int main(void){
    struct s{
        int number;
        int app;
        float nn;
        struct s *next;
    };
    struct s a,b,c,*p,*head;
    head=&a;a.next=&b;b.next=&c;c.next=NULL;
    p=head;
    return 0;
}