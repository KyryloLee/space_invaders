/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bullets.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klee <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/11 15:25:28 by klee              #+#    #+#             */
/*   Updated: 2018/06/11 15:25:29 by klee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bullets.hpp"

Bullets::Bullets(WINDOW * win, bool direction){
	this->_curwin = win;
	this->_character = "|";
	this->_direction = direction;
	this->_yLoc = false;
	this->_xLoc = false;
	getmaxyx(this->_curwin, this->_yMax, this->_xMax);
}

Bullets::Bullets(Objects const & obj) : Objects(obj){
	*this = obj;
}

Bullets::~Bullets(){

}

Bullets& Bullets::operator= (Objects const & obj){
	this->_curwin = obj.getCurwin();
	this->_yLoc = obj.getYLoc();
	this->_xLoc = obj.getXLoc();
	this->_character = obj.getCharacter();
	return *this;
}

void		Bullets::moveOn(){
	if (this->_yLoc != false)
		mvwprintw(this->_curwin, this->_yLoc, this->_xLoc, " ");
	int index = (this->_direction == true) ? -1 : 1;
		
	if (this->_yLoc + index < 1 || this->_yLoc + index > this->_yMax - 2){
		this->_yLoc = false;
		this->_xLoc = false;
	}
	else{
		this->_yLoc += index;
		mvwprintw(this->_curwin, this->_yLoc, this->_xLoc, "%s", this->_character.c_str());
	}
}
