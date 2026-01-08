    #include<stdio.h>
    int disp_two_digit_square(){
    int num,i=0,o_num,count=0,j;
    printf("enter a number\n");
    scanf("%d",&num);
    o_num=num;
    while(num>0){
        j=4;
        while(j<10){
            if(((num%100)==j*j)&&((num%100)>9)) count++;
            j++;
        }
        num/=10;
        i++;
    }
    printf("no of perfect square numbers in %d=%d",o_num,count);
    }
    void main(){
        disp_two_digit_square();
    }