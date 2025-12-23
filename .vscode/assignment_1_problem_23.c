#include<stdio.h>
int main (){
    int num;
    printf("enter a 2 digit no \n");
    scanf("%d",&num);
    num=num-((num%10+num/10)%2)*5;
    printf("result=%d",num);
    return 0;
}