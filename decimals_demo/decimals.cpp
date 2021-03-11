//
// Created by Alex on 2021/3/11.
//

#include <stdio.h>

void float_hex(float *f) {
    int *p = (int *) f;
    printf("%f -> %08x\n", *f, *p);
}

void double_hex(double *d) {
    int *p = (int *) d;
    printf("%lf -> %08x %08x\n", *d, *p, *(p + 1));
}


int main() {
    float f = 0.1f;
    float_hex(&f);

    double d = 0.1;
    double_hex(&d);
    return 0;
}