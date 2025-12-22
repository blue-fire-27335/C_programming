#include<stdio.h>
int main(){
    int num,rev;
    printf("enter 2 digit no\n");
    scanf("%d",&num);
    rev=num%10;
    num/=10;
    rev=rev*10+num;
    printf("reverse=%d",rev);
    return 0;
}