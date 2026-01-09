#include<stdio.h>
void main(){
    int a[5],sum=0,i=0,min,temp,j,pos,flag=0;
    printf("enter 5 numbers\n");
    min=a[0];
    for(i=0;i<5;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<5;i++){
        flag=0;
        min=a[i];
       for(j=i+1;j<5;j++){
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
    for(i=0;i<5;i++){
        printf("%d\n",a[i]);
    }
}
