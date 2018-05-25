/**
 * @file    main.h
 * @brief   Implementação da main.
 * @author  Leonardo dos Santos Matos (matos_leo95@live.com)
 * @since   24/05/2018
 * @date    25/05/2018
 */

#include "closeToMean.h"
#include <iostream>
using std::cout;
using std::endl;
#include <vector>
using std::vector;

int main() 
{

	vector<int> v { 1, 2, 3, 30, 40, 50 };
	auto result = closest2mean(v.begin(), v.end());
	cout << (*result) << endl;
	return 0;
}