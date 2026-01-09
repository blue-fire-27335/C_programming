#include<stdio.h>
void main(){
    int a[100],i,count=0;
    printf("enter elements\n");
    for(i=0;i<100;i++){
        scanf("%d",&a[i]);
        if(a[i]==0) break;
        count++;
    }
    if(count=4&&(a[0]==a[3])){
        printf("Success");
    }
    else printf("Failure");
}
