#include<stdio.h>
int main(){
    int a,ones;
    printf("enter a two digit number\n");
    scanf("%d",&a);
    ones=a%10;
    printf("ones digit = %d",ones);
    return 0;
}