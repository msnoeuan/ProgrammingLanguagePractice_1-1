#include <stdio.h>

int main(void) {
    char c1 = 'a';
    char c2 = 65;   //char에 숫자 대입하면 아스키코드 65번의 문자가 들어감
    char c3 = '\127';   //8진수 코드 값
    char c4 = '\x57';   //16진수 코드 값
    
    printf("문자 값(문자) : %c %c %c %c\n", c1, c2, c3, c4);
    printf("코드 값(번호) : %d %d %d %d\n", c1, c2, c3, c4);   //char로 저장했지만 %d로 출력하면 아스키코드 값이 출력됨
    
    return 0;
}
