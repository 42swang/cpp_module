#ifndef TYPE_HPP
#define TYPE_HPP

#include <iostream>
#include "Base.hpp"

# define RED    "\033[0;31m"
# define EOC    "\033[0;0m"
# define GREEN  "\033[0;32m"

Base * generate(void);
void identify(Base* p);
void identify(Base& p);

#endif