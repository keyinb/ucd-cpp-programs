#include <iostream>
using namespace std;
#include "Vehicle.h"
#include "StockItem.h"
#include "train8.h"
#include "freighttrain8.h"
//constructor with inputs freight train id and capacity per carriage
FreightTrain::FreightTrain(int freight_train_id, float freight_train_value, float per_carr_capacity) : Train(freight_train_id, freight_train_value) // calling base class constructor
{
    per_carrige_fcapacity= per_carr_capacity;//the per carriage capacity is put into the class
}
void FreightTrain::update_cap()
{
    freight_capacity= return_carriges()*per_carrige_fcapacity;//update the capacity as a product
    //of the number of carriages found via return carriages with the per carriage capacity
}

float FreightTrain::operator+(FreightTrain& a)//overloading + operator
{
    //sum is the sum if the two freight train capacities
    float sum = freight_capacity + a.freight_capacity;
    return sum;
}


void FreightTrain::print_details() // overriding this method from Vehicle class as specified
{
    cout << "This freight train is both a vehicle and a stock item. This is freight train number " << get_vehicle_id() << " which has ";
    cout << freight_capacity << " freight capacity. The stock item value of this freight train is: " << getValue() << "\n";

    if (get_v_registered())
        cout << "This freight train has been registered\n";
    else
        cout<<"This freight train has not been registered\n";
}


void FreightTrain::depreciateStockItem()
{
    float temp = getValue();
    setValue(temp*0.95);
}
