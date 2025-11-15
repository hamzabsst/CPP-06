/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convertType.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbousset <hbousset@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/15 13:54:30 by hbousset          #+#    #+#             */
/*   Updated: 2025/11/15 14:20:30 by hbousset         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ScalarConverter.hpp"

void ScalarConverter::convertFromChar(char c)
{
	double value = static_cast<double>(c);

	displayChar(value, true);
	displayInt(value, true);
	displayFloat(value, false);
	displayDouble(value, false);
}

void ScalarConverter::convertFromInt(int value)
{
	double doubleValue = value;

	displayChar(doubleValue, true);
	displayInt(doubleValue, true);
	displayFloat(doubleValue, false);
	displayDouble(doubleValue, false);
}

void ScalarConverter::convertFromFloat(float value)
{
	double doubleValue = value;

	displayChar(doubleValue, true);
	displayInt(doubleValue, true);
	displayFloat(doubleValue, false);
	displayDouble(doubleValue, false);
}

void ScalarConverter::convertFromDouble(double value)
{
	displayChar(value, true);
	displayInt(value, true);
	displayFloat(value, false);
	displayDouble(value, false);
}

void ScalarConverter::convertPseudoLiteral(const std::string& literal)
{
	double value;
	if (literal == "nan" || literal == "nanf")
		value = NAN;
	else if (literal == "+inf" || literal == "+inff" || literal == "inf" || literal == "inff")
		value = INFINITY;
	else
		value = -INFINITY;
	displayChar(value, false);
	displayInt(value, false);
	displayFloat(value, true);
	displayDouble(value, true);
}
