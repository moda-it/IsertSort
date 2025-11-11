#include <iostream>
using namespace std;

int main() {
	
	int N;

	cout << "Введіть кількість елементів масиву: ";

	cin >> N;

	int* a = new int[N];
	cout << "Введіть " << N << " чисел:\n";
	for (int i = 0; i < N; i++) {
		cout << "a[" << i << "] = ";
		cin >> a[i];
	}

	for (int i = 1; i < N; i++) {
		int key = a[i];
		int j = i - 1;

		while (j >= 0 && a[j] > key) {
			a[j + 1] = a[j];
			j--;
		}
		a[j + 1] = key;
	}

	cout << "\nВідсортований масив:\n";
	for (int i = 0; i < N; i++) {
		cout << a[i] << '\t';
	}
	cout << endl;

	return 0;
}
