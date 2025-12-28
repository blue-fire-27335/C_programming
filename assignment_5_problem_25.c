#include<stdio.h>
int main(){
    int num,i,ncount=0,j,prime=0;
    printf("enter a number\n");
    scanf("%d",&num);
    for(i=0;num>0;i++){
        for(j=2;j<10;j++){
            if((num%10)%j==0||(num%10==1)){
                if((num%10)!=j){
                printf("%d %d %d\n",num%10,j,ncount);
            ncount++;
            break;}}
        }
        num/=10;
        printf("%d %d\n",i,ncount);
    }
    prime=(i-ncount);
    printf("no of single digit prime numbers=%d",prime);
    return 0;
}