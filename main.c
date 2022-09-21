#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

	char text;
int main()
{
	int num1, num2;
	printf("���ڸ� �Է��ϼ��� : ");
	scanf_s("%d", &num1);
	printf("�и� �Է��ϼ��� : ");
	scanf_s("%d", &num2);
	
	if (num2 != 0){
		if (num1 % num2){
			printf("�������� ����� %d / %d = %f\n�Դϴ�.", num1, num2, num1 / (float)num2);
	
		}else{
			printf("�������� ����� %d / %d = %d\n�Դϴ�.", num1, num2, num1/num2);
		}
	} 
	return 0;	
}
