/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myprosku <myprosku@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/06 18:31:00 by myprosku          #+#    #+#             */
/*   Updated: 2018/04/06 18:31:00 by myprosku         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPERTRAP_H
# define SUPERTRAP_H

# include "NinjaTrap.hpp"
# include "FragTrap.hpp"

class SuperTrap : public NinjaTrap, public FragTrap
{
public:
	SuperTrap();
	SuperTrap(std::string name);
	SuperTrap(SuperTrap const &);
	~SuperTrap();
	SuperTrap & operator = (SuperTrap const & rhs);

	virtual void	rangedAttack(std::string const & target);
	virtual void	meleeAttack(std::string const & target);
};

#endif