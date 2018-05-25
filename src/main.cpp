#include <iostream>
using std::cout;
using std::endl;
#include <vector>
using std::vector;

template<typename InputIterator>
InputIterator closest2mean(InputIterator first, InputIterator last);

int main() 
{

	vector<int> v { 1, 2, 3, 30, 40, 50 };
	auto result = closest2mean(v.begin(), v.end());
	cout << (*result) << endl;
	return 0;
}


template<typename InputIterator>
InputIterator closest2mean(InputIterator first, InputIterator last)
{
	int count = 0;
	int tam = 0;
	for(auto i = first; i != last; i++)
	{
		count += *i;
		tam++;
	}

	int media = count/tam;
		

	std::cout << media << std::endl;

	return first;
}