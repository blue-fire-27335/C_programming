#include<stdio.h>
int memcopy(int *src,int *dst,int size){
    int i;
    for(i=0;i<size;i++){
       *(dst+i)=*(src+i); 
       printf("%d\n",*(dst+i));
    }
    
}
void main(){
    int a[50],b[50],i,n;
    printf("enter size\n");
    scanf("%d",&n);
    printf("enter a number\n");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    memcopy(a,b,n);
}