// MergeSortedArray.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

void sort_array(int* arr, int size);

int main()
{
	int* arr1;
	int* arr2;
	int size1;
	int size2;
	int count1;
	int count2;
	int* arr3;

	std::cout << "size1 = ";
	std::cin >> size1;

	arr1 = (int*)new int[size1];

	std::cout << "size2 = ";
	std::cin >> size2;

	arr2 = (int*)new int[size2];

	std::cout << "Elements of arr1\n";
	for (int i = 0; i < size1; ++i)
	{
		std::cin >> arr1[i];
	}

	std::cout << "Elements of arr2\n";
	for (int i = 0; i < size2; ++i)
	{
		std::cin >> arr2[i];
	}

	std::cout << "Insert how many elements of arr1 to merge\n";
	std::cin >> count1;

	std::cout << "Insert how many elements of arr2 to merge\n";
	std::cin >> count2;

	int count = count1 + count2;
	arr3 = (int*)new int[count1 + count2];

	for (int i = 0, j = 0; j < count1; ++i, ++j)
	{
		arr3[i] = arr1[j];
	}
	for (int i = 0, j = count1; i < count2; ++i, ++j)
	{
		arr3[j] = arr2[i];
	}

	sort_array(arr3, count);

	std::cout << "Result after merge\n";
	for (int i = 0; i < count; ++i)
	{
		std::cout << arr3[i]<<", ";
	}
	
	delete[]arr1;
	delete[]arr2;
	delete[]arr3;
	arr1 = nullptr;
    arr2 = nullptr;
	arr3 = nullptr;

	return 0;
}


void sort_array(int* arr, int size)
{
	for (int i = 0; i < size - 1; ++i) {
		for (int j = i; j < size - 1; ++j)
		{
			if (arr[j] > arr[j + 1])
			{
				int num = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = num;
			}
		}
	}
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
