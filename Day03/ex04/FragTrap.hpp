/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myprosku <myprosku@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/05 14:17:00 by myprosku          #+#    #+#             */
/*   Updated: 2018/04/05 14:17:00 by myprosku         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_H
# define FRAGTRAP_H
# include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{

public:
	FragTrap();
	FragTrap(std::string name);
	FragTrap(FragTrap const &);
	~FragTrap();
	FragTrap & operator = (FragTrap const & rhs);

	void	vaulthunter_dot_exe(std::string const & target);
	virtual void	rangedAttack(std::string const & target);
	virtual void	meleeAttack(std::string const & target);
};

#endif