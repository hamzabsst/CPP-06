/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbousset <hbousset@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/15 17:36:37 by hbousset          #+#    #+#             */
/*   Updated: 2025/11/15 17:39:00 by hbousset         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

class Base
{
	public:
		virtual ~Base();
};

class A : public Base {
};

class B : public Base {
};

class C : public Base {
};

