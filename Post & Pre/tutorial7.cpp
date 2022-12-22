#include <iostream>
using namespace std;


int main()
{
   //+,-,/,% all arithmetic operators or binary arithemetic operators ( because they preform their operantions with 2 operants)
   cout<< 5+2 << endl;
   cout<<5.0/2.0<<endl; // the result of dividing 2 whole numbers will always be a whole number add a decimal point to one or both to get a decimal
   cout<<5%2<<endl; // the modula will show the remainder of the two variables.

   //++,-- (unary operators) operator of incriment and decrement
   int counter = 7;
   counter++; // increases the value of the counter variable by one.
   cout<<counter << endl; 
   counter--; // decreases the value of the counter variable by one.
   cout<<counter<<endl;

   int counter2=7;
   cout<<counter2++<<endl; //post increment would show the value of counter2 variable first before increasing the value by one.
   cout<<++counter2<<endl; //pre increment would increase the value of counter2 variable by one then show the variable.
   cout<<--counter2<<endl; //pre and post decrements work the same way.

   system("cls"); //clears the screen of the console without clearing the code.(put this if you wanna clear your console without deleting the code)

   //<,>,<=,>=,==,!= are relational operators. less than, greater than, less than or equal to, greater than or equal to, equal to, and not equal to.
   int a=5, b=5;// the (,) is a binary operator, used as a operator and a sperator.
   cout<<(a>b);//use the parentheses to indicate an experession that needs to be calculated.
   system("cls");

   //&&,||,! these are logical operators , logical and, logical or, and logical not. the not operator will negate whatever comes after it.
   int c=5, d=8;
   cout<<(c==5&&d==5+3);//we used our logical and operator to combine the two expressions.arithmetic operators will take priority,the least priority is logical operators.
   system("cls");
   //=,+=,-=,*=,/=,%= operators of assignment.
   int x=5; // sample of assignment operator assigns value to whatever is on your right to the variable on your left.
   x+=7;//same as the one below this is just a shorter way.
   x=x+7; // whatever is on my right side please assign it to the variable on my left side arithmetic operator takes priority over assignment operator.
   cout << x << endl;// you will get 19 from the 2 previous expressions.


    system("pause>0");
}