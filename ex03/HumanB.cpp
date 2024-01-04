/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamajid <yamajid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 11:35:00 by yamajid           #+#    #+#             */
/*   Updated: 2024/01/04 11:06:11 by yamajid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string hb_n) : wpn(NULL), name(hb_n){

}

void HumanB::attack(){
    if (wpn != NULL)
        std::cout << name << " attacks with their " << wpn->getType() << std::endl;
    else
        return ;
}