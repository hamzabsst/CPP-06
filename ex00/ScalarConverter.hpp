/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbousset <hbousset@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/15 13:24:44 by hbousset          #+#    #+#             */
/*   Updated: 2025/11/15 14:43:06 by hbousset         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>
#include <iomanip>
#include <cstdlib>
#include <climits>
#include <cmath>

class ScalarConverter
{
	private:
		ScalarConverter();
		ScalarConverter(const ScalarConverter& other);
		ScalarConverter& operator=(const ScalarConverter& other);
		~ScalarConverter();

	public:

		static void	convert(const std::string& literal);

		static bool isChar(const std::string& literal);
		static bool isInt(const std::string& literal);
		static bool isFloat(const std::string& literal);
		static bool isDouble(const std::string& literal);
		static bool isPseudoLiteral(const std::string& literal);

		static void convertFromChar(char c);
		static void convertFromInt(int value);
		static void convertFromFloat(float value);
		static void convertFromDouble(double value);
		static void convertPseudoLiteral(const std::string& literal);

		static void displayChar(double value, bool possible);
		static void displayInt(double value, bool possible);
		static void displayFloat(double value, bool isPseudo);
		static void displayDouble(double value, bool isPseudo);
};
