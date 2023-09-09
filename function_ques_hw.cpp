#include <iostream>
using namespace std;
double pie = 3.14;
# include <cmath>


double area_f(double r)
{
   double ans=pie*pow(r,2);
   return ans;
}

int main()
{
    double radius;
    cin >> radius;
    double area = area_f(radius);
    cout << area << endl;
}