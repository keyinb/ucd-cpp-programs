#include <iostream>
using namespace std;
#include "Vehicle.h"
#include "StockItem.h"
#include "train8.h"

Train::Train(int train_id, float train_val) : Vehicle(train_id), StockItem(train_val) // calling base class constructor
{
    n_carriges=0;//initialises the number of carriages of a Train object to 0
}
void Train::set_carriges(int c)//set carriges to value from file
{
    n_carriges= c;
}

int Train::return_carriges()//method to return the number of carriages of a Train object.
{
    return n_carriges;
}
void Train::print_details() // overriding this method from Vehicle class with specs
{                           //as specified in the notes, ie registered or not
    cout << "This train is both a vehicle and a stock item. This is train number " << get_vehicle_id() << " which has ";
    cout << n_carriges << " carriges. The stock item value of this train is: "<<getValue()<< "\n";

    if (get_v_registered())
        cout << "This train has been registered\n";
    else
        cout<<"This train has not been registered\n";
}

void Train::depreciateStockItem()
{
    float temp = getValue();
    setValue(temp*0.875);
}

