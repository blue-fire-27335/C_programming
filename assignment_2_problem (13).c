#include<stdio.h>
int main(){
    int num,a,tens;
    printf("enter a 4 digit no\n");
    scanf("%d",&num);
    tens=(num/10)%10;
    a=((num%10)==tens);
    printf("result=%d",a);
    return 0;
}