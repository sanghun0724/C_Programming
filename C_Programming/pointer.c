//
//  pointer.c
//  C_Programming
//
//  Created by sangheon on 2021/05/02.
//
#include <stdio.h>

//도서관안에서의 책의위치 ==> Pointer
//물리적인 책이랑은 다름
//책 자체는 ->value
//포인터를 활용하여 물리적인 변수에 대해 논리적인 접근을 할수 있다.

//https://developer.apple.com/forums/thread/102727 dupicate error
// 변수의 주소를 반환하는 연산자 &
//메모리상의 주소값은 실행할때 마다 바뀔 수 있다 //강의실에 선착순으로 앉듯이 random이다

//https://diyver.tistory.com/87 포인터 이해
//int main(void) {
//    int *myPointer;
//    int myVar = 10;
//
//    printf("myVar = %d\n", myVar);
//    myPointer = &myVar;
//
//    *myPointer = 20; //myVar의 주소값을 가지고 있는 myPointer을 변경해주니 myVar 값 변경
//    printf("myVar = %d\n",myVar); //간접적인 방법으로 값 변경
//
//    printf("NULL");//Null은 포인터가 아무것도 안가르킬때 0x0
//    return 0;
//
//}

int myInt; // 정수형 자료값을 저장하는 메모리 공간의 이름
int *myPointer; //정수형 자료값을 가지는 변수의 주소를 가지는 변수



