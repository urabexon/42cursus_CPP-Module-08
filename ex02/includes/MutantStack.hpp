/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hurabe <hurabe@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/27 14:53:27 by hurabe            #+#    #+#             */
/*   Updated: 2025/03/27 15:01:54 by hurabe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <iostream>
#include <algorithm>
#include <list>
#include <stack>
#include <deque>

//stackはdefaultでdequeを内部コンテナにつかってる
template< typename T, class Container = std::deque< T > >
class MutantStack : public std::stack< T, Container > {
	public:
		MutantStack() {}
		MutantStack(const MutantStack &src) {
			*this = src;
		}
		MutantStack &operator=(const MutantStack &src) {
			std::stack< T, Container >::operator=(src);
			return *this;
		}
		~MutantStack() {}
		
		typedef	typename Container::iterator		iterator;
		typedef typename Container::const_iterator	const_iterator;

		iterator		begin() {return this->c.begin();}
		iterator		end() {return this->c.end();}
		const_iterator	begin() const {return this->begin();}
		const_iterator	end() const {return this->end();}
};

#endif
