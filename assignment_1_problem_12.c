#include<stdio.h>
int main(){
    int a,ones,tens,hund,sum;
    printf("enter a 3 digit no\n");
    scanf("%d",&a);
    ones=a%10;
    tens=(a/10)%10;
    hund=(a/10)/10;
    sum=ones+tens+hund;
    printf("sum of digits = %d",sum);
    return 0;
}