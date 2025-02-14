#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
    float mile = 0;
    printf("100 킬로미터(km)는 몇 마일(mile)? ");
    scanf("%f", &mile);
    printf("80 킬로미터 : %.2f 마일\n\n", mile * 80.);
    //80. 을 사용하면 타입 변환이 명확해지고, 연산 과정에서 불필요한 혼동을 줄일 수 있음
    
    double liter = 0;
    printf("1 갤론(gallon)은 몇 리터(liter)? ");
    scanf("%lf", &liter);
    printf("18 갤론 : %.2f 리터\n", liter * 18);
    
    return 0;
}
