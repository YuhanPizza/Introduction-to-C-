#include <iostream>
using namespace std;

int main()
{
    float num1, num2;
    char operation;
    cout<<"**OMEGA CALCULATOR**"<<endl;
    cin>> num1>>operation>>num2;
    
    switch(operation)
    {
        case '-':cout<<num1<<operation<<num2<<"="<<num1-num2;break;//if you do not add break; it will continue with the next like of operations until it meets a brake; command
        case '+':cout<<num1<<operation<<num2<<"="<<num1+num2;break;
        case '/':cout<<num1<<operation<<num2<<"="<<num1/num2;break;
        case '*':cout<<num1<<operation<<num2<<"="<<num1*num2;break;
        case '%':
            bool isNum1Int, isNum2Int;
            isNum1Int=(int)num1==num1;//only takes the whole number and removes anything after the decimal point
            isNum2Int=(int)num2==num2;
            if(isNum1Int&&isNum2Int)
            cout<<num1<<operation<<num2<<"="<<(int)num1%(int)num2;
            else
            cout<<"Not Valid!";
            break;
            default:cout<<"FUCK YOU BITCH"<<endl;
    }
    
    system("pause>0");
}