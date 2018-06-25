/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Game.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klee <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/08 16:12:44 by klee              #+#    #+#             */
/*   Updated: 2018/06/22 12:54:30 by klee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GAME_HPP
# define GAME_HPP

# include <ncurses.h>
# include <iostream>
# include <string>
# include "Player.hpp"
# include "Bullets.hpp"
# include "Enemy.hpp"
# include "Stars.hpp"
# include "Boss.hpp"
# include "Objects.hpp"
# include <ctime>
# include <unistd.h>


# define BOX_X_MAX 100
# define BOX_Y_MAX 40
# define MENU_X_MAX 20
# define MENU_Y_MAX 40
# define NUMBER_0F_ENEMIES 20
# define NUMBER_0F_STARS 100
# define THIS_IS_STARS	 10
# define THIS_IS_BULLETS 42
# define THIS_IS_ENEMIES 24
# define CYCLE_FOR_BOSS 5

typedef struct s_list{
	Objects			* obj;
	struct s_list	* next;
}				t_list;

class Game{

private:
	std::string _nameOfPlayer;
	WINDOW 	* 		_win;
	WINDOW	* 		_menu;
	int				_score;
	t_list 	*		_bullets;
	t_list 	*		_enemies;
	t_list	*		_stars;
	Player 	*		_player1;
	Boss 	*		_boss;
	void	addObject(Objects * obj, int index);
	void	moveBullets();
	void	moveEnemies();
	void	moveStars();
	void	delBulletsList();
	void	delEnemiesList();
	void	delStarsList();
	bool	checkShoot();
	int		refresh();
	int		_playersLives;
	int		_bossLives;
	int		_flag;
	int 	_index;
	time_t	_startAtGame;
	
public:
	Game();
	Game(Game const & obj);
	~Game();
	Game& operator= (Game const & obj);
	std::string		getName() const;

	void	NewGame();
};

#endif
