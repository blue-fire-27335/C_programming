#include<stdio.h>
void disp_sum_all_digits(){
    int num,o_num,sum=0;
    printf("enter a number\n");
    scanf("%d",&num);
    o_num=num;
    while(num>0){
        sum=sum+num%10;
        num/=10;
    }
    printf("sum of digits in %d=%d",o_num,sum);
    
}
int main(){
    disp_sum_all_digits();
    return 0;
}