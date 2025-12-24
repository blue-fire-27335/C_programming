#include<stdio.h>
int main(){
    int num,a;
    printf("enter a 2 digit no\n");
    scanf("%d",&num);
    a=((num%10)!=(num/10));
    printf("result=%d",a);
    return 0;
}