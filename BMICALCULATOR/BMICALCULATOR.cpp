#include <iostream>
using namespace std;

int main()
{
    //Bmi calculator
    //weight(kg) / height * height(m)
    //Underweight < 18.5
    //Normal Weight 18.5-24.9
    //overweight > 25

    float weight, height, bmi;
    cout <<"weight(kg), height(m)";
    cin >> weight >> height;
    bmi = weight / (height * height);//dont forget to put parentheses to indicate priority on other operations

    if(bmi < 18.5) 
    cout <<"overweight"<<endl;
    else if (bmi > 25)
    cout<<"overweight"<<endl;
    else
    cout << "normal weight"<<endl;

    cout<<"your bmi is: "<< bmi;


    system("pause>0");
}