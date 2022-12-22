#include <iostream>
using namespace std;

int main()
{
    int usersPin=1234, pin, errors = 0;
    do
    {
        cout<<"Enter Pin: ";//decleares the message 
        cin>>pin; //takes in the pin variable
        if (pin!=usersPin); // check if the pin variable is equal to the userPin variable
        errors++; // increases the error counter by 1
    }
    while (errors <3 && pin!=usersPin); // checks if the number of errors is less than 3 and if the pin variable is not equal to usersPin variable
    if(errors<3) //if the errors are less than 3 and if the pin is equal to usersPin it proceeds with the cout message.
    cout<<"correct!";
    else  //else if the error counter is equal to 3 then it proceeds with the following cout message.
    cout<<"Wrong Pin";
    system("pause>0");
}