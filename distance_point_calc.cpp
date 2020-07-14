#include <iostream>
#include <math.h>
using namespace std;

                 // this is a program to calaculate distance and creating equation of a line between two points
                                                     // Created by AKG007

class point2;

class point1
{
    int x1, y1;

public:
    point1(int a, int b)
    {
        x1 = a;
        y1 = b;
    }
    void display(void)
    {
        cout << x1 << "x + " << y1 << "y";
    }
    friend void distance(point1, point2);
    friend void equation(point1, point2);
};

class point2
{
    int x2, y2;
    friend void distance(point1, point2);
    friend void equation(point1, point2);

public:
    point2(int a, int b)
    {
        x2 = a;
        y2 = b;
    }
    void display(void)
    {
        cout << x2 << "x + " << y2 << "y";
    }
};

void distance(point1 o1, point2 o2)
// by using formula "((x2-x1^2+(y2-y1)^2)^1/2"
// v2 = (x2-x1)^2
// u2 = (y2-y1)^2
{
    int v1 = o1.x1 - o2.x2;
    int v2 = pow(v1, 2.0);
    int u1 = o1.y1 - o2.y2;
    int u2 = pow(u1, 2.0);

    int z = (v2 + u2);
    cout << "distance between this two points is : ";
    cout << sqrt(z);
}

void equation(point1 o1, point2 o2)
// ny using formula "y = mx + c"
// m is slope & c is y intercept 
{
    double v = o1.y1 - o2.y2;
    double u = o1.x1 - o2.x2;

    double m = v / u;
    double z = m * o1.x1;
    double c = o1.y1 - z;
                 
    cout<< "And there equation is : ";

    if (c >= 0)
    {
        cout << "y = " << m << "x + " << c;
    }
    else
    {
        double c2 = c * (-1);
        cout << "y = " << m << "x - " << c2;
    }
}

int main()
{

    double x1, x2, y1, y2;
    cout << "input x1 : ";
    cin >> x1;

    cout << "input y1: ";
    cin >> y1;

    cout << "input x2: ";
    cin >> x2;

    cout << "input y2: ";
    cin >> y2;
    cout << endl;

    point1 c(x1, y1);
    point2 a(x2, y2);

    distance(c, a);
    cout << endl;
    cout << endl;
    equation(c, a);
    cout << endl;
    cout << endl;
    cout << endl;

    return 0;
}
