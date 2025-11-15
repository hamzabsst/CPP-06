/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   detectType.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbousset <hbousset@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/15 13:53:36 by hbousset          #+#    #+#             */
/*   Updated: 2025/11/15 14:13:20 by hbousset         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ScalarConverter.hpp"

bool ScalarConverter::isChar(const std::string& literal)
{
	return (literal.length() == 3 && literal[0] == '\'' && literal[2] == '\'');
}

bool ScalarConverter::isPseudoLiteral(const std::string& literal)
{
	return (literal == "nan" || literal == "nanf" ||
			literal == "+inf" || literal == "+inff" ||
			literal == "-inf" || literal == "-inff" ||
			literal == "inf" || literal == "inff");
}

bool ScalarConverter::isInt(const std::string& literal)
{
	if (literal.empty())
		return false;

	size_t i = 0;
	if (literal[0] == '+' || literal[0] == '-')
		i++;
	if (i >= literal.length())
		return false;
	for (; i < literal.length(); i++)
	{
		if (!isdigit(literal[i]))
			return false;
	}
	return true;
}

bool ScalarConverter::isFloat(const std::string& literal)
{
	if (literal.empty() || literal[literal.length() - 1] != 'f')
		return false;

	size_t i = 0;
	if (literal[0] == '+' || literal[0] == '-')
		i++;

	bool hasDot = false;
	bool hasDigit = false;

	for (; i < literal.length() - 1; i++)
	{
		if (literal[i] == '.')
		{
			if (hasDot)
				return false;
			hasDot = true;
		}
		else if (isdigit(literal[i]))
			hasDigit = true;
		else
			return false;
	}
	return hasDigit && hasDot;
}


bool ScalarConverter::isDouble(const std::string& literal)
{
	if (literal.empty())
		return false;

	size_t i = 0;
	if (literal[0] == '+' || literal[0] == '-')
		i++;

	bool hasDot = false;
	bool hasDigit = false;

	for (; i < literal.length(); i++)
	{
		if (literal[i] == '.')
		{
			if (hasDot)
				return false;
			hasDot = true;
		}
		else if (isdigit(literal[i]))
			hasDigit = true;
		else
			return false;
	}
	return hasDigit && hasDot;
}
