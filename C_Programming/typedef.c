//
//  main.c
//  C_Programming
//
//  Created by sangheon on 2021/05/01.
//

#include <stdio.h>

//typedef
//새로운 자료형을 정의하는 역할
// c의 기본자료형을 확장시키는 중요한 역할
// 특히 구조체 변수 선언시에 편리함
struct Person {
    char name[100];
    int age;
    int height;
    float weight;
};
typedef struct Person Person;

struct Point2D {
    int x;
    int y;
};
typedef struct Point2D Point2D;

typedef float vector[2];

//int main(int argc, const char * argv[]) {
//    Person personA,personB;
//    Point2D translate(Point2D p,Point2D delta);
//
//    //배열 자료형
//    vector v1;
//    v1[0] = 10.0f;
//    v1[1] = 10.0f;
//
//    return 0; // os에게 정상적으로 함수가 끝났다 라는 걸 알려주는 것
//}

typedef struct reason {
    char name[100];
    int age;
    int height;
    float weight;
} reason; //요렇게 한번에도 가능!


//++ C에서 함수선언
//반환자료형 함수명(인자) {
//
// }
//EXAMPLE
Point2D CFunc(Point2D a,Point2D b) {
    Point2D new_p;
    new_p.x = a.x + b.x;
    new_p.y = a.y + b.y;
    
    return new_p;
}
