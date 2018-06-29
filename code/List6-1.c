#include<stdio.h>
int max2(int a,int b){
    return (a > b)? a : b;
}
int main(void){
    int n1,n2;
    puts("2つの整数を入力してください");
    printf("1:"); 
    scanf("%d",&n1);
    printf("2:"); 
    scanf("%d",&n2);
    printf("大きいのは%dです\n",max2(n1,n2));

    return 0;
}