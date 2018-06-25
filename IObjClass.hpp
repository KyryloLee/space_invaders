/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IObjClass.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmisnich <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/24 10:29:17 by dmisnich          #+#    #+#             */
/*   Updated: 2018/06/24 10:29:23 by dmisnich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef IOBJCLASS_HPP
# define IOBJCLASS_HPP

# include <iostream>
# include <string>
# include <ncurses.h>

class IObjClass{

public:
	virtual ~IObjClass(){};
	virtual WINDOW * 		getCurwin() const = 0;
	virtual int				getYLoc() const = 0;
	virtual int				getXLoc() const = 0;
	virtual std::string		getCharacter() const = 0;
	virtual void	        moveOn() = 0;
	virtual void			setCoord(int y, int x) = 0;
};

#endif
