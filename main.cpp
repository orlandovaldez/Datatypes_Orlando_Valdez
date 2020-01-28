//Datatypes Program
//1-23-2020 Orlando Valdez Repl.it Tool
#include <iostream>

using namespace std;

int main() 

{
//Variable Declaration
int input = 0;
int dollars = 0, quarters = 0, dimes = 0, nickels = 0, pennies = 0;
int dollarsremainder = 0, quartersremainder = 0, dimesremainder = 0, nicklesremainder = 0, penniesremainder = 0;

//Ask User For Input Of Number Of Pennies
cout << "Enter your pennies " << endl;
cin >> input;
cout << " " << endl;

//Process Of Calculating Number of Currency 
dollars = input / 100;
dollarsremainder = input % 100;

quarters = dollarsremainder / 25;
quartersremainder = dollarsremainder % 25;

dimes = quartersremainder / 10;
dimesremainder = quartersremainder % 10;

nickels = dimesremainder / 5;
nicklesremainder = dimesremainder % 5;

pennies = nicklesremainder / 1 ;
penniesremainder = nicklesremainder % 1;

//Output The Amount Of Currency

cout << "Dollars = " << dollars << endl;
cout << "Quarters = " << quarters << endl;
cout << "Dimes = " << dimes << endl;
cout << "Nickels = " << nickels << endl;
cout << "Pennies = " << pennies << endl;

    return 0;
}