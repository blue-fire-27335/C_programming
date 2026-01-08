#include<stdio.h>
int disp_single_digit_prime(){
    int num,i=2,count=0,flag=0,t;
    printf("enter a number\n");
    scanf("%d",&num);
    while(num>0){
        flag=0;
        i=2;
        t=num%10;
        while(i<10){
            if((t!=i)&&(t%i)==0||(t==1)){
                flag=1;
                break;
            }
            i++;
        }
        if(flag==0) count++;
        num/=10;
    }
    return count;
}
void main(){
    printf("no of primes=%d",disp_single_digit_prime());
}