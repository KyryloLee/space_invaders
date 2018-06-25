/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Player.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klee <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/11 13:27:18 by klee              #+#    #+#             */
/*   Updated: 2018/06/11 13:27:19 by klee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PLAYER_HPP
# define PLAYER_HPP

# include <ncurses.h>
# include <iostream>
# include <string>
# include <unistd.h>
# include "Objects.hpp"
# include "Bullets.hpp"

# define NUMBER_OF_BULLETS 10

class Player : public Objects{

public:
	Player(WINDOW * win, int y, int x, std::string c);
	Player(Objects const & obj);
	~Player();
	Player& operator= (Objects const & obj);
	void		mvup();
	void		mvdown();
	void		mvleft();
	void		mvright();
	Bullets *		getmv(int choice);
	void		display();
	int			getNumberOfBullets() const;
	void		setNumberOfBullets();

private:
	int			_live;
	int 		_index;
};

#endif
