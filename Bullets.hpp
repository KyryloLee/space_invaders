/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bullets.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klee <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/11 15:25:19 by klee              #+#    #+#             */
/*   Updated: 2018/06/11 15:25:21 by klee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BULLETS_HPP
# define BULLETS_HPP

# include "Objects.hpp"

class Bullets : public Objects{
	
public:
	Bullets(WINDOW * win, bool direction, std::string c);
	Bullets(Objects const & obj);
	~Bullets();
	Bullets& operator= (Objects const & obj);

	void	moveOn();

private:
	bool _direction;

};

#endif
