// Create a FoodOrder class with orderId, customerName, restaurantName, totalAmount, and status. 
// Create a parameterized constructor that initializes these values when an object is created. 
// Add a displayOrder() function to show the order details and a destructor 
// that prints a message when the object is destroyed.

#include <iostream>
#include <string>  
using namespace std;

class FoodOrder{
public:
    string orderId;
    string customerName;
    string restaurantName;
    double totalAmount;
    string status;

    // Parameterized constructor
    FoodOrder(string id, string customer, string restaurant, double amount, string orderStatus){
        orderId = id;
        customerName = customer;
        restaurantName = restaurant;
        totalAmount = amount;
        status = orderStatus;
    }

    void displayOrder(){
        cout << "Order ID: " << orderId << endl;
        cout << "Customer Name: " << customerName << endl;
        cout << "Restaurant Name: " << restaurantName << endl;
        cout << "Total Amount: ₹" << totalAmount << endl;
        cout << "Status: " << status << endl;
    }

    ~FoodOrder(){
        cout << "Destructor called for orderId: " << orderId << endl;
    }

};

int main()
{
    FoodOrder order1("123", "Kumar Ashish", "Raj Mahal", 350.0, "Confirmed");
    order1.displayOrder();

    return 0;
}