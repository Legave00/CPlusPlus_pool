#ifndef KAREN_HPP
#define	KAREN_HPP

#include <iomanip>
#include <iostream>

class Karen
{
private:
	
	void	debug(void);
	void	error(void);
	void	warning(void);
	void	info(void);
	void	is_bad(void);

public:
	Karen();
	~Karen();

	void	complain(std::string level);
};

typedef	void	(Karen:: *met) (void);
#endif