#include<stdio.h>
void main(){
    char str[50],i;
    int num[50];
    printf("enter a number\n");
    scanf("%s",str);
    for(i=0;str[i]!='\0';i++){
        if(str[i]>'0'||str[i<'9'])
        num[i]=str[i]-'0';
    }
    printf("entered number\n");
    for(i=0;i<50;i++){
        printf("%d",num[i]);
    }
}