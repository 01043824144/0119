#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#endif 

#include<stdio.h>
#include<time.h>


int main(void) {

	srand(time(NULL));//-랜덤값 초기화
	int result = rand() % 100 + 1; //랜덤 값 생성(1-100)
	int chance = 10; //10번 내에 맞춰
	int answer = 0; //사용자가 입력하는 값


	while (1) {
		printf("숫자를 맞춰봐 :");
		scanf("%d", &answer);

		if (result > answer){
			printf("UP!!\n");
			printf("%d번의 기회가 남았습니다.");
		}
		else if (result < answer){
			printf("DOWN!!\n");
			printf("%d번의 기회가 남았습니다.");
		}
		else if (result == answer) {

			//정답을 맟춘경우

			printf("정답을 맞췄습니다");
			break;
		}
	//기회를 다 쓴 경우 break
			if (chance == 0){
				printf("답은 %d 입니다! 실패\n", result,);
			}



	return 0;

}