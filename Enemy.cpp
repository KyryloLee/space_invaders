/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klee <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/12 11:09:55 by klee              #+#    #+#             */
/*   Updated: 2018/06/12 11:09:58 by klee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Enemy.hpp"

Enemy::Enemy(WINDOW * win, int live){
	this->_curwin = win;
	this->_character = "@";
	this->_live = live;
	this->_yLoc = 1;
	this->_xLoc = false;
	getmaxyx(this->_curwin, this->_yMax, this->_xMax);
}

Enemy::Enemy(Objects const & obj) : Objects(obj){
	*this = obj;
}

Enemy::~Enemy(){

}

Enemy& Enemy::operator= (Objects const & obj){
	this->_curwin = obj.getCurwin();
	this->_yLoc = obj.getYLoc();
	this->_xLoc = obj.getXLoc();
	this->_character = obj.getCharacter();
	return *this;
}

void		Enemy::moveOn(){
	if (this->_yLoc != false && this->_xLoc != false)
		mvwprintw(this->_curwin, this->_yLoc, this->_xLoc, " ");
	int index = 1;
		
	if (this->_yLoc + index > this->_yMax - 2)
		this->_yLoc = 1;
	else if (this->_xLoc != false){
		this->_yLoc += index;
		if (this->_yLoc > 1)
			mvwprintw(this->_curwin, this->_yLoc, this->_xLoc, "%s", this->_character.c_str());
	}
}

