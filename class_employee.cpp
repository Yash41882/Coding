#include<iostream>
using namespace std;

class employee
{
  private:
    char name[30];
    int id, hourly_pay_rate, hours_worked, net_pay, gross_pay, SSS, Phil_Healh, Pagibig;

  public:
    void showdata()
    {
      cout<<"\nEmployee Name = "<<name;
      cout<<"\nEmployee ID = "<<id;
      cout<<"\nHourly pay rate = "<<hourly_pay_rate;
      cout<<"\nHours Worked = "<<hours_worked;
    }

    void getdata()
    {
      cout<<"\nEMPLOYEE DETAILS : \n";
      cout<<"\nEmployee Name = ";
      cin>>name;
      cout<<"\nEmployee ID = ";
      cin>>id;
      cout<<"\nHourly pay rate = ";
      cin>>hourly_pay_rate;
      cout<<"\nHours worked = ";
      cin>>hours_worked;

      cout<<"\nDEDUCTIONS: \n";
      cout<<"\nSSS Deduction = ";
      cin>>SSS;
      cout<<"\nPhil_Health Deduction = ";
      cin>>Phil_Healh;
      cout<<"\nPagibig Deduction = ";
      cin>>Pagibig;
    }

    void pay()
    {
      getdata();
      gross_pay = hours_worked * hourly_pay_rate;
      net_pay = gross_pay - (SSS + Phil_Healh + Pagibig);
      showdata();
      cout<<"\nGross Payment = "<<gross_pay;
      cout<<"\nNet Payment after duductions = "<<net_pay;
    }
};


int main()
{
  int n;
  cout<<"\nEnter the number of employee = ";
  cin>>n;

  employee arr[n];

  for (int i=0; i<n; i++)
  {
    arr[i].pay();
  }

  return 0;
}
