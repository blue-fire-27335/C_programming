#include<stdio.h>
int disp_descend(){
    int i=5;
    while(i>0){
        printf("%d\n",i);
        i--;
    }
}
int main(){
    disp_descend();
    return 0;
}