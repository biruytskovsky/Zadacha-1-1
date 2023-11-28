

#include <limits>


#include <iostream>

int main() {
    std::cout << "Size of int: " << sizeof(int) << " bytes ";

    std::cout << "Minimum value of int: " << std::numeric_limits<int>::lowest();
      
    std::cout << "Maximum value of int: " << std::numeric_limits<int>::max();

        return 0;
}



