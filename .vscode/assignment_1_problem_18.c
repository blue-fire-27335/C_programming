#include<stdio.h>
int main(){
    int num;
    printf("enter a 2 digit no\n");
    scanf("%d",&num);
    num=10+(num%10);
    printf("result = %d",num);
    return 0;
}