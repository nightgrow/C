// snail_arr.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

// 달팽이 배열
// 정확히 이해하기!

#include "stdafx.h"


int main()
{
	int arr[4][4] = { 0 };	// 이차원 배열
	int limit;	// 반복문 돌리는 횟수
	int sum = 1;	// 배열에 넣을 수
	int i = 0, j = -1;	// 행과 열
	int a = 1;	// 방향을 가리킴

	scanf_s("%d", &limit);

	while (1)
	{
		for (int p = 0; p < limit; p++) {
			j = j + a;
			arr[i][j] = sum;
			sum++;
		}

		// 횟수가 0이 되면 반복문 종료
		limit--;
		if (limit < 0)	break;

	
		for (int p = 0; p<limit; p++) {
			i = i + a;
			arr[i][j] = sum;
			sum++;
		}

		//방향을 반대로
		a = -a;

	}
	

	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			printf("%d\t", arr[i][j]);
		}
		printf("\n");
	}

    return 0;
}

