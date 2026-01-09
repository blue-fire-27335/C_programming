#include<stdio.h>
void main(){
    int a[100],b[100],i,sum=0,temp,count=0,flag=0,min,pos,j;
    printf("enter elements\n");
    for(i=0;i<100;i++){
        scanf("%d",&b[i]);
        if(b[i]==0) break;
        count++;
    }
    for(i=0;i<count;i++){
        temp=b[i];
        sum=0;
    while(b[i]>0){
        sum=sum+(b[i]%10);
        b[i]/=10;
    }
        a[i]=sum;    
    }
    for(i=0;i<count;i++){
        flag=0;
        min=a[i];
       for(j=i+1;j<count;j++){
        if(a[j]<min) {
            min=a[j];
            pos=j;
            flag=1;
        }
       }
       if(flag){
        temp=a[i];
        a[i]=min;
        a[pos]=temp;
       }
    }
    printf("ascending order\n");
    for(i=0;i<count;i++){
        printf("%d\n",a[i]);
    }
}