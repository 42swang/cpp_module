#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>
# define C_GREN "\033[32m"
# define C_NRML "\033[0m"

class Brain
{
private:
	std::string _ideas[100];
public:
	Brain();
	Brain(const Brain& copy);
	~Brain();
	Brain& operator=(const Brain& copy);
	void	setIdeas(int i, std::string idea);
	std::string getIdeas(int i);
};

#endif