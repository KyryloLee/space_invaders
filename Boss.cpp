/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Boss.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klee <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/15 15:50:25 by klee              #+#    #+#             */
/*   Updated: 2018/06/15 15:50:27 by klee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Boss.hpp"

Boss::Boss(WINDOW * win, int live){
	this->_character = "###";
	this->_curwin = win;
	this->_live = live;
	this->_yLoc = 1;
	this->_xLoc = false;
	getmaxyx(this->_curwin, this->_yMax, this->_xMax);
}

Boss::Boss(Objects const & obj){
	*this = obj;
}

Boss::~Boss(){

}

Boss& Boss::operator= (Objects const & obj){
	this->_curwin = obj.getCurwin();
	this->_yLoc = obj.getYLoc();
	this->_xLoc = obj.getXLoc();
	this->_character = obj.getCharacter();
	return *this;
}

void		Boss::moveOn(){
	mvwprintw(this->_curwin, 1, this->_xLoc, "   ");
	static int index = 1;
	if (this->_live != 0){
		if (this->_xLoc > (this->_xMax - 5))
			index = -1;
		else if (this->_xLoc < 2)
			index = 1;
		this->_xLoc += index;
		mvwprintw(this->_curwin, 1, this->_xLoc, this->_character.c_str());
	}
}

void		Boss::setLive(int i){
	this->_live = i >= 0 ? i : 0;
}

Bullets * Boss::shoot(){
	Bullets * pew = nullptr;

	if (this->_live > 0){		
		pew = new Bullets(this->_curwin, false);
		pew->setCoord(this->_yLoc + 1, this->_xLoc + 1);
	}
	return pew;
}
