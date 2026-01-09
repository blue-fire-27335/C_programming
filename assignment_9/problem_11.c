#include<stdio.h>
void main(){
    int a[6],b[6],rem,rev,sum,i;
    printf("enter 5 elements\n");
    for(i=0;i<5;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<5;i++){
        rev=0;
        sum=0;
        while(a[i]>0){
            rem=a[i]%10;
            sum=sum+rem;
            rev=rev*10+rem;
            a[i]/=10;
        }
        a[i]=rev;
        b[i]=sum;
    }
    printf("elements of A\n");
    for(i=0;i<5;i++){
        printf("%d\n",a[i]);
    }
     printf("elements of B\n");
    for(i=0;i<5;i++){
        printf("%d\n",b[i]);
    }
}