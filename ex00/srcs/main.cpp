/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: urabex <urabex@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/26 16:23:06 by urabex            #+#    #+#             */
/*   Updated: 2025/03/26 16:26:17 by urabex           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main(void) {
    std::set<int> set;
    int value = 2;
    
	for (int i = 0; i < 5; i++) {
		set.insert(i);
		easyfind(set, value);
	}
	std::cout << "----------------------------------------" << std::endl;
    
	for (int i = 4; i >= 0; i--) {
		set.erase(i);
		easyfind(set, value);
	}
	std::cout << "----------------------------------------\n\n" << std::endl;

	std::vector<int> vector;
	value = 3;
	for (int i = 0; i < 5; i++) {
		vector.push_back(i);
		easyfind(vector, value);
	}
    
	std::cout << "----------------------------------------" << std::endl;
	for (int i = 4; i >= 0; i--) {
		vector.erase(vector.begin());
		easyfind(vector, value);
	}

    return 0;
}
