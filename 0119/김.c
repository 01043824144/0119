#include<stdio.h>

//�������
// If ~ else 
// Switch

/*
���ǽ��̶�� ���� �������  1, 0 ���϶� �����. else �� �����϶� ����
	if(���ǽ� / condition){ } else {}

	if(���ǽ�A) {
	 //���ǽ� A�� ���� �� ����
	} else if (���ǽ�B) {
	 //���ǽ� B�� ���� �� ����
	} else if (���ǽ�C) {
	 //���ǽ� C�� ���� �� ����
	} .. else {
	 //���ǽ� A,B,C ��� ������ �� ����
	}

*/
/*
int main(void) {

	char num1 = 10, num2 = 9;

	if (num1 >= num2) {
		printf("%d�� %d���� Ů�ϴ�.", num1, num2);

	}
	else
	{
		printf("%d�� %d���� �۽��ϴ�.", num1, num2);
	}
	*/

//scanf_s

int main_1(void) {
	int num = 0;
	printf("���ڸ� �Է��ϼ��� : ");
	scanf_s("%d", &num);

	if (num % 2 == 0) {
		printf("%d�� ¦���Դϴ�.\n\n", num);
	}
	else
	{
		printf("%d�� Ȧ���Դϴ�.\n\n", num);
	}


	return 0;

}