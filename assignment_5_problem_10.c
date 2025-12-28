#include<stdio.h>
int main(){
    int i,sum=0;
    for(i=10;i<=100;i++){
        if((i/10)==7&&(i%2==1))sum=sum+i;
    }
    printf("sum=%d",sum);
    return 0;
}