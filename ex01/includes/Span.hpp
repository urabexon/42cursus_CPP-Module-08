/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hurabe <hurabe@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/26 16:38:17 by urabex            #+#    #+#             */
/*   Updated: 2025/03/27 12:39:49 by hurabe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <algorithm>
#include <climits>
#include <cstdlib>
#include <exception>
#include <iostream>
#include <vector>

class Span {
	public:
  		Span(unsigned int len);
  		Span(const Span &src);
		Span& operator=(const Span &src);
  		~Span();

  		void addNumber(int nb);
  		void fillRandNumber();
  		unsigned int shortestSpan();
  		unsigned int longestSpan();

	private:
 		Span();
  		std::vector<int> _vector;
  		unsigned int _vecLen;
  		unsigned int _currentLen;
  		bool _isSorted;
};

#endif
