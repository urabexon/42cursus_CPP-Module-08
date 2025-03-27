/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hurabe <hurabe@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/26 16:38:21 by urabex            #+#    #+#             */
/*   Updated: 2025/03/27 12:37:49 by hurabe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main() {
	Span sp1 = Span(5);
	try {
    	sp1.addNumber(6);
    	sp1.addNumber(3);
    	sp1.addNumber(17);
    	sp1.addNumber(9);
    	sp1.addNumber(11);
  	} catch (std::exception& e) {
    	std::cout << e.what() << std::endl;
  	}
  	std::cout << sp1.shortestSpan() << std::endl;
  	std::cout << sp1.longestSpan() << std::endl;

  	Span sp2 = Span(10);
  	sp2.fillRandNumber();
  	std::cout << sp2.shortestSpan() << std::endl;
  	std::cout << sp2.longestSpan() << std::endl;

  	return 0;
}
