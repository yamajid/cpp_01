/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamajid <yamajid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/28 18:01:00 by yamajid           #+#    #+#             */
/*   Updated: 2024/01/04 13:34:21 by yamajid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Harl.hpp"
#include <iostream>
#include <string>
#include <map>

class Harl{
private:
    void debug();
    void info();
    void warning();
    void error();
public:
    void complain(std::string level);
}; 