//freight train class
class FreightTrain : public Train
{
    private:
    float freight_capacity; // total freight capacity value
    float per_carrige_fcapacity;//freight capacity per carriage

    public:
    FreightTrain(int freight_train_id, float freight_train_value, float per_carr_capacity); // constructor two input arguments: an integer
    //representing the Freight Train object's ID,
    //and a floating-point value representing the Freight Train object's per-carriage freight capacity.
    void update_cap(); // update the freight capacity of a Freight Train object
    float operator+(FreightTrain& a);//addition applies only to the freight capacity.
    void print_details(); // overriding inherited method...
    //method should display on the screen the ID and number of carriages of this FreightTrain object,
    //and a message saying whether or not this FreightTrain object has been registered
    void depreciateStockItem();
};

