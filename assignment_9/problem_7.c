#include<stdio.h>
void main(){
    int a[5],sum=0,i=0,max,temp,j,pos,flag=0;
    printf("enter 5 numbers\n");
    max=a[0];
    for(i=0;i<5;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<5;i++){
        flag=0;
        max=a[i];
       for(j=i+1;j<5;j++){
        if(a[j]>max) {
            max=a[j];
            pos=j;
            printf("--%d %d\n",j,pos);
            flag=1;
        }
       }
       printf("_____\n");
       if(flag){
        temp=a[i];
        a[i]=max;
        a[pos]=temp;
       }
    }
    printf("ascending order\n");
    for(i=0;i<5;i++){
        printf("%d\n",a[i]);
    }
}