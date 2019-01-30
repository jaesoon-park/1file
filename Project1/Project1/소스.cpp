#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	/*미터m 인치 in 피트ft 야드yd간의 길이 변환 구하기*/
	//조건문 if 사용 과 반복문 while을 사용 
	
	
	int a = 0;
	int b = 0;
	double c = 0;

	

		printf("다음 단위에서 [변환할 단위] -> [변환결과 단위]로 연산합니다.\n");
		puts("");
		puts("");
		puts("");

		
			printf(" [1] 미터(m) [2] 인치(in) [3] 피트(ft) [4] 야드(yd) [0] 종료(stop)\n");
			printf("변환할 단위의 번호를 두가지 고르세요  ->  ");
			scanf("%d %d", &a, &b);
       do
	   {
			printf("변환할 단위의 길이를 입력하세요 >>> ");

		    scanf("%lf", &c);

			if (c == 0)
			{
				printf("종료합니다");
				break;
			}
			

			if (a == 1)
			{
				if (b == 2)
					printf("[결과] %.2f(미터) -> %f.2(인치)\n", c, c * 39.370079);

				else if (b == 3)
					printf("[결과] %.2f(미터) -> %f.2(인치)\n", c, c * 3.28084);

				else if (b == 4)
					printf("[결과] %.2f(미터) -> %f.2(인치)\n", c, c * 1.093613);
			}

			if (a == 2)
			{
				if (b == 1)
					printf("[결과] %.2f(미터) -> %f.2(인치)\n", c, c * 0.0254);

				else if (b == 3)
					printf("[결과] %.2f(미터) -> %f.2(인치)\n", c, c * 0.083333);

				else if (b == 4)
					printf("[결과] %.2f(미터) -> %f.2(인치)\n", c, c * 0.027778);
			}

			if (a == 3)
			{
			    if (b == 1)
					printf("[결과] %.2f(미터) -> %f.2(인치)\n", c, c * 0.3048);

				else if (b == 2)
					printf("[결과] %.2f(미터) -> %f.2(인치)\n", c, c * 12);

				else if (b == 4)
					printf("[결과] %.2f(미터) -> %f.2(인치)\n", c, c * 0.333333);
			}


			if (a == 4)
			{
				if (b == 1)
					printf("[결과] %.2f(미터) -> %f.2(인치)\n", c, c * 0.9144);

				else if (b == 2)
					printf("[결과] %.2f(미터) -> %f.2(인치)\n", c, c * 36);

				else if (b == 3)
					printf("[결과] %.2f(미터) -> %f.2(인치)\n", c, c * 3);
			}


		} while (1);
		
	
}