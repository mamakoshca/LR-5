#include <iostream>
using namespace std;
/*
Вариант 16. Дан массив размера N и целые числа K и L (1 ≤ K ≤ L ≤ N).
Найти среднее арифметическое элементов массива с номерами от K до L
включительно
*/
int main()
{
	setlocale(LC_ALL, "RU");
	int n, k, l, count = 0;
	float sum = 0;
	int lind = 0, kind = 0;
	cout << "Введите размер массива(n), не больше 10: ";
	cin >> n;
	if (n > 10) {
		cout << "Ошибка: n > 10!!!!!";
		return 0;
	}
	cout << "Введите k, чтобы 1<=k<=l<=n: ";
	cin >> k;
	cout << "Введите l, чтобы 1<=k<=l<=n: ";
	cin >> l;
	int a[10];
	for (int i = 0; i < n; i++) {
		cout << "Введите " << i + 1 << " элемент массива: ";
		cin >> a[i];
	}
	for (int i = 1; i < n; i++) {
		if (a[i] == l) {
			lind = i;
			break;
		}
	}
	for (int i = 1; i < n; i++) {
		if (a[i] == k) {
			kind = i;
			break;
		}
	}
	for (int i = kind; i <= lind; i++) {
		sum += a[i];
		count += 1;
	}
	cout << sum / count;
}

