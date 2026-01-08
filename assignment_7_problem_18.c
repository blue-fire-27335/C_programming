#include<stdio.h>
int check_first_2digits_prime()
{int num,flag=1,i=2;
    printf("enter a number\n");
    scanf("%d",&num);
    if(num==1) flag=0;
    while(i<num%100){
        if((num%100)%i==0){
            flag=0;
        }
        i++;
    }
    if(flag==1) printf("Prime");
    if(flag==0) printf("not Prime");}
    void main(){
        check_first_2digits_prime();
    }