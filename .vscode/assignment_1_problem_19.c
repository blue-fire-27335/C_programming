#include<stdio.h>
int main(){
    int num;
    printf("enter a 3 digit no\n");
    scanf("%d",&num);
    num=num-(num%10)+2;
    printf("result=%d",num);
    return 0;
}