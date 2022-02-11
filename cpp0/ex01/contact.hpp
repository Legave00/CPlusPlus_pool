#ifndef CONTACT_HPP
#define CONTACT_HPP

class contact
{
	private:

	std::string first_name;
	std::string last_name;
	std::string nickname;
	std::string phone_number;
	std::string darkest_secret;

	public:

	contact();
	contact(std::string phone);
	~contact();

	void		set_pnum(void);
	std::string get_pnum(void);
	void		set_fname(void);
	std::string get_fname(void);
	void		set_lname(void);
	std::string get_lname(void);
	void		set_nickname(void);
	std::string get_nickname(void);
	void		set_secret(void);
	std::string get_secret(void);
};

#endif