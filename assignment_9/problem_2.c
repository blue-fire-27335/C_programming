#include<stdio.h>
void main(){
    int a[5],sum=0,i=0,avg;
    printf("enter 5 numbers\n");
    for(i=0;i<5;i++){
        scanf("%d",&a[i]);
        sum=sum+a[i];
    }
    avg=sum/5.0;
    printf("average=%d",avg);
}