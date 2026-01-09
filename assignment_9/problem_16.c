#include<stdio.h>
void main(){
    int a[51],b[51],c[51],i,y;
    printf("enter 50 digit number as single digit\n");
    for(i=1;i<=50;i++){
        scanf("%d",&a[i]);
    }
    printf("enter 50 digit number as single digit\n");
    i=1;
    for(i=1;i<=50;i++){
        scanf("%d",&b[i]);
    }
    a[0]=b[0]=0;
    y=0;
    for(i=50;i>=0;i--){
        c[i]=a[i]+b[i]+y;
        if(c[i]>9){
            y=1;
            c[i]=c[i]-10;
        }
        else y=0;
    }
    for(i=1;i<51;i++){
        printf("%d ",c[i]);
    }
}
