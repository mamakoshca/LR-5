#include <iostream>
using namespace std;
/*
Вариант 16. Дан массив размера N. Обнулить элементы массива,
расположенные между его минимальным и максимальным элементами (не включая
минимальный и максимальный элементы).
*/
int main()
{
	setlocale(LC_ALL, "RU");
	int n, max, min, maxind, minind;
	cout << "Введите размер массива: ";
	cin >> n;
	int* a = new int[n];
	for (int i = 0; i < n; i++) {
		cout << "Введите " << i + 1 << " элменет массива: ";
		cin >> a[i];
	}

	maxind = 0;
	max = a[maxind];
	for (int i = 1; i<n; i++){
		if (a[i] > max) {
			max = a[i];
			maxind = i;
		}
	}
	
	minind = 0;
	min = a[minind];
	for (int i = 1; i < n; i++) {
		if (a[i] < min) {
			min = a[i];
			minind = i;
		}
	}

	if (minind < maxind) {
		for (int i = minind + 1; i < maxind; i++) {
			a[i] = 0;
		}
	}
	else {
		for (int i = maxind + 1; i < minind; i++) {
			a[i] = 0;
		}
	}

	for (int i = 0; i < n; i++) {
		cout << a[i] << " ";
	}
	delete a;
}
