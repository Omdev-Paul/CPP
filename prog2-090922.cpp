#include<iomanip>
#include<string>

using namespace std;
class ComplexNumber
{
    private:
        int r; //r is a data member variable that stores real part of the complex
        int i; //i is a data member variable that stores imaginary part of the complex
    public:
        void setData() // used to initialise the data members of the objects
        {
            cout<<"Enter real value of Complex    :"; cin>>this->r;
            cout<<"Enter complex value of complex :"; cin>>this->i;
        }
        void displayData() //used to publish the objects details
        {
            cout<<r; if (i!=0) {if (i>0) cout<<"+"<<i<<"i"<<endl; else cout<<i<<"i"<<endl; }
        }
};

int main(int argc, char* argv[])
{   ComplexNumber X;
    X.setData();
    cout<<"The entered Complex Number is :"; X.displayData();
    return 0;
}