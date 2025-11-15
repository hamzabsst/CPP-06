/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   displayType.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbousset <hbousset@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/15 13:55:20 by hbousset          #+#    #+#             */
/*   Updated: 2025/11/15 14:44:58 by hbousset         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ScalarConverter.hpp"

void ScalarConverter::displayChar(double value, bool possible)
{
	std::cout << "char: ";
	if (!possible || std::isnan(value) || std::isinf(value))
		std::cout << "impossible";
	else if (value < 0 || value > 127)
		std::cout << "impossible";
	else if (!isprint(static_cast<int>(value)))
		std::cout << "Non displayable";
	else
		std::cout << "'" << static_cast<char>(value) << "'";
	std::cout << std::endl;
}


void ScalarConverter::displayInt(double value, bool possible)
{
	std::cout << "int: ";
	if (!possible || std::isnan(value) || std::isinf(value))
		std::cout << "impossible";
	else if (value < INT_MIN || value > INT_MAX)
		std::cout << "impossible";
	else
		std::cout << static_cast<int>(value);
	std::cout << std::endl;
}

void ScalarConverter::displayFloat(double value, bool isPseudo)
{
	std::cout << "float: ";
	if (isPseudo)
	{
		if (std::isnan(value))
			std::cout << "nanf";
		else if (std::isinf(value))
			std::cout << (value > 0 ? "+inff" : "-inff");
	}
	else
	{
		std::cout << std::fixed << std::setprecision(1) << static_cast<float>(value) << "f";
	}
	std::cout << std::endl;
}

void ScalarConverter::displayDouble(double value, bool isPseudo)
{
	std::cout << "double: ";
	if (isPseudo)
	{
		if (std::isnan(value))
			std::cout << "nan";
		else if (std::isinf(value))
			std::cout << (value > 0 ? "+inf" : "-inf");
	}
	else
	{
		std::cout << std::fixed << std::setprecision(1) << value;
	}
	std::cout << std::endl;
}
