#include <iostream>
#include <fstream>
using namespace std;

#include "Point.h"
#include "Line.h"
#include "Triangle.h"
#include "Equilateral.h"
//Cian Belton 19321726 Assignment 9 main program

// Initialising the static members of the Triangle and Equilateral classes to track the instances
int Triangle::triCount;
int Equilateral::equiCount;

/* Code for friend classes */
void print_Tri_details(Triangle tri)
{
    cout << "\nThe coordinates of the triangle are \n V1: (" << tri.v1.getx() << "," << tri.v1.gety() << ")\n";
    cout << "\n V2: (" << tri.v2.getx() << "," << tri.v2.gety() << ")\n";
    cout << "\n V3: (" << tri.v3.getx() << "," << tri.v3.gety() << ")\n";
}

void print_Equi_details(Equilateral eq)
{
    cout << "\nThe length of a side of the equilateral is: " << eq.side_l << "\n";
}


int main()
{
    double x1_a, x2_a, y1_a, y2_a,
           x1_b, x2_b, y1_b, y2_b,
           x;

    ifstream fsIn; // input fs variable

    //read in coordinates for triangle  a from user
    cout << "Enter the coordinates for Triangle A in the form 'x1 y1 x2 y2': \n";
    cin >> x1_a >> y1_a >> x2_a >> y2_a;
    Triangle triA(x1_a, y1_a, x2_a, y2_a); // creating triA

    //read in coordinates for triangle from text file
    fsIn.open("comp20080-autumn2021-Asst9-data.txt");  // open the file

    // Check that the file was opened correctly
    if ( (!fsIn.is_open()||!fsIn.is_open()) )//if file is not opened properly
    {
        cout << "The file could not be opened";
        return -1;
    }
    else
    {
        // IF correctly opened, proceed by reading in data one line at a time
        fsIn >> x1_b >> y1_b >> x2_b >> y2_b;

        Triangle triB(x1_b, y1_b, x2_b, y2_b); // creating triB

        //print out the values of each triangles private data fields /
        print_Tri_details(triA);
        print_Tri_details(triB);

        //areas of triangles
        if(triA.area() == 0)
        {
            cout << "\nThe triangle is trivial.\n";
        }
        else
        {
            cout << "\nThe area of the triangle is: " << triA.area() << " units^2 and the perimeter is: " << triA.perimeter() << " units.\n";
        }

        if(triB.area() == 0)
        {
            cout << "\nThe triangle is trivial.\n";
        }
        else
        {
            cout << "\nThe area of the triangle is: " << triB.area() << " units^2 and the perimeter is: " << triB.perimeter() << " units.\n";
        }

        /* Dealing with the equialterals */
        cout << "\nEnter a value for the x coordinate for 2nd point of equilateral: ";
        cin >> x;

        Equilateral equil(x); // creating the equilateral triangle

        // Printing length of side of the equilateral to the screen
        print_Equi_details(equil);

       //are and perimeter of equilateral
        cout << "\nThe area of the equilateral is: " << equil.area() << " units^2 and the perimeter is: " << equil.perimeter() << " units.\n";

        //printig number of  Triangle and Equilateral objects that were instantiated
        cout << "\nNumber of triangles created: " << Triangle::triCount << ".  Number of equilateral triangles created: " << Equilateral::equiCount;
    }
}
