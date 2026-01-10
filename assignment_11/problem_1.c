#include<stdio.h>
void main(){
    int num,*p;
    p=&num;
    printf("enter a number\n");
    scanf("%d",&num);
    printf("before changing=%d\n",*p);
    printf("enter a number\n");
    scanf("%d",p);
    printf("after changing=%d",*p);
}