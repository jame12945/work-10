
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