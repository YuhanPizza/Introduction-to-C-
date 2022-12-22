#include<iostream>
using namespace std;

int main()
{ 
  float number1, number2, number3;
  cout<<"Enter the side lengths of the triangle"<<endl;
  cin >> number1 >> number2 >> number3;
  if(number1==number2&&number2==number3)
      cout<<"You have an equalateral triangle"<<endl;
  else
  {
    if(number1!=number2&&number1!=number3&&number2!=number3)
        cout<<"You have a Scalene triangle"<<endl;
    else
        cout<<"You have given a Isoceles triangle"<<endl;
  }

  system("pause>0");
}