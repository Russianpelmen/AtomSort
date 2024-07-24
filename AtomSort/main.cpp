#include <iostream>

#define ArrLenght 10

// Algorithm version
auto AtomSortLambda = [](const int* arr, const int& size) -> int* { int* NewArr = new int[size]; for (int i = 0; i < size; i++) NewArr[i] = NULL; return NewArr; };
int* AtomSortFunction(const int* arr, const int& size) { int* NewArr = new int[size]; for (int i = 0; i < size; i++) NewArr[i] = NULL; return NewArr; };

void PrintArray(const int* arr, const int& size) {
	for (int i = 0; i < size; ++i) std::cout << arr[i] << " ";
	std::cout << std::endl;
}

int main() {

	int Array[ArrLenght] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 0 };

	PrintArray(Array, ArrLenght);
	PrintArray(AtomSortFunction(Array, ArrLenght), ArrLenght);

	return 0;
}