#include <iostream>
#include <math.h>
using namespace std;

                                                                 // calculator by AKG007
                                                     // some special things  factorial, 1/n, cube , square 
                                                               

class calculator{
protected:
    int a, b;
    double x, y;
     get_value(void){
    
        cout << "input the of first no : ";
        cin >> x;
        cout << "input the value of second no : ";
        cin >> y;
        a = x;
        b = y;

        return 0;
    }

public:
   

   
    sum()
    {
        cout<<"You are using addtion (+) function"<<endl;
        get_value();
        double c = a + b;
        cout << "Addtion of " << a << " & " << b << " is " << c;

        return 0;
    }

    subtract()
    {
        cout<<"You are using subtraction (-) function"<<endl;
        get_value();
        double c = a - b;
        cout << "Subtraction of " << a << " & " << b << " is " << c;

        return 0;
    }

    product()
    {
        cout<<"You are using mutiplication (*) function"<<endl;
        get_value();
        double c = a * b;
        cout << "Multiplication of " << a << " & " << b << " is " << c;

        return 0;
    }

    divide()
    {
        cout<<"You are using division (/) function"<<endl;
        get_value();
        double c = a / b;
        cout << "Division of " << a << " & " << b << " is " << c;

        return 0;
    }

    
};

class sciencetific : public calculator{

public:
    square()
    {
        cout<<"You are using square (^2) function"<<endl;
        cout << "input the of no : ";
        cin >> x;
        a = x;
        b = 2;
        double c = pow(a, b);
        cout << "Square of " << a << " is " << c;
        return 0;
    }

    cube()
    {
        cout<<"You are using cube (^3) function"<<endl;
        cout << "input the of no : ";
        cin >> x;
        a = x;
        b = 3;
        double c = pow(a, b);
        cout << "Cube of " << a << " is " << c;
        return 0;
    }

    one_nth()
    {
        cout<<"You are using 1 by nth number (1/n) function"<<endl;
        cout << "input the of no : ";
        cin >> x;
        a = x;
        double c = 1 / x;
        cout << "1 by nth number of " << a << " is " << c;
        return 0;
    }

     factorial()
    {
        cout<<"You are using factorial (!) function"<<endl;
        int c = 1;
        int m;
        cout << "input the no : ";
        cin >> m;
        for (int i = 1; i < m + 1; i++)
        {
            c = i * c;
            ;
        }
        cout <<"Factorial of "<<m<<" is "<< c << endl;

        return 0;
    }
};

int main(){
    int k,m,n;
    calculator a;
    sciencetific b;
    while (true)
    {
        
    
    
        cout<<endl<<"Select the type of calculation/fuction "
        <<"\n'1' - for addition\n'2' - for subtraction\n'3' - for multiplication\n'4' - for division\n'5' - for sqaure\n'6' - for cube\n'7' - for 1 by nth no\n'8' - for factorial of no\n'0' - for exit"<<endl;
        cout<<"------->";
        cin>>k;

        if (k == 1)
        {
            a.sum();
            cout<<endl;
        }
        else if (k == 2)
        {
            a.subtract();
            cout<<endl;
        }
        else if (k == 3)
        {
            a.product();
            cout<<endl;
        }
        else if (k == 4)
        {
            a.divide();
            cout<<endl;
        }
        else if (k == 5)
        {
            b.square();
            cout<<endl;
        }
        else if (k == 6)    
        {
            b.cube();
            cout<<endl;
        }
        else if (k == 7)
        {
            b.one_nth();
            cout<<endl;
        }
        else if (k == 8)    
        {
            b.factorial();
            cout<<endl;
        }
        else if (k == 0)
        {   
            cout<<"thanks for using ^_+ ^_+ " ;
            exit(0);
        }
        
    }

    
    
      
    return 0;
}