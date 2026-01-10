#include<stdio.h>
void main(){
    char str[50],i=0;
    printf("enter a string\n");
    scanf("%s",str);
    while(str[i]!=0){
        i++;
    }
    printf("length of the string %s = %d",str,i);
}