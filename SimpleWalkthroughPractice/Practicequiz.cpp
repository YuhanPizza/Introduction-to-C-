#include <iostream>
using namespace std;

int main()
{
    //what is going to be the result of the following?

    int a=5, b=4;
    cout<<a+(b++)<<endl; //10 wrong correct answer 9 cuz of post increment
    cout<<(--a)+b<<endl; //8 wrong correct answer 9 cuz of the prior expression chaging the value of variable B

    cout<<!(true&&false)<<endl; //0 wrong correct answer 1 because of ! making the rest of the expression null.
    cout<<(true&&false||true)<<endl; //1 correct

    int x=7;
    cout<<(++x<=9&&x+2>=10)<<endl; //0 wrong correct answer 1 because it is an and logical expression?
    
    int y=3;
    cout<<(y==y++)<<endl; //0 correct

    float z=8;
    z+=2;
    cout<<z<<endl; //10 correct
    z/=2;
    cout<<z<<endl; //5 correct

    system("pause>0");

}