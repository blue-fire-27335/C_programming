#include<stdio.h>
int main(){
    int num;
    printf("enter 3 digit no\n");
    scanf("%d",&num);
    num=num-(((num%10)%2+(num/100)%2)-1)*5;
    printf("result=%d",num);
    return 0;
}