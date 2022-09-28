#include <iostream>
#include <string>

std::string toLowerCase(std::string &);

int main()
{
	std::string line;
	getline(std::cin, line);

	std:::cout << toLowerCase(line) << std::endl;
}

std::string toLowerCase(std::string & s)
{
	for(int i = 0; i < s.size(); ++i)
	{
		if(s[i]>= 'A' && s[i] <= 'Z')
		{
			s[i] += 32;
		}
	}

	return s;
}
