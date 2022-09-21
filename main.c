#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main()
{
	int num1, num2;
	printf("분자를 입력하세요 : ");
	scanf_s("%d", &num1);
	printf("분모를 입력하세요 : ");
	scanf_s("%d", &num2);
	
	if (num2 != 0){
		if (num1 % num2){
			printf("나누기의 결과는 %d / %d = %f\n입니다.", num1, num2, num1 / (float)num2);
	
		}else{
			printf("나누기의 결과는 %d / %d = %d\n입니다.", num1, num2, num1/num2);
		}
	} 
	return 0;	
}
