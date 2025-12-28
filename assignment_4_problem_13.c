#include<stdio.h>
int main(){
    int num,o_num,rev=0,rem;
    printf("enter a number\n");
    scanf("%d",&num);
    o_num=num;
    st1:if(num>0){
        rem=num%10;
        rev=rev*10+rem;
        num/=10;
        goto st1;
    }
    printf("reverse of %d=%d",o_num,rev);
    return 0;
}