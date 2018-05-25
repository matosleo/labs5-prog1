#ifndef CLOSE_TO_MEAN_H
#define CLOSE_TO_MEAN_H

#include <algorithm>

using namespace std;

template<typename InputIterator>
InputIterator closest2mean(InputIterator first, InputIterator last)
{
	InputIterator close = first;
    
    int media = accumulate(first, last, 0) / (distance(first, last));

	for(auto i = first; i != last; i++)
	{
		if (abs( media - (*i) ) < abs( media - *close ))
			close = i;
	}
	return close;
}

#endif