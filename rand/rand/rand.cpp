// rand.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"


int main()
{
	int com;
	int num;

	srand((int)time(0));
	com = rand() % 3;

	while (true)
	{
		printf("바위는 1, 가위는 2, 보는 3입니다.\n");
		scanf_s("%d", &num);

		if (num == 0) {
			printf("프로그램을 종료합니다.\n");

			break;
		}
		if (!(num < 4 && num>0)) {
			printf(". . .\n");
			continue;
		}

		switch (num)
		{
		case 1:
			printf("당신은 바위입니다.\n");
			break;

		case 2:
			printf("당신은 가위입니다.\n");
			break;

		case 3:
			printf("당신은 보입니다.\n");
			break;
		}


		if (com == 1) {
			printf("당신은 졌습니다.\n");
		}
		else if (com == 2) {
			printf("당신은 이겼습니다.\n");
		}
		else {
			printf("당신은 비겼습니다.\n");
		}

		printf("\n");

		if (num == 0) {
			printf("프로그램을 종료합니다.\n");

			break;
		}

	}




	return 0;
}

