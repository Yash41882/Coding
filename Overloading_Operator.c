// Overloading Insertion and Extraction Operator
#include <iostream>
using namespace std;

class flight
{
    public:
        string destination;
        float distance;

        flight()
        {
            destination = '\0';
            distance = 0;
        }
        
        flight(char c, float f)
        {
            char destination = c;
            distance = f;
        }

        friend ostream &operator<<(istream &output, const flight &f);
        friend istream &operator>>(istream &input, flight &f);
};

ostream &operator<<(ostream &output, flight &f)
        {
            output<< "\nDestination = " <<f.destination << "\nDistance = " <<f.distance;
            return output;
        }


istream &operator>>(istream &input, flight &f)
        {
            cout<<"\nEnter Destination = ";
            input >> f.destination;
            cout<<"\nEnter Distance (KM)= ";
            input >> f.distance;
            return input;
        }


int main()
{
    flight f1;
    cout<<"\nEnter the details of flight:";
    cin>>f1;

    cout<<"\nEntered details are : "<<f1;
    return 0;
}
