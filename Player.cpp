/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Player.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klee <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/11 13:27:26 by klee              #+#    #+#             */
/*   Updated: 2018/06/11 13:27:29 by klee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Player.hpp"

Player::Player(WINDOW * win, int y, int x, std::string c){
	this->_curwin = win;
	this->_yLoc = y;
	this->_xLoc = x;
	this->_character = c;
	this->_live = 10;
	getmaxyx(this->_curwin, this->_yMax, this->_xMax);
}

Player::Player(Objects const & obj) : Objects(obj){
	*this = obj;
}

Player::~Player(){

}

Player& Player::operator= (Objects const & obj){
	this->_curwin = obj.getCurwin();
	this->_yLoc = obj.getYLoc();
	this->_xLoc = obj.getXLoc();
	this->_character = obj.getCharacter();
	return *this;
}

void	Player::mvup(){
	mvwprintw(this->_curwin, this->_yLoc, this->_xLoc, " ");
	this->_yLoc -= 1;
	if (this->_yLoc < 1)
		this->_yLoc = 1;
}

void	Player::mvdown(){
	mvwprintw(this->_curwin, this->_yLoc, this->_xLoc, " ");
	this->_yLoc += 1;
	if (this->_yLoc > this->_yMax - 2)
		this->_yLoc = this->_yMax - 2;
}

void	Player::mvleft(){
	mvwprintw(this->_curwin, this->_yLoc, this->_xLoc, " ");
	this->_xLoc -= 1;
	if (this->_xLoc < 1)
		this->_xLoc = 1;
}

void	Player::mvright(){
	mvwprintw(this->_curwin, this->_yLoc, this->_xLoc, " ");
	this->_xLoc += 1;
	if (this->_xLoc > this->_xMax - 2)
		this->_xLoc = this->_xMax - 2;
}


Bullets *		Player::getmv(int choice){
	Bullets * pew = nullptr;
	switch(choice){
		case KEY_UP:
			mvup();
			break ;
		case KEY_DOWN:
			mvdown();
			break ;
		case KEY_LEFT:
			mvleft();
			break ;
		case KEY_RIGHT:
			mvright();
			break ;
		case 32:
			pew = new Bullets(this->_curwin, true);
			pew->setCoord(this->_yLoc - 1, this->_xLoc);
			break ;
		default:
			break ;
	}
	return pew;
}

void	Player::display(){
	mvwprintw(this->_curwin, this->_yLoc, this->_xLoc, "%s", this->_character.c_str());
}
