#include<stdio.h>
void main(){
    int a[5],sum=0,i=0,max;
    printf("enter 5 numbers\n");
    for(i=0;i<5;i++){
        scanf("%d",&a[i]);
    }
    max=a[0];
    for(i=0;i<5;i++){
        if(max<a[i]) max=a[i];
    }
    printf("biggest number=%d",max);
}