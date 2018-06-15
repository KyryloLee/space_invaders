/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klee <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/12 11:09:32 by klee              #+#    #+#             */
/*   Updated: 2018/06/12 11:09:33 by klee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ENEMY_HPP
# define ENEMY_HPP

# include "Objects.hpp"

class Enemy : public Objects{

public:
	Enemy(WINDOW * win, int live);
	Enemy(Objects const & obj);
	~Enemy();
	Enemy& operator= (Objects const & obj);

	virtual void	moveOn();

protected:
	int		_live;

};

#endif
