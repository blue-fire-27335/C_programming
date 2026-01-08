#include<stdio.h>
int disp_odd(){
    int i=1;
    while(i<10){
        if(i%2==1)printf("%d\n",i);
        i++;
    }
}
int main(){
    disp_odd();
    return 0;
}