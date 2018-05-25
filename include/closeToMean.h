/**
 * @file    closestToMean.h
 * @brief   Implementação da função close2mean.
 * @author  Leonardo dos Santos Matos (matos_leo95@live.com)
 * @since   24/05/2018
 * @date    25/05/2018
 */

#ifndef CLOSE_TO_MEAN_H
#define CLOSE_TO_MEAN_H

#include <algorithm>

using namespace std;


/**
 * @brief Função que calcula a média dos elementos do vetor e verifica qual elemento tem o valor mais próximo da média
 * @param first Iterator que aponta para o primeiro elemento do vetor.
 * @param last Iterator que aponta para o ultimo elemento + 1 do vetor.
 * @return close InputIterator com o valor do elemento mais próximo da média dos elementos do vetor.
 */
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