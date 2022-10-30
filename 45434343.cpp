#include <iostream>
using namespace std;
int main() {
	/*int i = 1;
	do {
		cout << i;
		i++;
	} while (i <= 100);*/
	/*int a, b;
	cin >> a >> b;
	int sum = 0;
	int i=b;
	do { 
	
		if (i % 2 != 0) {
			sum = sum + i;

		}
		i--;

	} while (i >= a);
		cout << sum;*/
	/*int n;
	cin >> n;
	int i = 1;
	do {
		cout << i*i<<" ";
		i++;
	} while (i*i <= n);*/
	//29. с помощью оператора while напишите программу вывода всех четных чисел в диапазоне от 2 до 100 включительно.
	/*int i = 2;
	do {
		if (i % 2 == 0) {
			cout << i<<" ";
		}
		i++;
	} while (i <= 100);*/
	//30. С помощью оператора while напишите программу определения суммы всех нечетных чисел в диапазоне от 1 до 99 включительно.
	/*int i = 1;
	int sum = 0;
	do {
		if (i % 2 != 0) {
			sum = sum + i;
		}
		i++;
	} while (i <= 99);
	cout << sum<<" ";*/
	//17. В ЭВМ вводятся по очереди данные о росте N учащихся класса.Определить средний рост учащихся класса.
	/*int n;
	cin >> n;
	int k;
	int i = 1;
	int l = 0;
	do {
		cin >> k;
		l = l + k;
		i++;
	} while (i <= n);
	l= l / n;
	cout << l;*/
	//18. Задано натуральное число N.Найти количество натуральных чисел, не превосходящих N и не делящихся ни на одно из чисел 2, 3, 5.
	/*int n;
	cin >> n;
	int i = 1;
	do {
		if (i % 2 != 0 && i%3!= 0 && i%5!=0) {
			cout << i<<" ";
		}
		i++;
	} while (i <= n);*/
	//22. дано натуральное n.вычислить: 1 + 1 / 2 + 1 / 3 + 1 / 4 + ... + 1 / n.
/*	int n;
	cin >> n;
	double sum = 0;
	int i = 1;
	do {
		
		sum = sum + 1.0/i;
		i++;
	} while (i <= n);
	cout << sum;*/


//}