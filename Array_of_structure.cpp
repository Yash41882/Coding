#include <iostream>

using namespace std;

struct City
{
    char name[100];
     int population;
     float Temperature; 
};

void takeCitiesInfoFromKeyboard(struct City City_records[], int n)
{
    cout<<"\nEnter the data of the Cities: ";
    for(int i=0; i<n; i++)
    {
        cout<<"\nEnter the Name of "<<i+1<<" City = ";
        cin>>City_records[i].name;

        cout<<"\nEnter the Population of "<<i+1<<" City = ";
        cin>>City_records[i].population;

        cout<<"\nEnter the Average Temperature of "<<i+1<<" City = ";
        cin>>City_records[i].Temperature;

    }

}

void findCityWithHighestTemperature(struct City City_records[], int n)
{
    int high_temp=0,a=0;
    cout<<"\nCity with highest average temperature is = ";
    cout<<"\nCity Name\t  City Population\t  City Temperature\t\n";
    for (int i=0; i<n; i++)
    {
        if (City_records[i].Temperature > high_temp)
        {
            high_temp = City_records[i].Temperature;
            a=i;
        }
    }
    cout<<City_records[a].name<<"\t \t \t"<<City_records[a].population<<"\t \t \t \t \t"<<City_records[a].Temperature;
}

void displayAllCitiesInfo(struct City City_records[], int n)
{
    int a, high_temp;
    for (int i=0; i<n; i++)
    {
        if (City_records[i].Temperature > high_temp)
        {
            high_temp = City_records[i].Temperature;
            a=i;
        }
    }    
    
    cout<<"\nCity Name\t  City Population\t  City Temperature\t\n";
    for(int i=0; i<n; i++)
    {
        if(City_records[i].Temperature < (City_records[a].Temperature)/2 )
        {
            cout<<City_records[i].name<<"\t  \t \t"<<City_records[i].population<<"\t \t \t \t"<<City_records[i].Temperature;
            cout<<endl;
        }
    }
}

int main()
{
    system("CLS");
    int n; char ch;
    cout<<"\nEnter the number of Cities to update their records = ";
    cin>>n;
    struct City City_records[100];

    do
    {
        cout<<"\n\n======= BD Meteorological System =========";
        cout<<"\nEnter x, to take information of all the cities";
        cout<<"\nEnter y, to find and display the info of City with the highest temperature";
        cout<<"\nEnter z, to display the information of Cities with less than half of the highest temperature in tabular format";
        cout<<"\nEnter q, quit/exit the menu system";
        cout<<"\n===========================================";
        cout<<"\nEnter you choice = ";
        cin>>ch;
        
        switch(ch)
        {
            case 'x': takeCitiesInfoFromKeyboard(City_records, n);
            break;

            case 'y': findCityWithHighestTemperature(City_records, n);
            break;

            case 'z': displayAllCitiesInfo(City_records, n);
            break;

            case 'q': ch='q';
            break;

            default: cout<<"\nInvalid Input. Try Again!";
            break;
        }
        
    } while (ch != 'q');

    return 0;
}
