// calc.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include<clocale>
using namespace std;

int main()
{
	setlocale(LC_CTYPE, "ukr");
	int a, b, sum,p;
	int i = 1;
	do {
		cout << "введіть дію : якщо ви хочете + напишіть 1";
		cout << "введіть дію : якщо ви хочете - напишіть 2";
		cout << "введіть дію : якщо ви хочете * напишіть 3";
		cout << "введіть дію : якщо ви хочете / напишіть 4";
		cin>>p ;
		cout << "введіть перше число  ";
		cin >> a;
		cout << "введіть друге число   ";
		cin >> b;
		
		int i;
		if (p == 1) {
			sum = a + b;
			cout << "ваше число " << sum;
		}
		if (p == 2) {
			sum = a - b;
			cout << "ваше число " << sum;
		}
		if (p == 3) {
			sum = a * b;
			cout << "ваше число " << sum;
		}
		if (p == 4) {
			sum = a / b;
			cout << "ваше число " << sum;
		}
		else
			cout << "Шось пішло не так";
		i = 0;
		cout << "введіть 1 якщо хочете продовжити ";
		cin >> i;
	} while (i == 1);
}