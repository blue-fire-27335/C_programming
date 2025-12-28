#include<stdio.h>
int main (){
    int num,flag=1,i=2;
    printf("enter a number\n");
    scanf("%d",&num);
    st1:if(i<num){
        if(num%i==0||num==1){
            flag=0;
            printf("divisible by %d",i);
        }
        i++;
        goto st1;
    }
    if(flag==1) printf("%d is Prime",num);
    if(flag==0) printf("%d is not Prime",num);
    return 0;
}