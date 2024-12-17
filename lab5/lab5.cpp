#include <iostream>
#include <cstdlib>
#include <ctime>
#include <math.h>

using namespace std;

void fullArrays(int* mas, int size) {
	for (int i = 0; i < size; ++i) {
		mas[i] = rand() % (size + 1) - (size / 2);
	}
}

int sumOfSquares(int* mas, int size) {
	int sum = 0;
	for (int i = 0; i < size; ++i) {
		sum += pow(mas[i], 2);
	}
	return sum;
}

int main() {
	setlocale(LC_ALL, "ru");
	const int sizeP = 15;
	const int sizeG = 20;
	int P[sizeP];
	int G[sizeG];

	srand(time(NULL));
	fullArrays(P, sizeP);
	fullArrays(G, sizeG);

	cout << sumOfSquares(P, sizeP) << '\n' << sumOfSquares(G, sizeG);
}