//
//  malloc.c
//  C_Programming
//
//  Created by sangheon on 2021/05/03.
//

#include <stdio.h>
#include <stdlib.h>

//int main(void) {
//    int n[1000]; // 4 byte * 1000
//    n[0] = 10; //n[1]...n[999]까지의 메모리는 할당되었으나 사용되지 않음
//    
//    //malloc 사용
//    int *ip;
//    double *dp;
//    
//    //동적으로 int,double 자료형 크기의 메모리를 할당받음
//    ip = (int *)malloc(sizeof(int));
//    dp = (double *)malloc(sizeof(double));
//    
//    //할당된 메모리 공간에 값을 넣는다
//    *ip = 10;
//    *dp = 3.4;
//    
//    free(ip);
//    free(dp);
//    
//    return  0;
//    
//}
// malloc()
// size 는 바이트값
// malloc()함수는 할당된 메모리 블럭의 첫번째 바이트에 대한 주소를 반환한다
// 메모리를 할당할 수 없을 경우 NULL을 반환함
// malloc() 함수가 반환한 값은 반드시 포인터 변수가 받아야 한다 (주소값을 리턴하니)

//free()함수
// 동적으로 할당된 메모리 블럭의 사용이 종료되면 이 블럭을 시스템에 반납하여야 한다
// 메모리 릭 발생 할수도  (가비지 메모리 쌓여서)
//free() 함수는 동적으로 할당된 메모리 블럭에 대한 포인터를 매개변수로 함

//결론
// 정적 메모리 할당기법은 실행전에 사용할 메모리의 크기를 미리 알아야 하는데 많은 경우 사용할 메모리의 크기를 예측하기 힘들다. 이에 반해 동적 할당 기법은 메모리 낭비가 적어 효율적이다.
