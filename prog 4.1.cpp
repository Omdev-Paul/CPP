#include<iostream>
using namespace std;
inline float mult(flaot x, float y)
{
    return (x*y);
}
inline double div(double p, double q)
{
    return (p/q);
}
int main()
{
    float a = 12.345;
    float b= 9.82;
    cout<<mult(a,b)<<endl;
    cout<<div(a,b)<<endl;
    return 0;
}