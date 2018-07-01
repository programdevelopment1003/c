#include <stdio.h>

int main(void){
    printf("sizeof(char)= %u\n",(unsigned)sizeof(char));
    printf("sizeof(char)= %u\n",(signed)sizeof(char));
    printf("sizeof(short)= %u\n",(unsigned)sizeof(short));
    printf("sizeof(符号付short)= %u\n",(signed)sizeof(short));
    printf("sizeof(int)= %u\n",(unsigned)sizeof(int));
    printf("sizeof(符号付int)= %u\n",(signed)sizeof(int));
     printf("sizeof(long)= %u\n",(unsigned)sizeof(long));
      printf("sizeof(符号付long)= %u\n",(signed)sizeof(long));
return 0;
}