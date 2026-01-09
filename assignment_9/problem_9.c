#include<stdio.h>
void main(){
    int a[6],evenc=0,i,b[6];
    printf("enter 5 numbers\n");
    for(i=0;i<5;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<5;i++){
        if(a[i]%2!=0){
            b[evenc]=a[i];
            evenc++;
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
    for(i=0;i<evenc;i++){
        printf("%d ",b[i]);
    }
}