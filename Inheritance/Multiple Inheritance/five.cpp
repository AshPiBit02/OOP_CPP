//Invoice class that inherits both customer and order class
#include<iostream>
#include<string>
using namespace std;
class Customer{
    protected:
    string name;
    string cus_id;
    public:
    Customer(string name,string cus_id)
    {
        this->name=name;
        this->cus_id=cus_id;
    }
    void displayCustomerInfo()
    {
        cout<<"Customer Name: "<<name<<endl;
        cout<<"Customer ID: "<<cus_id<<endl;
    }
};
class Order{
    protected:
    string order_id;
    float amount;
    public:
    Order(string order_id,float amount)
    {
        this->order_id=order_id;
        this->amount=amount;
    }
    void displayOrderInfo()
    {
        cout<<"Order ID: "<<order_id<<endl;
        cout<<"Order Amount: $"<<amount<<endl;
    }
};
class Invoice:public Customer,public Order
{
    public:
    Invoice(string name,string cus_id,string order_id,float amount):Customer(name,cus_id),Order(order_id,amount)
    {

    }
    void displayInvoice()
    {
        displayCustomerInfo();
        displayOrderInfo();
    }
};
int main()
{
    Invoice i("Bob","C123","O567",150.00);
    i.displayInvoice();
    return 0;

}