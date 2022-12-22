#include <iostream>
using namespace std;

int main()
{
  int hostUserNum, guestUserNum;
  cout<<"Host: ";
  cin>>hostUserNum;
  system("cls");
  cout<<"Guest: ";
  cin >> guestUserNum;
  (hostUserNum == guestUserNum)? cout <<"correct!": cout<<"failed!";


  /*if (hostUserNum != guestUserNum)//how to do it with if else statements
    cout <<"Failed";
  else
    cout<<"correct";*/

  system("pause>0");
}