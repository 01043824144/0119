#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#endif 

#include<stdio.h>
#include<time.h>


int main(void) {

	srand(time(NULL));//-������ �ʱ�ȭ
	int result = rand() % 100 + 1; //���� �� ����(1-100)
	int chance = 10; //10�� ���� ����
	int answer = 0; //����ڰ� �Է��ϴ� ��


	while (1) {
		printf("���ڸ� ����� :");
		scanf("%d", &answer);

		if (result > answer){
			printf("UP!!\n");
			printf("%d���� ��ȸ�� ���ҽ��ϴ�.");
		}
		else if (result < answer){
			printf("DOWN!!\n");
			printf("%d���� ��ȸ�� ���ҽ��ϴ�.");
		}
		else if (result == answer) {

			//������ ������

			printf("������ ������ϴ�");
			break;
		}
	//��ȸ�� �� �� ��� break
			if (chance == 0){
				printf("���� %d �Դϴ�! ����\n", result,);
			}



	return 0;

}