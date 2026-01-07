#include<stdio.h>
int main (){
    int num,flag=1,i=1,tnum;
    printf("enter a 4 digit number\n");
    scanf("%d",&num);
    tnum=((num/100)%10)*10+(num%100)/10;
    if(tnum==1) flag=0;
    while(i<tnum){
        if(tnum%i==0){
            flag=0;
        }
        i++;
    }
    if(flag==1) printf("%d is Prime",tnum);
    if(flag==0) printf("%d is not Prime",tnum);
    return 0;
}