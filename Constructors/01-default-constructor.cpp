// Create a FoodOrder class with orderId, customerName, restaurantName, totalAmount, and status.
// Create a default constructor that initializes these values with default values.
// Create functions to add items and place the order,
// and also create a destructor that prints a message when the object is destroyed.

#include <iostream>
#include <string>
using namespace std;

class FoodOrder
{
public:
    string orderId;
    string customerName;
    string restaurantName;
    double totalAmount;
    string status;

    // Default constructor
    FoodOrder()
    {
        orderId = "0";
        customerName = "NA";
        restaurantName = "NA";
        totalAmount = 0.0;
        status = "Pending";
    }

    void addItem(double price)
    {
        totalAmount += price;
    }

    void placeOrder()
    {
        status = "Placed";
        cout << "Order placed successfully!" << endl;
    }

    // Destructor
    ~FoodOrder(){
        cout << "Destructor called for orderId: " << orderId << endl;
    }
};

int main(){

    FoodOrder order1;
    order1.addItem(200);
    order1.addItem(150);
    order1.placeOrder();

    return 0;
}
