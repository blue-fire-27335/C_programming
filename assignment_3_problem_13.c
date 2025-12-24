#include<stdio.h>
int main(){
    int num;
    printf("enter a 4 digit number\n");
    scanf("%d",&num);
    if((num%10)==(num/10)%10) printf("Success");
    else printf("Failure");
    return 0;
}