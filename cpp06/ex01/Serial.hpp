#ifndef SERIAL_HPP
#define SERIAL_HPP

#include <iostream>
#include <cstdint>

struct Data
{
	int _value;
};

uintptr_t serialize(Data * ptr);
Data * deserialize(uintptr_t raw);

#endif