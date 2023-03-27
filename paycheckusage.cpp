#include <iostream>
#include <string>
#include <fstream>
using namespace std;

class Saving_Percentage {
public:
/*
A = bills/debt payments 70%
B = savings 20 %
C = spending 10 %
*/

double payment = 1444.32 * 4; // weekley payment 
double A = 0.7, B = 0.2, C = 0.1;
double A1 = A * payment;
double B1 = B * payment;
double C1 = C * payment;
void needtopay(){

 int rent = 1800, creditloans = 700, gas = 160;
int TotalA = rent + creditloans + gas; 
cout << "Percentage is 70% " << A1 << " From inital: " << payment << endl;
double A2 = A1 - TotalA;
if ( A2 >= 0){

    cout << "Left over is "<< A2 << endl;
}
    else {
    cout<< "Cannot Pay everything ";
    }


}
void savings(){
cout << "Savings is: "<< B1 << endl; 
}
void personal(){
cout << "Personal Speending is: " << C1 << endl;
}
};
class Taxes {
public: 
double Federal_Income = 16.16, State_Income = 1.45, Social_Security = 6.20;
double Medicare = 1.45; 
};

int main(){
    Saving_Percentage savings;
    cout << "Spending List" << endl;
    savings.needtopay();
    savings.savings();
    savings.personal();
    return 0;
}    