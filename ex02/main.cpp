/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbousset <hbousset@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/15 17:36:56 by hbousset          #+#    #+#             */
/*   Updated: 2025/11/15 17:38:53 by hbousset         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include <iostream>

int main()
{
	Base* base = new Base();
	A* a = new A();
	B* b = new B();
	C* c = new C();

	std::cout << "Base created" << std::endl;
	std::cout << "A created" << std::endl;
	std::cout << "B created" << std::endl;
	std::cout << "C created" << std::endl;

	delete base;
	delete a;
	delete b;
	delete c;

	return 0;
}
