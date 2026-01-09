#include<stdio.h>
void main(){
    int a[3],b[3],c[3],i,y,num1,num2,j;
    printf("enter a 2 digit number\n");
    scanf("%d",&num1);
    printf("enter a 2 digit number\n");
    scanf("%d",&num2);
    for(i=2;i>=0;i--){
        a[i]=num1%10;
        num1/=10;
    }
    for(i=2;i>=0;i--){
        b[i]=num2%10;
        num2/=10;
    }
    y=0;
    j=1;
    for(i=2;i>=0;i--){
        c[i]=a[i]+b[i]+y;
        if(c[i]>9){
            y=1;
            c[i]=c[i]-10;
        }
        else y=0;
        
    }
    for(i=1;i<=2;i++){
        printf("%d ",c[i]);
    }
}