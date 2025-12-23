#include<stdio.h>
int main(){
    int num,rev,a;
    printf("enter a 4 digit no\n");
    scanf("%d",&num);
    a=(num/100);
    rev=(a%10)*10+(a/10);
    rev=rev*100+(num%100);
    printf("result = %d",rev);
    return 0;
}