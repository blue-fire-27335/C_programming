#include<stdio.h>
int main (){
    int i=0;
    st1: if(i<10){
        if(i%2==1) printf("%d\n",i);
        i++;
        goto st1;
    }
}