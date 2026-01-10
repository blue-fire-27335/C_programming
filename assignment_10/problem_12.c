#include<stdio.h>
void main(){
    char str[50],i;
    int num[50];
    printf("enter a number\n");
    for(i=0;i<50;i++){
        scanf("%d",&num[i]);
    }
    for(i=0;i<50;i++){
        str[i]=num[i]+'0';
    }
    str[i]='\0';
    printf("entered number=%s\n",str);
}