class StockItem
{
 private:
  float value;  // current value of this stock item

 public:
  StockItem(float v);  	  	// sets initial value to v
  float getValue();       	// returns value
  void setValue(float v);	// sets value to v
  void depreciateStockItem();	// decreases value by 20%
  void print_value();   	// prints out value
};
