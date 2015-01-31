#include <stdio.h>

int max1(int i, int j) {
    if (i > j) {
        printf("%d\n", i);
    } else {
        printf("%d\n", j);
    }
}

int max2(int i, int j) {
    if (i > j) {
        return i;
    } else {
        return j;
    }
}


int main() {
    return 0;
}


