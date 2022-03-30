/* write a program to find the weather the given is square or rectangle */
#include <iostream>
using namespace std;
int main ()
{
    int len,bred;
    cout<<"Enter Length and Breadth repectively : "<<endl;
    cin>>len>>bred;
    if(len == bred)
    {
        cout<<"It's a Square !"<<endl;
    }
    else
    {
        cout<<"Its a Rectangle !"<<endl;
    }
}
