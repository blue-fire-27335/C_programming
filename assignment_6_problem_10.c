#include<stdio.h>
int main(){
    int i=10,sum=0;
    while(i<=100){
        if((i/10)==7&&(i%2==1))sum=sum+i;
        i++;
    }
    printf("sum=%d",sum);
    return 0;
}