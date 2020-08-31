/*ให้เขียนการทํางานของการหาผลบวกของตัวเลขโดดที่ไม่ใช่ 0 ทุกตัวในตัวเลขที่ป้อน ไปเรื่อยๆ
จนกว่าจะเป็นเลขหลักเดียวเช่นเมื่อป้อน input เป็น 123456 จะได้ผลลัพธ์คือ 123456 -> 21-> 3*/

#include<iostream>
int sumValue();
using namespace std;
int a, b, sum = 0;
int sumValue() {
	printf("Enter your number: ");
	scanf_s("%d", &a);//123456
	if (a > 0) {
		while (a != 0) {
			b = a % 10;
			sum = sum + b;
			a = a / 10;

		}
		printf("%d", sum);
	}
	else {
		printf("kaboom");
	}
	return 0;
}
int main() {
	sumValue();
}