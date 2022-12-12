#include <iostream>
using namespace std;

/** Header file for assignment 6, making the money class, operators and constructors
*/

class Money
{
private://Private integer fields
    int pound;
    int shilling;
    int pence;
public:
    Money(int& p);//constructor to create money type
    Money operator+(Money& a);//overloading operator +
    bool operator<(Money& a);//overloading operator<
    void operator++();//overloading operator++
    void add(int a);//method to add 2 pence to money
    void print();//print method
};
