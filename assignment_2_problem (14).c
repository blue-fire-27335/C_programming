#include<stdio.h>
int main(){
    int num,a;
    printf("enter a 2 digit no\n");
    scanf("%d",&num);
    a=((num%100)==(num/100));
    printf("result=%d",a);
    return 0;
}