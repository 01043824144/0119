#include<stdio.h>

//조건제어문
// If ~ else 
// Switch

/*
조건식이라는 것은 결과값이  1, 0 참일때 실행됨. else 는 거짓일때 실행
	if(조건식 / condition){ } else {}

	if(조건식A) {
	 //조건식 A가 참일 때 실행
	} else if (조건식B) {
	 //조건식 B가 참일 때 실행
	} else if (조건식C) {
	 //조건식 C가 참일 때 실행
	} .. else {
	 //조건식 A,B,C 모두 거짓일 때 실행
	}

*/
/*
int main(void) {

	char num1 = 10, num2 = 9;

	if (num1 >= num2) {
		printf("%d는 %d보다 큽니다.", num1, num2);

	}
	else
	{
		printf("%d는 %d보다 작습니다.", num1, num2);
	}
	*/

//scanf_s

int main_1(void) {
	int num = 0;
	printf("숫자를 입력하세요 : ");
	scanf_s("%d", &num);

	if (num % 2 == 0) {
		printf("%d는 짝수입니다.\n\n", num);
	}
	else
	{
		printf("%d는 홀수입니다.\n\n", num);
	}


	return 0;

}