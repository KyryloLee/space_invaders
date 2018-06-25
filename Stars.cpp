


#include "Stars.hpp"

Stars::Stars(WINDOW * win){
	this->_curwin = win;
	this->_character = ".";
	// this->_live = live;
	this->_yLoc = 1;
	this->_xLoc = false;
	getmaxyx(this->_curwin, this->_yMax, this->_xMax);
}

Stars::Stars(Objects const & obj) : Objects(obj){
	*this = obj;
}

Stars::~Stars(){

}

Stars& Stars::operator= (Objects const & obj){
	this->_curwin = obj.getCurwin();
	this->_yLoc = obj.getYLoc();
	this->_xLoc = obj.getXLoc();
	this->_character = obj.getCharacter();
	return *this;
}

void		Stars::moveOn(){
	if (this->_yLoc != false && this->_xLoc != false)
		mvwprintw(this->_curwin, this->_yLoc, this->_xLoc, " ");
	int index = 1;
		
	if (this->_yLoc + index > this->_yMax - 2)
		this->_yLoc = 1;
	else if (this->_xLoc != false){
		this->_yLoc += index;
		if (this->_yLoc > 1)
			mvwprintw(this->_curwin, this->_yLoc, this->_xLoc, "%s", ".");
	}
}