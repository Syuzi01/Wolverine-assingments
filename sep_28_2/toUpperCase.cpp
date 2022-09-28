#include <iostream>
#include <string>

std::string toUpperCase(std::string &);

int main()
{
	std::string line;
	getline(std::cin, line);

	std::cout << toUpperCase(line) << std:endl;

	return 0;
}

std::string toUpperCase(std::string & s)
{
	for(int i = 0; i < s.size(); ++i)
	{
		if(s[i] >= 'a' && s[i] <= 'z')
		{
			s[i] -= 32;
		}
	}

	return s;
}
