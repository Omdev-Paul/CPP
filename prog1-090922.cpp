//This is my first program
/* Write CPP program that defines the class number
   and add any given two number objects.*/

#include<iostream>
#include<iomanip>
#include<string>

using namespace std;
class Number
{
    private:
        int value;
        string type;
        int length;
    public:
        void setData()
        {  cout<<"Enter an Integer Value :"; cin>>this->value;
           cout<<"Enter type of Value    :"; cin>>this->type;
           cout<<"Enter length of Value  :"; cin>>this->length;
        }
        void displayData(); // member function prototype
};

void Number::displayData()
{
    cout<<"Integer Value   = "; cout<<this->value<<endl;
        cout<<"type of value   = "; cout<<this->type<<endl;
        cout<<"Length of Value = "; cout<<this->length<<endl;
}

int main(int argc, char* argv[])
{
    Number X, Y;
    cout<<"Initialisation of Object X"<<endl; X.setData();
    cout<<"Initialisation of Object Y"<<endl; Y.setData();

    cout<<"Object X Details"<<endl; X.displayData();
    cout<<endl;
    cout<<"Object Y Details"<<endl; Y.displayData();
    return 0;
}