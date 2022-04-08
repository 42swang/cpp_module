#include "Serial.hpp"

int main(void)
{
    Data *data_ptr = new Data();
    uintptr_t uin_ptr;

    data_ptr->_value = 10;
    std::cout << "[data_ptr] : " << data_ptr << std::endl; 
    std::cout << "[value] : " << data_ptr->_value << std::endl;
    std::cout << std::endl;

    uin_ptr = serialize(data_ptr);
    std::cout << "[uin_ptr] : " << uin_ptr << std::endl;
    std::cout << std::endl;

    Data *deserialize_ptr = deserialize(uin_ptr);
    std::cout << "[data_ptr] : " << deserialize_ptr << std::endl;
    std::cout << "[value] : " << deserialize_ptr->_value << std::endl;
    std::cout << std::endl;
    delete data_ptr;
   // system("leaks serial");
}