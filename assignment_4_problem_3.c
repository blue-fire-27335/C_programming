#include<stdio.h>
int main(){
    int i=1,sum=0;
    st1 : if(i<=5){
        sum=sum+i;
        i++;
        goto st1;
    }
    printf("sum=%d",sum);
    return 0;
}