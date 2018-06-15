/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Objects.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klee <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/11 16:10:26 by klee              #+#    #+#             */
/*   Updated: 2018/06/11 16:10:27 by klee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Objects.hpp"

Objects::Objects(){
	
}

Objects::Objects(Objects const & obj){
	*this = obj;
}

Objects::~Objects(){

}

Objects& Objects::operator= (Objects const & obj){
	this->_curwin = obj.getCurwin();
	this->_yLoc = obj.getYLoc();
	this->_xLoc = obj.getXLoc();
	this->_character = obj.getCharacter();
	return *this;
}

WINDOW * Objects::getCurwin() const{
	return this->_curwin;
}

int		Objects::getYLoc() const{
	return this->_yLoc;
}

int		Objects::getXLoc() const{
	return this->_xLoc;
}

std::string	Objects::getCharacter() const{
	return this->_character;
}

void		Objects::setCoord(int y, int x){
	this->_xLoc = x;
	this->_yLoc = y;
}
