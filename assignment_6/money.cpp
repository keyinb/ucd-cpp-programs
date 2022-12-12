#include <iostream>
using namespace std;
#include "money.h"

/** Cian Belton Assignment 5 Comp Sci for Engineers II

    This code defines the class constructors and operator methods in the header file
*/

Money::Money(int& p)//constructor to construct money with input of
{//pence assigning pounds shilling and pence the correct values
    int p_remaining;
    pound= p / (20*12);
    p_remaining= p % (20*12);
    shilling= p_remaining / 12;
    p_remaining= p_remaining % 12;
    pence= p_remaining;
}
Money Money::operator+(Money& a)//overloading + operator
{
    int p_a, p_b;
    p_a=a.pound*(20*12)+a.shilling*(12)+a.pence;//convert object a to pence
    p_b=pound*(20*12)+shilling*(12)+pence;//convert monney to pence
    int sum =p_a+p_b;//sum both pence values
    Money c(sum);//convert back to canonical form
    return c;//return the sum
}
bool Money::operator<(Money& a)
{
    int p_a, p_b;//converting all to pence once again
    p_b=pound*(20*12)+shilling*(12)+pence;
    p_a=a.pound*(20*12)+a.shilling*(12)+a.pence;

    if(p_a>p_b)//if rhs is > LHS return true
        return true;
    else
        return false;
}
void Money::operator++()//might need to add in if pence is full etc
{
    pence++;//increment pence as asked
    //convert into pence values of Money
    // and then convert back to so object is in correct structure
    int all =pound*(20*12)+shilling*(12)+pence;
    int p_remaining;
    pound= all / (20*12);
    p_remaining= all % (20*12);
    shilling= p_remaining / 12;
    p_remaining= p_remaining % 12;
    pence= p_remaining;
}
void Money::add(int d)//again might need to add in more
{
    pence+=d;//add an int to pence this time
    // and repeat as above converting to and from canonical form
    int all =pound*(20*12)+shilling*(12)+pence;
    int p_remaining;
    pound= all / (20*12);
    p_remaining= all % (20*12);
    shilling= p_remaining / 12;
    p_remaining= p_remaining % 12;
    pence= p_remaining;
}
void Money::print()
{//print values of Money to screen
    cout<< "\nPounds:   "<< pound;
    cout<< "\nShillings:   "<< shilling;
    cout<< "\nPence:   "<< pence;
}

