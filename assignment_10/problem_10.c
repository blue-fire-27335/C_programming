#include<stdio.h>
void main(){
    char str[50],i,temp;
    printf("enter a 50 digit number\n");
    scanf("%s",str);
    for(i=0;i<50;i++){
        if((str[i]>='0'||str[i]<='9')&&(i<50/2)){
         temp=str[49-i];
         str[49-i]=str[i];
         str[i]=temp;
        }
    }
    printf("In reverse\n");
    for(i=0;i<50;i++){
        printf("%c",str[i]);
    }
    }