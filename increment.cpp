/* PROBLEM : A company decided to give bonus of 5% to employee if his/her year of service is more than 5 years.
Ask user for their salary and year of service and print the net bonus amount. */
#include <iostream>
using namespace std;
int main()
{
    int salary, service, bonus;
    cout<<"Enter Number of years Serviced and salary respectively : "<<endl;
    cin>>service>>salary;
    if(service>5)
    {
        cout<<"Your Salary Before Increment : "<<salary<<endl<<"After Increment :"<<salary+(salary*0.05);
    }
    else
    {
        cout<<"Your are not elegible for Increment"<<endl;
    }
}
