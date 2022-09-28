#include <iostream>

void memset(char*, char, size_t);

int main()
{
	const int size = 10;
	char arr[size];
	char ch = 'A';
	memset(arr, ch, size);

	std::cout << arr << std::endl;
}

void memset(char* arr, char a, size_t count)
{
	for(int i = 0; i < count; ++i)
	{
		*(arr + i) = a;
	}
}
