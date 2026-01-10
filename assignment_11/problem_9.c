#include<stdio.h>
int intcon(int *src1,int size1,int *src2,int size2,int *dst){
    int i;
    for(i=0;i<=size1-1;i++){
        *(dst+i)=*(src1+i);
    }
    for(i=0;i<size2;i++){
        *(dst+size1+i)=*(src2+i);
    }
    
}
void main(){
    int a[50],b[50],c[100],i,n1,n2;
    printf("enter size\n");
    scanf("%d",&n1);
     printf("enter size\n");
    scanf("%d",&n2);
    printf("enter numbers\n");
    for(i=0;i<n1;i++){
        scanf("%d",&a[i]);
    }
    printf("enter a number\n");
    for(i=0;i<n2;i++){
        scanf("%d",&b[i]);
    }
    intcon(a,n1,b,n2,c);
    printf("concatenated array\n");
    for(i=0;i<n1+n2;i++){
        printf("%d",c[i]);
    }
}