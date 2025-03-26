/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: urabex <urabex@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/26 16:20:11 by urabex            #+#    #+#             */
/*   Updated: 2025/03/26 16:24:24 by urabex           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef easyfind_HPP
#define easyfind_HPP

#include <iostream>
#include <algorithm>
#include <vector>
#include <set>

template <typename T>
bool    easyfind(T &container, int value) {
    if (std::find(container.begin(), container.end(), value) != container.end()) {
        std::cout << value << " Found" <<std::endl;
        return true;
    } else {
        std::cout << value << " not Found" << std::endl;
    }
    return false;
}

#endif
