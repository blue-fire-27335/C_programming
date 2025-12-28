#include<stdio.h>
int main(){
    int i=11,sum;
    st1 : if(i<100){
            if(i%2==0&&((i%10)+(i/10))==6) printf("%d\n",i);
        
        i++;
        goto st1;}
}