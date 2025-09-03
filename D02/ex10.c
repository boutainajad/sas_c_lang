#include <stdio.h>

int main() {
    printf("sizeof(int)        = %zu octets\n", sizeof(int));
    printf("sizeof(short)      = %zu octets\n", sizeof(short));
    printf("sizeof(long)       = %zu octets\n", sizeof(long));
    printf("sizeof(float)      = %zu octets\n", sizeof(float));
    printf("sizeof(double)     = %zu octets\n", sizeof(double));
    printf("sizeof(long double)= %zu octets\n", sizeof(long double));

    return 0;
}
