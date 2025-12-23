#include<stdio.h>
int main (){
    int num;
    printf("enter 2 digit no\n");
    scanf("%d",&num);
    num=num-(num%10);
    printf("result = %d",num);
    return 0;
}