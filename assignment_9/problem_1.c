#include<stdio.h>
void main(){
    int a[6],sum=0,i=0;
    printf("enter 5 numbers\n");
    for(i=0;i<5;i++){
        scanf("%d",&a[i]);
        sum=sum+a[i];
    }
    printf("sum=%d",sum);
}