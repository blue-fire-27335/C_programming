#include<stdio.h>
int main (){
    int num=2,i,count=0,flag=0;
       while(num<10){
        i=2;
        flag=0;
        while(i<10){
            if((num%i==0)&&(i!=num)){
                flag=1;
                break;}
        i++;
        }
        if(flag==0){
        count++;}   
        num++;
        }
        printf("no of single digit prime nos=%d",count);
    return 0;
}