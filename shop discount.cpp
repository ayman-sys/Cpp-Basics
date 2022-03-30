/*A shop will give discount of 10% if the cost of purchased quantity is more than 1000.
Ask user for quantity
Suppose, one unit will cost 100.
Judge and print total cost for user.*/

#include <iostream>
using namespace std;
int main ()
{
    int quantity, price;
    cout<<"Enter the quantity purchased : "<<endl;
    cin>>quantity;
    price = quantity*100;
    cout<<"Cost without discount is : "<<price<<endl;
    if(quantity>=1000)
    {
        cout<<"Total cost with discount is :"<<price-(price*0.1)<<endl;
    }
    else
    {
        cout<<"You are not elegible for Discount"<<endl;
    }
}
