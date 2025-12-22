#include<stdio.h>
int main(){
    int a,hund;
    printf("enter 3 digit number\n");
    scanf("%d",&a);
    hund=(a/10)/10;
    printf("hundreds=%d",hund);
    return 0;
}