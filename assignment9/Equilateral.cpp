#include <iostream>
#include <math.h>
using namespace std;

#include "Point.h"
#include "Line.h"
#include "Triangle.h"
#include "Equilateral.h"

//constructor reading in x point for 2nd vertex
Equilateral::Equilateral(double x_1) : Triangle(x_1 ,0 , (x_1)*1/2, (1.732/2)*x_1)
{
    side_l = x_1; // this is side length as x_1 is distance between 2 ertices
    equiCount++; //increment as we have just createad a new equilateral
}

// overriding method for use with 1 length
double Equilateral::area()
{
    //equilateral area = sidelength^2*rooot3 over4
    double e_area = side_l*side_l*(1.732/4);
    return e_area;
}

// overriding method for use with 1 length
double Equilateral::perimeter()
{
    double e_perimeter = 3*side_l;

    return e_perimeter;
}
