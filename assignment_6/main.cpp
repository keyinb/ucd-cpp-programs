#include <iostream>
using namespace std;
#include "money.h"
/** Cian Belton Assignment 6 Comp Sci for Engineers II

    This code contains the main program to implent the code to solve assignment 6
*/
int main()
{   //variable for use in this main function
    int one, two, add;

    //Reading in user values
    cout<< "Please input the 1st integer value of pence:\n";
    cin>>one;
    cout<< "Please input the 2nd integer value of pence:\n";
    cin>>two;

    Money a(one);
    Money b(two);
    //Printing out the values of pounds, shillings, and pence for each Money object
    cout<< "Output values for Money object 1:";
    a.print();
    cout<< "\nOutput values for Money object 2:";
    b.print();
    //Printng out the values of pounds, shillings, and pence for a new Money object formed by adding the 2 Money objects
    cout<< "\nOutput values for sum of both Money objects :";
    (a+b).print();

    //deciding which if any of the money objects are larger
    if(a<b)
    {
        cout<<"\nMoney object 2 is larger than Money object 1";
    }
    else if(b<a)
    {
        cout<<"\nMoney object 1 is larger than Money object 2";
    }
    else{
        cout<<"\nMoney object 1 is equal to Money object 2";
    }

    //incrementing each money object by 1 pence
    ++a;
    cout<< "\nOutput values for Money object 1, + 1 pence:";
    a.print();

    ++b;
    cout<< "\nOutput values for Money object 2, + 1 pence:";
    b.print();

    //reading in pence value to add to each money object after having incremented them
    cout<< "\nPlease input the an integer value of pence to add to both Money objects:\n";
    cin>>add;

    a.add(add);
    cout<< "\nOutput values for Money object 1 (including the increment), plus the value of pence you just entered:";
    a.print();

    b.add(add);
    cout<< "\nOutput values for Money object 1 (including the increment), plus the value of pence you just entered:";
    b.print();


    return 0;
}
