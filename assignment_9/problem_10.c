#include<stdio.h>
void main(){
    int a[6],primec=0,i,b[6],j,flag=1;
    printf("enter 5 numbers\n");
    for(i=0;i<5;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<5;i++){
        flag=1;
        if(a[i]==1) flag=0;
        for(j=2;j<a[i];j++){
        if(a[i]%j==0&&(a[i]!=j||(a[i]==1))){
            printf("...%d %d",i,a[i]);
            flag=0;
            break;
        }
    }
    if(flag==1){
        printf("\n___\n%d %d\n",i,a[i]);
        b[primec]=a[i];
        primec++;
    }
    else{
        a[i]=0;
    }
}
    printf("no odd numbers A\n");
    for(i=0;i<5;i++){
        printf("%d ",a[i]);
    }
    printf("\nno odd numbers B\n");
    for(i=0;i<primec;i++){
        printf("%d ",b[i]);
    }
}