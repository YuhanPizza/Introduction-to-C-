#include <iostream>

using namespace std;

int main()
{
    int grade, sum=0;
    
    for(int i=0;i<3; i++){//tells the program to ask for the i value 3 times also introduces the i value is equal to 0 at the start of the program.

        do {
            cout<<"Enter Grade "<<i+1<<":";//increases the value of i by 1 for repetition until i is more than 3.also asks the user to input the value of grade.
            cin>>grade;// accepts the grade variable

        }while(grade<1||grade>5);//tells the program to accept variables that are more than or equal to 1 or less than or equal to 5;
        sum+=grade;
        

    }
       cout<<"Your Grade is "<<sum<<endl;
       cout<<"Ave Grade is = "<<(float) sum /3 <<endl;//adding a float value so you can get a float variable.

    system("pause>0");
}