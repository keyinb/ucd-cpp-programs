#include <iostream>
using namespace std;
//include necessary headers
#include "Vehicle.h"
#include "StockItem.h"
#include "train8.h"
#include "freighttrain8.h"
#include <fstream>//include fstream to read in a file
//Cian Belton 19321726 Assignment 8 main program

int main()
{
    // Declare file stream (fs) variables
    ifstream fsIn; // input fs variable
    ofstream fsOut;
    // Open the file
    fsIn.open("comp20080-autumn2021-Asst8-data.txt");
    // associates fsIn with data.txt file
    fsOut.open("comp20080-autumn2021-Asst8-output.txt");

    if ( (!fsIn.is_open()||!fsIn.is_open()) )//if file is not opened properly
    {
        cout << "The file could not be opened";
        return -1;
    }
    else
    { // Safely use the file stream
        cout << "Reading from the file.\n";//read form the file
        int temp1, temp3, temp6, temp9, temp10, temp11;//make int values to read in the int value lines from txt file
        float temp2, temp4, temp5, temp7, temp8;//only have 2 float values
        fsIn >> temp1 >> temp2>> temp3>> temp4>> temp5>> temp6>> temp7>> temp8>>temp9>>temp10>>temp11;//read in and store in numbered temp variables
        Train train1(temp1, temp2);//train id on first line written into train 1
        FreightTrain train2(temp3, temp4, temp5);//fright train made with id number and per carriage freight capacity
        FreightTrain train3(temp6, temp7, temp8);

        //Print to the screen the details of all three objects immediately after they have been declared.
        //they will be unregistered and the freight trains wont have a non sensical value for freight
        //capacity as this variable is not initialised
        train1.print_details();
        train2.print_details();
        train3.print_details();

        //Then, register all three objects.
        train1.register_vehicle();
        train2.register_vehicle();
        train3.register_vehicle();

        // Set the number of carriages of the three objects according to the 6th line of the textfile (Train object) and
        // the 7th and 8th lines of the textfile (Freight Train objects), updating the Freight Trains’ capacities accordingly.
        train1.set_carriges(temp9);
        train2.set_carriges(temp10);
        train2.update_cap();
        train3.set_carriges(temp11);
        train3.update_cap();

        //Next, depreciate the values of all three objects.
        train1.depreciateStockItem();
        train2.depreciateStockItem();
        train3.depreciateStockItem();

        //Then print to the screen the details of all three objects
        train1.print_details();
        train2.print_details();
        train3.print_details();

        //addition
        fsOut<< "Result of adding the 2 freight train objects is that capacity is now: "
        << train2+train3 << "\n" ;

        fsIn.close();
        fsOut.close();
    }

    return 0;



}
