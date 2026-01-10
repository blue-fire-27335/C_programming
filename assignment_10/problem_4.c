#include<stdio.h>
void main(){
    char str[50],i;
    int num=0;
    printf("enter a number\n");
    scanf("%s",str);
    for(i=0;str[i]!='\0';i++){
        if(str[i]>'0'||str[i<'9'])
        num=num*10+str[i]-'0';
    }
    printf("entered number=%d",num);
}