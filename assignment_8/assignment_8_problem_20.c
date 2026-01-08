#include<stdio.h>
int disp_count_HCF2(){
     int num1,num2,hcf,rem;
    printf("enter two numbers\n");
    scanf("%d %d",&num1,&num2);
    if(num1>=num2){
        rem=num1;
        num1=num2;
        num2=rem;
    }
    while((num2%num1)!=0){
        rem=num2%num1;
        num1=rem;
        num2=num1;
    }
    hcf=num1;
    return hcf;
}
void main(){
    printf("hcf=%d",disp_count_HCF2());
}