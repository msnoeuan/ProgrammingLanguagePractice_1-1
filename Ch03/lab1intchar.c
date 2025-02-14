#include <stdio.h>

int main(void) {
    int ch = '#';   //int 자료형에 문자 저장
    printf("%d\n", ch);   //ASCII 10진 코드 값 출력
    printf("%c\n", ch);   //문자 출력
    
    int pop1 = 51800000;
    long long pop2 = 7716600000;
    printf("%d %lld\n", pop1, pop2);
    
    return 0;
}
