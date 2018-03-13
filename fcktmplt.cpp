#include <iostream>
#include <string>

template <class T>
T FTmplt(T hate){	
	return (hate);
}

int main()
{
	std::cout << FTmplt("fuck templates"); //make it feel awful
	return 0;
}
