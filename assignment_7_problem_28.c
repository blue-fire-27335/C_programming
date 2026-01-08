#include<stdio.h>
int disp_LCM2(){
    int num1,num2,lcm,rem,hcf,p;
    printf("enter two numbers\n");
    scanf("%d %d",&num1,&num2);
    p=num1*num2;
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
    lcm=p/hcf;
    printf("lcm=%d",lcm);
}
void main(){
    disp_LCM2();
}