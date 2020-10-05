#include <iostream>
//Сравнить их и вывести наименьшее на консоль.
using namespace std;
int main()
{
	int array[4] = { 1,2,3,-3 };
	for (int i = 0; i < 4; i++) {
		cout << array[i] << " ";
	}
	cout << endl;

	int min = array[0];
	for (int i = 1; i < 4; i++) {
		if (min > array[i]) {
			min = array[1];
			cout << "new min" << q;
			cout << endl;
		}
	}