#include<stdio.h>
void main(){
    int a[5],sum=0,i=0,min;
    printf("enter 5 numbers\n");
    min=a[0];
    for(i=0;i<5;i++){
        scanf("%d",&a[i]);
        if(min>a[i]) min=a[i];
    }
    printf("smallest number=%d",min);
}