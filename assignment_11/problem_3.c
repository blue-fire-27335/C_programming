#include<stdio.h>
int arrange_ascend(int *a){
    printf("%d\n",*a);
}
void main(){
    int i=1;
    while(i<=5){
        arrange_ascend(&i);
        i++;
    }
}