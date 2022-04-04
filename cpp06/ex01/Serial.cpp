#include "Serial.hpp"

uintptr_t serialize(Data * ptr)
{
	uintptr_t u_ptr;
	u_ptr = reinterpret_cast<uintptr_t>(ptr);

	return(u_ptr);
}

Data * deserialize(uintptr_t raw)
{
	Data * d_ptr;
	d_ptr = reinterpret_cast<Data *>(raw);

	return (d_ptr);
}