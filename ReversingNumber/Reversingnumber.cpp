#include <iostream>
using namespace std;

int main()
{
    //reversing number
    int number, revNumber=0;//0
    cout<<"Number: ";//shows the output text "Number:"
    cin>>number;//takes the input of the number variable
    while (number!=0)//will keep looping the program till the number variable is equal to 0
    {
      revNumber *=10;
      /*int lastDigit = number%10;//if u were to use 3 variables
      revNumber += lastDigit;*/
      revNumber+=number%10;
      number/=10;

    }
    cout<<"Reverse Number: "<<revNumber<<endl; //outputs the value of the revNumber
    
    system("pause>0");
}