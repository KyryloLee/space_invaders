
#ifndef STARS_HPP
# define STARS_HPP

# include "Objects.hpp"

class Stars : public Objects{

public:
	Stars(WINDOW * win);
	Stars(Objects const & obj);
	~Stars();
	Stars& operator= (Objects const & obj);

	virtual void	moveOn();

};

#endif