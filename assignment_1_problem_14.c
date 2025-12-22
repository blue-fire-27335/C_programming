#include<stdio.h>
int main(){
    int num,rev,rem;
    rev=0;
    printf("enter 3 digit no\n");
    scanf("%d",&num);
    rem=num%10;
    num/=10;
    rev=rem*100+rev;
    rem=num%10;
    num/=10;
    rev=rem*10+rev;
    rem=num%10;
    rev=rem*1+rev;
    printf("reverse=%d",rev);
    return 0;
}