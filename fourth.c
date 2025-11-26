#include<stdio.h>

int main(){
    int num=123;
    int sum=(num/10);
    int sum1=(sum%10);
    int sum2=(num%10);
    int sum3=num/100;
    printf("%d\n",sum1);
    printf("%d\n",sum2);
    printf("%d\n",sum3);
    printf("Sum=%d\n",sum1+sum2);
    printf("Sum=%d\n",sum1+sum3);
}