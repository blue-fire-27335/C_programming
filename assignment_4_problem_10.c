#include<stdio.h>
int main(){
    int i=1,sum=0;
    st1:if(i<100){
        if((i/10==7)&&(i%2==1)) sum=sum+i;
        i++;
        goto st1;
    }
    printf("sum=%d",sum);
    return 0;
}