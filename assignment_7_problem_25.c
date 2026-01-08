#include<stdio.h>
int disp_single_digit_prime(){
    int num,o_num,i,count=0,flag=0,t;
    printf("enter a number\n");
    scanf("%d",&num);
    o_num=num;
    while(num>0){
        flag=0;
        i=2;
        t=num%10;
        while(i<10){
            if((t!=i)&&((t)%i)==0||t==1){
                printf("%d %d\n",t,i);
                flag=1;
                break;
            }
            i++;
        }
        if(flag==0) count++;
        printf("%d %d\n",flag,count);
        num/=10;
    }
    printf("no of primes in %d=%d",o_num,count);
}
void main(){
    disp_single_digit_prime();
}