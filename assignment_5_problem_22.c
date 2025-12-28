#include<stdio.h>
int main(){
    int num,i,o_num,count=0;
    printf("enter a number\n");
    scanf("%d",&num);
    o_num=num;
    for(i=0;num>0;i++){
        if((num%100)%2==1&&(num%100>9)){
            printf("%d\n",num%100);
            count++;}
        num/=10;
    }
    printf("no of odd numbers in %d=%d",o_num,count);
    return 0;
}