#include<stdio.h>
int arr_inc(int *a,int n){
    int i;
    for(i=0;i<n;i++){
        *(a+i)+=1;
    }
}
void main(){
    int a[50],i,n;
    printf("enter size\n");
    scanf("%d",&n);
    printf("enter a number\n");
    for(i=0;i<n;i++){
        scanf("%d\n",&a[i]);
    }
    arr_inc(a,n);
    printf("after passing\n");
    for(i=0;i<n;i++){
       printf("%d\n",a[i]);
    }
    

}