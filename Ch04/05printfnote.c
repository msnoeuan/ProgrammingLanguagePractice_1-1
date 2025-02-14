#include <stdio.h>

int main(void) {
    printf("%d * %4d = %#5o\n", 2, 2, 2 * 2);
    printf("%d * %04d = %#5o\n", 2, 3, 2 * 3);
    printf("%d * %+04d = %-#5x\n", 2, 4, 2 * 4);
    printf("%d * %+-4d = %+#5X\n", 2, 5, 2 * 5);
    // + 는 + 표시, 0 은 0 채움, -는 좌측 정렬
    
    printf("%15.3f\n", 123456.789);
    printf("%e\n", 123456.789);
    printf("%g\n", 12.34e-5);
    printf("%G\n", 12.34e-6);   //정밀도가 높아 알아서 %E로 출력
    /*
     %f : 고정 소수점 형식
     %e 또는 %E : 지수 형식
     %g 또는 %G : 자동 선택 => f 또는 e 중 더 적합한 형식
     */
    
    return 0;
}
