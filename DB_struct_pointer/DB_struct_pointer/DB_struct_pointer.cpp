// DB_struct_pointer.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"
#include "stdlib.h"
#include "string.h" 

struct Person {
	char name[20];
	int age;
	char address[20];
};

int main() {
	struct Person *p1 = (Person*)malloc((sizeof(struct Person)));

	//멤버 접근 방법
	strcpy_s((*p1).name, "윤이온");
	strcpy_s(p1->name, "윤이온");
	p1->age = 17;
	strcpy_s(p1->address, "부산 사상구");

	printf("%s\n", p1->name);
	printf("%d\n", p1->age);
	printf("%s\n", p1->address);

	free(p1);
}
