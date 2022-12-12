#include <iostream>
#include <math.h>
using namespace std;

#include "Point.h"
#include "Line.h"
#include "Triangle.h"

//constructor with points given by user
Triangle::Triangle(double x_1, double y_1, double x_2, double y_2)
{
    Point p(x_1,y_1);
    Point q(x_2,y_2);

    v1 = p;
    v2 = q;
    triCount++;//increment as we have just createad a new triangle
}

// returns area of a triangle using herons formula
double Triangle::area()
{
    Line v1_v2 = Line(v1, v2); // Creat the lines for the triangle
    Line v2_v3 = Line(v2, v3);
    Line v3_v1 = Line(v3, v1);

    double h = perimeter()/2; // Get 1/2 the perimeter
    double Harea = sqrt(h*(h - v1_v2.length() )*(h - v2_v3.length() )*(h - v3_v1.length()) ); // Find the area iwth herons formula
    return Harea;
}

// returns perimeter of a triangle
double Triangle::perimeter()
{
    Line v1_v2 = Line(v1, v2); // Creat the lines for the triangle
    Line v2_v3 = Line(v2, v3);
    Line v3_v1 = Line(v3, v1);

    double l_perimeter = v1_v2.length() + v2_v3.length() + v3_v1.length(); //add the 3 lengths
    return l_perimeter;
}
