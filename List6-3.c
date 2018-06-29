#include <stdio.h>
int sqr (int x){
    return x * x;
}

int diff(int a,int b){
    return (a > b) ? a : b;
}

int main(void){
    int n1,n2;
    puts("2つの整数dddddを入力してください");
    printf("1:"); 
    scanf("%d",&n1);
    printf("2:"); 
    scanf("%d",&n2);
    printf("大きい方の2乗は%d\n",diff(sqr(n1),sqr(n2)));
}