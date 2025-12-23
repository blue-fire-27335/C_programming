#include<stdio.h>
int main (){
    int num,sum;
    printf("enter a 2 digit no\n");
    scanf("%d",&num);
    sum=(num%10)+(num/10);
    printf("result=%d",sum);
    return 0;
}