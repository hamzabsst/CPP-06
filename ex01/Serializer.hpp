/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbousset <hbousset@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/15 15:00:00 by hbousset          #+#    #+#             */
/*   Updated: 2025/11/15 17:25:22 by hbousset         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <stdint.h>
#include <string>
#include <iomanip>

struct Data
{
	int			number;
	std::string	name;
	double		value;
};

class Serializer
{
	private:
		Serializer();
		Serializer(const Serializer& other);
		Serializer& operator=(const Serializer& other);
		~Serializer();

	public:
		static uintptr_t	serialize(Data* ptr);
		static Data*		deserialize(uintptr_t raw);
};
