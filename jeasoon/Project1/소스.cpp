#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	/*����m ��ġ in ��Ʈft �ߵ�yd���� ���� ��ȯ ���ϱ�*/
	//���ǹ� if ��� �� �ݺ��� while�� ��� 
	
	
	int a = 0;
	int b = 0;
	double c = 0;

	

		printf("���� �������� [��ȯ�� ����] -> [��ȯ��� ����]�� �����մϴ�.\n");
		puts("");
		puts("");
		puts("");

		
			printf(" [1] ����(m) [2] ��ġ(in) [3] ��Ʈ(ft) [4] �ߵ�(yd) [0] ����(stop)\n");
			printf("��ȯ�� ������ ��ȣ�� �ΰ��� ������  ->  ");
			scanf("%d %d", &a, &b);
       do
	   {
			printf("��ȯ�� ������ ���̸� �Է��ϼ��� >>> ");

		    scanf("%lf", &c);

			if (c == 0)
			{
				printf("�����մϴ�");
				break;
			}
			

			if (a == 1)
			{
				if (b == 2)
					printf("[���] %.2f(����) -> %f.2(��ġ)\n", c, c * 39.370079);

				else if (b == 3)
					printf("[���] %.2f(����) -> %f.2(��ġ)\n", c, c * 3.28084);

				else if (b == 4)
					printf("[���] %.2f(����) -> %f.2(��ġ)\n", c, c * 1.093613);
			}

			if (a == 2)
			{
				if (b == 1)
					printf("[���] %.2f(����) -> %f.2(��ġ)\n", c, c * 0.0254);

				else if (b == 3)
					printf("[���] %.2f(����) -> %f.2(��ġ)\n", c, c * 0.083333);

				else if (b == 4)
					printf("[���] %.2f(����) -> %f.2(��ġ)\n", c, c * 0.027778);
			}

			if (a == 3)
			{
			    if (b == 1)
					printf("[���] %.2f(����) -> %f.2(��ġ)\n", c, c * 0.3048);

				else if (b == 2)
					printf("[���] %.2f(����) -> %f.2(��ġ)\n", c, c * 12);

				else if (b == 4)
					printf("[���] %.2f(����) -> %f.2(��ġ)\n", c, c * 0.333333);
			}


			if (a == 4)
			{
				if (b == 1)
					printf("[���] %.2f(����) -> %f.2(��ġ)\n", c, c * 0.9144);

				else if (b == 2)
					printf("[���] %.2f(����) -> %f.2(��ġ)\n", c, c * 36);

				else if (b == 3)
					printf("[���] %.2f(����) -> %f.2(��ġ)\n", c, c * 3);
			}


		} while (1);
		
	
}