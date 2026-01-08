#include<stdio.h>
int check_prime(){
     int num,flag=1,i=1;
    printf("enter a number\n");
    scanf("%d",&num);
    if(num==1) flag==0;
    while(i<num){
        if(num%i==0){
            flag=0;

        }
        i++;
    }
    if(flag==1) printf("%d is Prime",num);
    if(flag==0) printf("%d is not Prime",num);
}
void main(){
    check_prime();
}