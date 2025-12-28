#include<stdio.h>
int main(){
    int i,j,count=0,sum=0;
    for(i=0;i<100000;i++){
        j=i;
        sum=0;
        while(j>0){
            sum=sum+(j%10);
            j/=10;
        }
        if(sum==14) count++;
    }
    printf("total count=%d",count);
    return 0;
}