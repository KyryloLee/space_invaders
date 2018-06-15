/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Boss.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klee <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/15 15:50:17 by klee              #+#    #+#             */
/*   Updated: 2018/06/15 15:50:18 by klee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BOSS_HPP
# define BOSS_HPP

# include "Objects.hpp"
# include "Bullets.hpp"

class Boss : public Objects {

public:
	Boss(WINDOW * win, int live);
	Boss(Objects const & obj);
	~Boss();
	Boss& operator= (Objects const & obj);

	void		setLive(int i);
	void		moveOn();
	Bullets * 	shoot();

private:
	int		_live;

};

#endif
