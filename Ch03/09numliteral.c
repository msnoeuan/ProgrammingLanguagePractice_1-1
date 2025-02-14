#include <stdio.h>

int main(void) {
    printf("%d, %d\n", 010, 015);
    printf("%d, %d\n", 10, 15);
    printf("%d, %d\n", 0x1a, 0x15);
    
    printf("%f, ", 2.71828);
    printf("%f, ", 2.71828E+2);   //2.71828E + 2 처럼 띄어쓰기가 있을 경우 오류남
    printf("%f\n", 2.71828e-2);   //2.71828e - 2 처럼 띄어쓰기가 있을 경우 오류남
    
    return 0;
}
