#include <iostream>
#include <cstdlib>
#include <ctime>
 
using namespace std;

int main() {
	setlocale(LC_ALL, "ru");
	int P[15]{};
	int G[20]{};

	srand(time(NULL)); // добавление зависимости от программного времени для функции rand(rand генератор случайных чисел)

	for (int i = 0; i < 15; ++i) {
		P[i] = rand() % 101;
	}
	for (int i = 0; i < 20; ++i) {
		G[i] = rand() % 41 - 20;
	}

	int summP{}, summG{};

	for (int i = 0; i < 15; ++i) {
		summP += pow(P[i], 2);
	}
	for (int i = 0; i < 20; ++i) {
		summG += pow(G[i], 2);
	}

	cout << "Сумма квадратов P = " << summP << endl;
	cout << "Сумма квадратов G = " << summG << endl;
}