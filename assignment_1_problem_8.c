#include<stdio.h>
int main(){
    int a,ones;
    printf("enter a 3 digit no\n");
    scanf("%d",&a);
    ones=a%10;
    printf("ones=%d",ones);
}