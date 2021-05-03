//
//  func.c
//  C_Programming
//
//  Created by sangheon on 2021/05/03.
//

#include <stdio.h>

void changeNum(int *ptr);

// func
//call by value
// c의 함수 호출시 피호출함수의 매개변수는 호출하는 함수가 전달하는 값(value)를 복사 받는다 (변수를받는게아니라)
// 변수의 주소를 전달
// 포인터를 이용하면 피호출함수에 변수의 주소를 전달할 수 있다
// 피호출함수는 전달된 주소를 받은 포인터변수를 통해서 간접적인 방식으로 호출함수의 변수값을 변경할 수 있다.
//int main() {
//    int num = 10;
//    printf("num = %d\n", num);
//    changeNum(&num);
//    printf("num = %d\n", num);
//    return 0;
//}
//
//void changeNum(int *ptr) {
//    *ptr = 20;
//}
