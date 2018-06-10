/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myprosku <myprosku@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/12 19:07:00 by myprosku          #+#    #+#             */
/*   Updated: 2018/04/12 19:07:00 by myprosku         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_H
# define SPAN_H
# include <iostream>
# include <algorithm>
# include <vector>
# include <list>

class Span
{
private:

	std::list<int> _arr;
	unsigned int _count;

public:

	Span();
	Span(unsigned int count);
	Span(Span const &obj);
	~Span();
	Span &operator=(Span const &obj);
	int shortestSpan();
	int longestSpan();
//	void dInt();
	void addNumber(int number);
};


#endif
