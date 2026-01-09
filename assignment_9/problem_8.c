#include<stdio.h>
void main(){
    int a[6],oddc=0,i,b[6];
    printf("enter 5 numbers\n");
    for(i=0;i<5;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<5;i++){
        if(a[i]%2!=1){
            b[oddc]=a[i];
            oddc++;
        }
        else{
            a[i]=0;
        }
    }
    printf("no odd numbers A\n");
    for(i=0;i<5;i++){
        printf("%d ",a[i]);
    }
    printf("\nno odd numbers B\n");
    for(i=0;i<oddc;i++){
        printf("%d ",b[i]);
    }
}