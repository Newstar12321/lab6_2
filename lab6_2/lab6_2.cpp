/*
2.	Дана квадратная матрица порядка M. Обнулить элементы матрицы,
лежащие выше побочной диагонали. Условный оператор не использовать.
*/

#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");

	size_t m;
	cout << "Введите порядок матрицы: ";
	cin >> m;

	if (m == 0)
	{
		cerr << "Ошибка: порядок матрицы не может быть равен нулю";
		return 1;
	}

	int** array;
	array = new int* [m];

	for (size_t i = 0; i < m; i++)
	{
		array[i] = new int[m];
	}

	cout << "Введите элементы матрицы:" << endl;
	for (size_t i = 0; i < m; i++)
	{
		for (size_t j = 0; j < m; j++)
		{
			cin >> array[i][j];
		}
	}

	for (size_t i = 0, k = m - 1; i < m; i++, k--)
	{
		for (size_t j = 0; j < k; j++)
		{
			array[i][j] = 0;
		}
	}

	cout << "Полученная матрица: " << endl;
	for (size_t i = 0; i < m; i++)
	{
		for (size_t j = 0; j < m; j++)
		{
			cout << array[i][j] << " ";
		}
		cout << endl;
	}

	for (size_t i = 0; i < m; i++)
	{
		delete[] array[i];
	}
	delete[] array;

}

