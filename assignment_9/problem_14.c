#include<stdio.h>
void main(){
    int a[100],i,count=0;
    printf("enter elements\n");
    for(i=0;i<100;i++){
        scanf("%d",&a[i]);
        if(a[i]==0) break;
        count++;
    }
    if(count%2){
        printf("odd cond=%d",a[count/2]);
    }
    else printf("even cond=%.1f",(a[(count-1)/2]+a[((count-1)/2)+1])/2.0);
}
