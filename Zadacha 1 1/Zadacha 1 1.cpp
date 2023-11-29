#include <iostream>
#include <limits>
using namespace std;

int main() {
    // Таблица основных типов данных в C++
    cout << "Data type      | Size in bytes | Minimum value | Max value" << endl;
    cout << "-------------------------------------------------------------------------------" << endl;
    cout << "short           | " << sizeof(short) << " byte        | " << numeric_limits<short>::min() << "                        | " << numeric_limits<short>::max() << endl;
    cout << "int             | " << sizeof(int) << " byte         | " << numeric_limits<int>::min() << "                       | " << numeric_limits<int>::max() << endl;
    cout << "long            | " << sizeof(long) << " byte        | " << numeric_limits<long>::min() << "                      | " << numeric_limits<long>::max() << endl;
    cout << "long long       | " << sizeof(long long) << " byte   | " << numeric_limits<long long>::min() << "                 | " << numeric_limits<long long>::max() << endl;
    cout << "float           | " << sizeof(float) << " byte       | " << numeric_limits<float>::min() << "                     | " << numeric_limits<float>::max() << endl;
    cout << "double          | " << sizeof(double) << " byte     | " << numeric_limits<double>::min() << "                    | " << numeric_limits<double>::max() << endl;
    cout << "char            | " << sizeof(char) << " byte        | " << static_cast<int>(numeric_limits<char>::min()) << "                       | " << static_cast<int>(numeric_limits<char>::max()) << endl;

    // Демонстрация переменных каждого типа данных
    short shortVar = 32767;
    int intVar = 2147483647;
    long longVar = 9223372036854775807;
    float floatVar = 3.40282e+38;
    double doubleVar = 1.79769e+308;
    char charVar = 'A';

    cout << "\nDemonstration of variables of each data type:" << endl;
    cout << "short: " << shortVar << endl;
    cout << "int: " << intVar << endl;
    cout << "long: " << longVar << endl;
    cout << "float: " << floatVar << endl;
    cout << "double: " << doubleVar << endl;
    cout << "char: " << charVar << endl;

    // Смоделировать ситуацию переполнения для типа данных int
    int maxIntValue = 2147483647;
    int overflowValue = maxIntValue + 1;
    cout << "\nOverflow for type int: " << overflowValue << endl;
    return 0;
}
//  Это происходит из-за того, что тип данных int, который обычно занимает 4 байта и может хранить значения от -2,147,483,648 до 2,147,483,647 для 32-битных систем.