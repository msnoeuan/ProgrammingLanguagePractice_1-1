#include <stdio.h>
#include <float.h>   //부동소수형 상수가 정의된 헤더파일

int main(void) {
    printf("float 범위 : %e %e\n", FLT_MIN, FLT_MAX);
    printf("double 범위 : %e %e\n", DBL_MIN, DBL_MAX);
    printf("long double 범위 : %e %e\n", LDBL_MIN, LDBL_MAX);
    //Xcode에서는 double과 long double이 같은 크기(8바이트)로 설장되어 있음
    
    return 0;
}
