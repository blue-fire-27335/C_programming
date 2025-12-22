#include<stdio.h>
int main(){
    int a,tens;
    printf("enter 3 digit no\n");
    scanf("%d",&a);
    tens=(a/10)%10;
    printf("tens=%d",tens);
    return 0;
}