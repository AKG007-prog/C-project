#include <iostream>
using namespace std;

                             // // Simple Bank Deposit in c++ program by AKG007 // //

    // p - principal;
    // y - years;
    // r - rate of interest;
    // this code run oon simple formuala of simple interest 
    // formula = (p*(r+1))*t;
class bankdeposit
{
    int principal;
    int year;
    double rate;
    int rval;

public:
    bankdeposit() {}
    bankdeposit(int p, int y, double r){
    // it is used when rate of interest is in decimal 
    
        principal = p;
        year = y;
        double r2 = r;
        rate = r;
        rval = principal;
        for (int i = 0; i < y; i++)
        {
            rval = rval * (1 + rate);
        }
        cout << "Your paid amount is " << principal << " at rate of " << r2 << " for " << year << " years\n"
             << "And your reciving amount is " << rval << endl;
    };

    bankdeposit(int p, int y, int r){
    // it is used when rate of interest is in percentage 
    
        principal = p;
        year = y;
        int r2 = r;
        rate = double(r) / 100;
        rval = principal;
        for (int i = 0; i < y; i++)
        {
            rval = rval * (1 + rate);
        }
        cout << "Your paid amount is " << principal << " at rate of " << r2 << "% for " << year << " years\n"
             << "And your reciving amount is " << rval << endl;
    }
};

int main(){
//  if & else is used here to select which type of rate is using;

    int x;
    cout<<"select your type"<<endl
    <<"if your rate is in decimal (like 0.02) enter ---> 1"<<endl
    <<"if your rate is in percent(%) enter ---> 2"
    <<endl<<"-------->";
    cin >> x;
      
    if (x == 1){
        int p, y;
        double r;

        cout << "enter your principal/ or amout you deposited : ";
        cin >> p;
        cout << "enter time you deposited (in years only) :";
        cin >> y;
        cout << "enter rate at which you depostites : ";
        cin >> r;

        bankdeposit b1;
        b1 = bankdeposit(p, y, r);
    }
    else if (x == 2){
        int p, y;
        int r;

        cout << "enter your principal/ or amout you deposited : ";
        cin >> p;
        cout << "enter time you deposited (in years only) :";
        cin >> y;
        cout << "enter rate at which you depostites : ";
        cin >> r;

        bankdeposit b1;
        b1 = bankdeposit(p, y, r);
    }
    // this is used if person input wrong input insted of 1 or 2 
    else{
        cout << "input is wrong";
        exit(0);
    }

    return 0;
}