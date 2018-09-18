// BaseBallGame.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include "pch.h"
#include <stdio.h>
#include <time.h>
#include <stdlib.h>



int main()
{
	srand((unsigned)time(NULL));

	int com[3];
	int me[3];
	int strike = 0, ball = 0;
	int num = 0;

	printf("Start Game!\n\n");

	for (int i = 0; i < 3; i++) {
		com[i] = rand() % 10;
		for (int j = 0; j < i; j++) {
			if (com[i] == com[j]) {
				i--;

				break;
			}
		}
	}
	
	// start
	while (true)
	{
		num++;

		printf("3개의 숫자 선택: ");
		for (int i = 0; i < 3; i++) {
			scanf_s("%d", &me[i]);
		}
		if (me[0] == me[1] || me[1] == me[2] || me[2] == me[0]) {
			printf("중복된 값이 있습니다.");
			continue;
		}

		for (int i = 0; i < 3; i++) {
			for (int j = 0; j < 3; j++) {
				if (com[i] == me[j] && i == j) {
					strike++;
				}
				if (com[i] == me[j] && i != j) {
					ball++;
				}
			}
		}
		printf("%d번째 도전 결과: ", num);
		printf("%dstrike, %dball !\n\n", strike, ball);


		if (strike == 3) {
			printf("Game Over!\n");

			break;
		}

		strike = 0;
		ball = 0;
	}


}
