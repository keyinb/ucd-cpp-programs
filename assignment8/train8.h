class Train : public Vehicle, public StockItem
{
    private:
    int n_carriges; // new data field number of carriges, not in Vehicle class

    public:
    Train(int train_id, float train_val); // constructor initialises the number of carriages of a Train object to 0
    void set_carriges(int c); // method to set the number of carriages of a Train object to the input parameter value
    int return_carriges();//method to return the number of carriages of a Train object.
    void print_details(); // overriding inherited method...
    //method should display on the screen the ID and number of carriages of this Train object,
    //and a message saying whether or not this Train object has been registered
    void depreciateStockItem();
};


