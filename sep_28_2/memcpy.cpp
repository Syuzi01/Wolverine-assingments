#include <iostream>

void memcpy(char*, char*, size_t);

int main()
{
	const int size = 6;
	char src[] = "hello";
	char dest[size];

	memcpy(src, dest, size);

	std::cout << dest << std::endl;
}

void memcpy(char* src, char* dest, size_t n)
{
	
	for(int i = 0; i < n; ++i)
	{
		dest[i] = src[i];
	}

	dest[n] = '\0';
}
