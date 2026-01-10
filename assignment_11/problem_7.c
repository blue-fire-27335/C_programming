#include<stdio.h>
int memcomp(int *src,int *dst,int size){
    int i;
    for(i=0;i<=size-1;i++){
       if(*(dst+i)=*(src+i)) printf("Success\n");
       else printf("Failure\n");
    }
    
}
void main(){
    int a[50],b[50],i,n=0;
    printf("enter size\n");
    scanf("%d",&n);
    printf("enter a number\n");
    for(i=0;i<=n-1;i++){
        scanf("%d",&a[i]);
    }
    printf("enter a number\n");
    for(i=0;i<=n-1;i++){
        scanf("%d",&b[i]);
    }
    memcomp(a,b,n);
}