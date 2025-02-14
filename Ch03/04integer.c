#include <stdio.h>

int main(void) {
    short sVar = 32000;
    int iVar = -2140000000;
    
    printf("저장 값 : %d %d\n", sVar, iVar);
    
    long long dist1 = 2720000000000;
    //__int64 dist2 = 4500000000000;  => __int64는 visual studio에서만 제공
    int64_t dist2 = 4500000000000;
    
    printf("지구와 천왕성 간의 거리(km) : %lld\n", dist1);
    printf("태양과 해왕성 간의 거리(km) : %lld\n", dist2);
    
    return 0;
}
