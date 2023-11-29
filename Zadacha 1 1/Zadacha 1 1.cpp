

#include <limits>


#include <iostream>
// Составьте таблицу с основными типами данных в С++, их размером и мин/макс значениями.
int main() {
    std::cout << "Size of int: " << sizeof(int) << " bytes ";

    std::cout << "Minimum value of int: " << std::numeric_limits<int>::lowest();
      
    std::cout << "Maximum value of int: " << std::numeric_limits<int>::max();
    
        return 0;
}
// | bool | 1 | false | true                                                      
//| char | 1 | -128 | 127                                                       
//| unsigned char | 1 | 0 | 255                                                       
//| signed char | 1 | -128 | 127                                                       
//| short | 2 | -32, 768 | 32, 767                                                    
//| unsigned short | 2 | 0 | 65, 535                                                    
//| int | 4 | -2, 147, 483, 648 | 2, 147, 483, 647                                            
//| unsigned int | 4 | 0 | 4, 294, 967, 295                                             
//| long | 4 | -2, 147, 483, 648 | 2, 147, 483, 647                                             
//| unsigned long | 4 | 0 | 4, 294, 967, 295                                             
//| long long | 8 | -9, 223, 372, 036, 854, 775, 808 | 9, 223, 372, 036, 854, 775, 807                                 
//| unsigned long long | 8 | 0 | 18, 446, 744, 073, 709, 551, 615                                
//| float | 4 | 1.17549e-38 | 3.40282e+38                                               
//| double | 8 | 2.22507e-308 | 1.79769e+308                                              
//| long double | 16 | 3.3621e-4932 | 1.18973e+4932 

//задача 2

int main() {
    // bool
    bool boolVar = true;
    std::cout << "boolVar: " << boolVar << std::endl;

    // char
    char charVar = 'A';
    std::cout << "charVar: " << charVar << std::endl;

    // unsigned char
    unsigned char ucharVar = 200;
    std::cout << "ucharVar: " << +ucharVar << std::endl;

    // signed char
    signed char scharVar = -50;
    std::cout << "scharVar: " << +scharVar << std::endl;

    // short
    short shortVar = -3000;
    std::cout << "shortVar: " << shortVar << std::endl;

    // unsigned short
    unsigned short ushortVar = 60000;
    std::cout << "ushortVar: " << ushortVar << std::endl;

    // int
    int intVar = -2000000;
    std::cout << "intVar: " << intVar << std::endl;

    // unsigned int
    unsigned int uintVar = 4000000;
    std::cout << "uintVar: " << uintVar << std::endl;

    // long
    long longVar = -4000000000;
    std::cout << "longVar: " << longVar << std::endl;

    // unsigned long
    unsigned long ulongVar = 8000000000;
    std::cout << "ulongVar: " << ulongVar << std::endl;

    // long long
    long long longLongVar = -900000000000000;
    std::cout << "longLongVar: " << longLongVar << std::endl;

    // unsigned long long
    unsigned long long ulongLongVar = 1800000000000000;
    std::cout << "ulongLongVar: " << ulongLongVar << std::endl;

    // float
    float floatVar = 3.14f;
    std::cout << "floatVar: " << floatVar << std::endl;

    // double
    double doubleVar = 2.71828;
    std::cout << "doubleVar: " << doubleVar << std::endl;

    // long double
    long double longDoubleVar = 1.234567890123456789L;
    std::cout << "longDoubleVar: " << std::setprecision(std::numeric_limits<long double>::max_digits10) << longDoubleVar << std::endl;

    return 0;

    // задание 3

    int main() {
        int maxIntValue = 2147483647;
        int overflowValue = maxIntValue + 1;
        cout << "Overflow value: " << overflowValue << endl;
        return 0;
    }

   
    // В большинстве случаев, переменная overflowValue примет отрицательное значение, ибо произойдет переполнение значений. 
    // Это происходит из-за того, что тип данных int, который обычно занимает 4 байта и может хранить значения от -2,147,483,648 до 2,147,483,647 для 32-битных систем.