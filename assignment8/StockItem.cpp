#include <iostream>
using namespace std;
#include "StockItem.h"

// sets initial value to v
StockItem::StockItem(float v)
{
    value = v;//initialises the number of stock items of a stock item object to v
}

// returns value
float StockItem::getValue()
{
    return value;
}

// sets value to v
void StockItem::setValue(float v)
{
    value = v;
}

// decreases value by 20%
void StockItem::depreciateStockItem()
{
    float temp= value;
    value= temp*0.8;
}

// prints out value
void StockItem::print_value()
{
    cout << value;
}
