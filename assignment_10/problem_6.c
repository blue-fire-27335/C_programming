#include<stdio.h>
void main(){
    char str[50],i;
    int num,temp;
     printf("enter a number\n");
    scanf("%d",&num);
    temp=num;
    num=0;
    while(temp>0){
        num=num*10+temp%10;
        temp/=10;
    }
    for(i=0;num>0;i++){
        str[i]=(num%10)+'0';
        num/=10;
    }
    str[i]='\0';
    printf("entered number as string\n");
    for(i=0;str[i]!='\0';i++){
        printf("%c\n",str[i]);
    }
}