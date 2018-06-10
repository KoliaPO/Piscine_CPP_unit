/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myprosku <myprosku@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/05 20:07:00 by myprosku          #+#    #+#             */
/*   Updated: 2018/04/05 20:07:00 by myprosku         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef NINJATRAP_H
# define NINJATRAP_H
# include "ClapTrap.hpp"
# include "FragTrap.hpp"
# include "ScavTrap.hpp"

class NinjaTrap : public ClapTrap
{
public:
	NinjaTrap();
	NinjaTrap(std::string name);
	NinjaTrap(NinjaTrap const &);
	~NinjaTrap();
	NinjaTrap & operator = (NinjaTrap const & rhs);

	void	ninjaShoebox(ClapTrap &clap) const;
	void	ninjaShoebox(NinjaTrap &ninja) const;
	void	ninjaShoebox(FragTrap &frag) const;
	void	ninjaShoebox(ScavTrap &scav) const;
};

#endif