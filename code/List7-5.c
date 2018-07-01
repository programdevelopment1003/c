#include <stdio.h>

int main(void){
    typedef unsigned size_t;

    int vi[10];
    double vd[25];

    printf("配列viのo大きさ＝%u\n",(size_t)(sizeof(vi)));
    printf("配列vdの大きさ＝%u\n",(size_t)(sizeof(vd)));
    printf("配列viの要素数＝%u\n",(size_t)(sizeof(vi) / sizeof(vi[0])));
    printf("配列vdの要素数＝%u\n",(size_t)(sizeof(vd) / sizeof(vd[0])));
   return 0;
   }