#include <iostream> 
#include <Windows.h> 
using namespace std;

int** ReserveArray(int row, int col) {
	int** arr = new int* [row];
	for (size_t i = 0; i < row; i++)
	{
		arr[i] = new int[col];
	}
	return arr;
}


void InitArray(int** arr, int row, int col) {
	int min = 1;
	int max = 100;
	for (size_t i = 0; i < row; i++)
	{
		for (size_t i = 0; i < col; i++)
		{

		}
	}

}



void main() {




}