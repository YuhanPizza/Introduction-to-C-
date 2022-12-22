#include <iostream>
using namespace std;

int main()
{
    int lettuce, beefPatty, tomato, cheese, garlic, blackPepper, butter, honey,cookingWine,bread,soySauce;  
    cout<<"lettuce:";
    cin>>lettuce;
    cout<<"beefpatty:";
    cin>>beefPatty;
    cout<<"tomato:";
    cin>>tomato;
    cout<<"cheese:";
    cin>>cheese;
    cout<<"Bread:";
    cin>>bread;
    cout<<"Garlic:";
    cin>>garlic;
    cout<<"Butter:";
    cin>>butter;
    cout<<"Honey:";
    cin>>honey;
    cout<<"Cooking Wine:";
    cin>>cookingWine;
    cout<<"Black Pepper:";
    cin>>blackPepper;
    cout<<"Soy Sauce:";
    cin>>soySauce;

    if(lettuce >=1&&beefPatty >=1&&tomato >=1&&cheese>=1&&garlic>=1&&honey>=1&&butter>=1&&blackPepper>=1&&cookingWine>=1&&bread>=1&&soySauce>=1)

    cout<<"You can make a cheese burger or a plain burger or a steak patty"<<endl;
    else if (lettuce >= 1&&beefPatty>= 1&& tomato >=1&&cheese >=1&&bread>=1&&garlic<=0||honey<=0||butter<=0||blackPepper<=0||cookingWine<=0||soySauce<=0)
    cout<<"You can make a cheese burger or a plain burger"<<endl;
    else if (garlic>=1&&beefPatty>=1&&honey>=1&&butter>=1&&blackPepper>=1&&cookingWine>=1&&lettuce<=0|| tomato<=0||cheese<=0||bread<=0&&soySauce>=1)
    cout<<"You can make a Steak Patty"<<endl;
    else if (lettuce >= 1&&beefPatty>= 1&& tomato >=1&&cheese <=0&&bread>=1&&garlic<=0||honey<=0||butter<=0||blackPepper<=0||cookingWine<=0||soySauce<=0)
    cout<<"You can make a Plain Burger"<<endl;
    else
       cout<<"you do not have enough ingredients to make anything"<<endl;


    system("pause>0");
}