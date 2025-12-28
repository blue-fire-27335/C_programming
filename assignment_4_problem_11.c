#include<stdio.h>
int main(){
    int num,i=0,o_num;
    printf("enter a number\n");
    scanf("%d",&num);
    o_num=num;
    st1:if(num>0){
        num/=10;
        i++;
        goto st1;
    }
    printf("no of digits in %d=%d",o_num,i);
    return 0;
}