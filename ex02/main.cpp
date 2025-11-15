/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbousset <hbousset@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/15 17:36:56 by hbousset          #+#    #+#             */
/*   Updated: 2025/11/15 17:57:53 by hbousset         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include <iostream>

int main()
{
	Base* random1 = generate();
	std::cout << "Identify by pointer: ";
	identify(random1);
	std::cout << "Identify by reference: ";
	identify(*random1);
	std::cout << std::endl;

	delete random1;


	Base* a = new A();
	std::cout << "Created A - Identify by pointer: ";
	identify(a);
	std::cout << "Created A - Identify by reference: ";
	identify(*a);
	std::cout << std::endl;

	Base* b = new B();
	std::cout << "Created B - Identify by pointer: ";
	identify(b);
	std::cout << "Created B - Identify by reference: ";
	identify(*b);
	std::cout << std::endl;

	Base* c = new C();
	std::cout << "Created C - Identify by pointer: ";
	identify(c);
	std::cout << "Created C - Identify by reference: ";
	identify(*c);
	std::cout << std::endl;

	delete a;
	delete b;
	delete c;

	return 0;
}
