#include<stdio.h>
int main(){
    int num;
    printf("enter a number\n");
    scanf("%d",&num);
    num=num-(num%2)*5;
    printf("result = %d",num);
    return 0;
}