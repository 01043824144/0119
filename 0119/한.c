#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#endif 

#include<stdio.h>
/*
switch(변수/값) {
    case 값1:
       변수 == 값1일떄 실행될 내용;
       break;
    case 값2:
       변수 == 값2일때 실행될 내용;
       break;
...
    default:
        위의 case에 만족하지 않을때 내용;
        break;
*/

int main_8(void) {

  /*  int num;

    printf("몇 번 메뉴를 선택하시겠습니까?\n");
    printf("\t(1)짜장면\n");
    printf("\t(2)탕수육\n");
    printf("\t(3)짬뽕\n");
    printf("번호 선택: ");

    scanf("%d", &num);

    printf("-------------------------------\n");

    switch (num)
    {
    case 1:
        printf("짜장면은 5000원 입니다.");
        break;
    case 2:
        printf("탕수육은 20000원 입니다.");
        break;
    case 3:
        printf("짬뽕은 6000원 입니다.");
        break;
    default : 
        printf("없는 메뉴 입니다.");*/
    
        
        //삼항연산자
    //조건문 ? 참일 때:거짓일 때

    int num = 0, num2 = 1;
    int result = num > num2 ? 10 : -1;
    printf("%d\n\n",result);

	return 0;
}