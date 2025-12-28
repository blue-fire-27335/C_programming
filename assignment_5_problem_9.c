#include<stdio.h>
int main(){
    int i,sum=0;
    for(i=10;i<=100;i++){
        if((i%10)==5)sum=sum+i;
    }
    printf("sum=%d",sum);
    return 0;
}