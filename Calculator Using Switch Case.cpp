#include <iostream>
using namespace std;
int main()
{
    float num1, num2;
    char operation;
    cout<<"Enter two numbers eg. 5 * 6 : "<<endl;
    cin>>num1>>operation>>num2;
    switch (operation)
    {
    case '-':
        cout<<num1<<operation<<num2<<"="<<num1-num2;
        break;
    case '+':
        cout<<num1<<operation<<num2<<"="<<num1-num2;
        break;
    case '/':
        cout<<num1<<operation<<num2<<"="<<num1-num2;
        break;
    case '*':
        cout<<num1<<operation<<num2<<"="<<num1-num2;
        break;
    case '%':
        bool isnum1int, isnum2int;
        isnum1int = (int)num1 == num1;
        isnum2int = (int)num2 == num2;
        if(isnum1int && isnum2int)
        {
            cout<<num1<<operation<<num2<<"="<<(int)num1%(int)num2;
        }
        else
        {
            cout<<"Invalid Input"<<endl;
        }
        break;
    
   
        
    }
}
