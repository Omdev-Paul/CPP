#include<iostream>
using namespace std;

long fact(int n)
{
    if (n==0)
    return 1;
    return (n*fact(n-1));
}
int main()
{
    int num;
    cout<<"enter +ve integer: ";
    cin>>num;
    cout<<"Factorial of"<<num<<"is"<<fact(num);
    return 0;
}