
// Grade_Program.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

struct Grade
{
	int num;
	string name[99];
	int math;
	int Korean;
	int English;

}allGrade[3];

char PrintGrade(int *num) {
	if (*num >= 90) {
		*num = 'A';
		return *num;
	}
	else if (*num >= 80) {
		*num = 'B';
		return *num;
	}
	else if (*num >= 70) {
		*num = 'C';
		return *num;
	}
	else {
		*num = 'F';
		return *num;
	}
}

int main()
{
	cout << "세 명의 학번, 이름, 수학, 국어, 영어 점수를 입력하세요: " << endl;

	for (int i = 0; i < 3; i++) {
		cin >> allGrade[i].num >> allGrade[i].name[99]
			>> allGrade[i].math >> allGrade[i].Korean >> allGrade[i].English;
	}

	for (int i = 0; i < 3; i++) {
		PrintGrade(&allGrade[i].math);
		PrintGrade(&allGrade[i].Korean);
		PrintGrade(&allGrade[i].English);
	}




	for (int i = 0; i < 3; i++) {
		cout << (char)allGrade[i].math << " " << (char)allGrade[i].Korean 
			<< " " << (char)allGrade[i].English << " " << endl;
	}
	

    return 0;
}

