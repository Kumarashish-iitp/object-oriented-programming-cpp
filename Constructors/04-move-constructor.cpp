// Create a FoodOrder class with orderId, customerName, restaurantName, totalAmount, and status. 
// Create a parameterized constructor to initialize an order and a move constructor to transfe
// the data from a temporary order to a new object using std::move(). 
// Add a displayOrder() function and a destructor that prints a message when the object is destroyed.

#include <iostream>
#include <string>
#include <utility>
using namespace std;

class FoodOrder
{
public:
    string orderId;
    string customerName;
    string restaurantName;
    double totalAmount;
    string status;

    // Parameterized constructor
    FoodOrder(string id, string customer, string restaurant, double amount, string orderStatus)
    {
        orderId = id;
        customerName = customer;
        restaurantName = restaurant;
        totalAmount = amount;
        status = orderStatus;
    }

    // Move constructor
    FoodOrder(FoodOrder&& order){
        orderId = move(order.orderId);
        customerName = move(order.customerName);
        restaurantName = move(order.restaurantName);
        totalAmount = order.totalAmount;
        status = move(order.status);
    }

    void displayOrder(){
        cout << "Order ID: " << orderId << endl;
        cout << "Customer: " << customerName << endl;
        cout << "Restaurant: " << restaurantName << endl;
        cout << "Total Amount: " << totalAmount << endl;
        cout << "Status: " << status << endl;
    }

    // Destructor
    ~FoodOrder(){
        cout << "Destructor called for orderId: "
             << orderId << endl;
    }
};

int main(){
    FoodOrder order1(
        "101",
        "Kumar Ashish",
        "Food Corner",
        450.50,
        "Confirmed"
    );

    // Move order1 into order2
    FoodOrder order2(move(order1));

    cout << "Moved Order:" << endl;
    order2.displayOrder();

    return 0;
}