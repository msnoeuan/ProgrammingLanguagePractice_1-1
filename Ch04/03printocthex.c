#include <stdio.h>

int main(void) {
    printf("%3o %3d %3x\n", 10, 10, 10);
    printf("%#3o %3d %#3x\n", 12, 12, 12);
    printf("%3o %3i %3X\n", 14, 14, 14);
    //printf()에선 %d와 %i가 동일하게 동작
    //단, scanf()에선 %d : 항상 10진수로 해석 / %i : 입력값의 접두사에 따라 자동 판별
    
    return 0;
}
