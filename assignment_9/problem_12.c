#include<stdio.h>
void main(){
    int a[100],count=0,sum=0,i;
    printf("enter elements\n");
    for(i=0;i<100;i++){
        scanf("%d",&a[i]);
        if(a[i]==0) break;
        count++;
        sum+=a[i];
    }
    printf("total number of elements entered=%d\n",count);
    printf("sum of the numbers entered=%d",sum);
}