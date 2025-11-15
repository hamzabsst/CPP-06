/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbousset <hbousset@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/15 13:24:42 by hbousset          #+#    #+#             */
/*   Updated: 2025/11/15 14:08:55 by hbousset         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ScalarConverter.hpp"

ScalarConverter::ScalarConverter() {}
ScalarConverter::ScalarConverter(const ScalarConverter&) {}
ScalarConverter& ScalarConverter::operator=(const ScalarConverter&) { return *this; }
ScalarConverter::~ScalarConverter() {}

void ScalarConverter::convert(const std::string& literal)
{
	if (literal.empty())
	{
		std::cerr << "Error: Empty literal" << std::endl;
		return;
	}

	if (isChar(literal))
	{
		convertFromChar(literal[1]);
		return;
	}

	if (isPseudoLiteral(literal))
	{
		convertPseudoLiteral(literal);
		return;
	}

	if (isInt(literal))
	{
		long value = std::strtol(literal.c_str(), NULL, 10);

		if (value < INT_MIN || value > INT_MAX)
		{
			std::cerr << "Error: Integer overflow" << std::endl;
			return;
		}
		convertFromInt(static_cast<int>(value));
		return;
	}

	if (isFloat(literal))
	{
		float value = std::strtof(literal.c_str(), NULL);

		if (std::isinf(value) && literal.find("inf") == std::string::npos)
		{
			std::cerr << "Error: Float overflow" << std::endl;
			return;
		}
		convertFromFloat(value);
		return;
	}

	if (isDouble(literal))
	{
		double value = std::strtod(literal.c_str(), NULL);

		if (std::isinf(value) && literal.find("inf") == std::string::npos)
		{
			std::cerr << "Error: Double overflow" << std::endl;
			return;
		}
		convertFromDouble(value);
		return;
	}

	std::cerr << "Error: Invalid literal format" << std::endl;
}
