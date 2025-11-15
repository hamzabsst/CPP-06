/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbousset <hbousset@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/15 15:00:00 by hbousset          #+#    #+#             */
/*   Updated: 2025/11/15 17:31:07 by hbousset         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

int main()
{
	Data originalData;
	originalData.number = 56;
	originalData.name = "Test";
	originalData.value = 3.14159;

	std::cout << "Original Data Object:" << std::endl;
	std::cout << "  Address:  " << &originalData << std::endl;
	std::cout << "  Number:   " << originalData.number << std::endl;
	std::cout << "  Name:     " << originalData.name << std::endl;
	std::cout << "  Value:    " << std::fixed << std::setprecision(5) << originalData.value << std::endl;
	std::cout << std::endl;

	uintptr_t serialized = Serializer::serialize(&originalData);
	std::cout << "Serialized (uintptr_t): " << serialized << std::endl;
	std::cout << std::endl;

	Data *deserialized = Serializer::deserialize(serialized);
	std::cout << "Deserialized Data Object:" << std::endl;
	std::cout << "  Address:  " << &deserialized << std::endl;
	std::cout << "  Number:   " << deserialized->number << std::endl;
	std::cout << "  Name:     " << deserialized->name << std::endl;
	std::cout << "  Value:    " << std::fixed << std::setprecision(5) << deserialized->value << std::endl;
	std::cout << std::endl;

	return 0;
}
