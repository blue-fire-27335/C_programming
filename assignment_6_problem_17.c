#include<stdio.h>
int main (){
    int num,flag=1,i=1,sum=0;
    printf("enter a number\n");
    scanf("%d",&num);
    if(num==1) flag=0;
    while(i<num/2){
        if(num%i==0){
            flag=0;
            break;
        }
        i++;
    }
    while(num>0){
        sum=sum+num%10;
        num/=10;
        i++;
    }
    if(flag==1){
        if(sum==14)printf("Prime and sum is 14");
        else printf("prime and sum is not 14");
    if(flag==0) {
        if(sum==14) printf("is not Prime");
        else printf("is not prime and sum is not 14");}
    }
    return 0;
}