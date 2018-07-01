#include <stdio.h>

//整数x中のセットされたビット数を返す
int count_bist(unsigned x){
    int bits = 0;
    while(x) {
        if(x & 1U) bits++;
        x>>= 1;
    }
    return bits;
}

//unsigned型のビット数を返す
int int_bits(void){
    return count_bist(~0U);
}

//unsjigned型のビット内容を表示
void print_bist(unsigned x){
    int i;
    for(i = int_bits()-1; i>=0; i--){
        putchar(((x>>i)&1U)?'1':'0');
    }
}

int main(void){
    unsigned a,b;

    printf("非負の整数を二つ入力して下さい\n");
    printf("a:\n");
    scanf("%u",&a);
    printf("b:\n");
    scanf("%u",&b);

    printf("\nAのビット"); print_bist(a);
    printf("\nBのビット"); print_bist(b);
    printf("\nAND"); print_bist(a & b);
    printf("\nOR"); print_bist(a | b);
    printf("\n ROR"); print_bist(a ^ b);
    printf("\n反転"); print_bist(~a);
}