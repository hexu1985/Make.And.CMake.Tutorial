#include <iostream>

#include "Hello.h"

void Hello::print()
{
# ifdef MY_STATIC
    std::cout << "Hello Static Library!" << std::endl;
#  else
    std::cout << "Hello Shared Library!" << std::endl;
#endif
}
