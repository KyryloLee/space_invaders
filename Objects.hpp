/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Objects.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klee <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/11 15:51:50 by klee              #+#    #+#             */
/*   Updated: 2018/06/11 15:51:52 by klee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef OBJECTS_HPP
# define OBJECTS_HPP

# include <ncurses.h>
# include <iostream>
# include <string>
# include "IObjClass.hpp"

class Objects : public IObjClass{

public:
	Objects();
	Objects(Objects const & obj);
	~Objects();
	Objects& operator= (Objects const & obj);
	WINDOW * 		getCurwin() const;
	int				getYLoc() const;
	int				getXLoc() const;
	std::string		getCharacter() const;
	void	moveOn(){};
	void			setCoord(int y, int x);

protected:
	int _xLoc;
	int _yLoc;
	int _xMax;
	int _yMax;
	std::string _character;
	WINDOW * _curwin;

};
#endif
