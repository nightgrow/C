// 2_arr_pointer.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

// 이차원 배열을 90도씩 돌려서 출력함

#include "stdafx.h"


int main()
{
	int arr[4][4] = {
		{ 1, 2, 3, 4 },
		{ 5, 6, 7, 8 },
		{ 9, 10, 11, 12 },
		{ 13, 14, 15, 16 }
	};


	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			printf("%3d", arr[i][j]);
		}
		printf("\n");
	}

	printf("\n");

	for (int i = 0; i < 4; i++) {
		for (int j = 3; j >= 0; j--) {
			printf("%3d", arr[j][i]);
		}
		printf("\n");
	}

	printf("\n");

	for (int i = 3; i >= 0; i--) {
		for (int j = 3; j >= 0; j--) {
			printf("%3d", arr[i][j]);
		}
		printf("\n");
	}

	printf("\n");

	for (int i = 3; i >= 0; i--) {
		for (int j = 0; j < 4; j++) {
			printf("%3d", arr[j][i]);
		}
		printf("\n");
	}


	

    return 0;
}

