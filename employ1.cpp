//employ1.cpp
//demonstrate the model to employee database using inheritence

#include <iostream>
using namespace std;

const int LEN = 00;      // maximum length of the names
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
class employee
{
private:
  char name[LEN];               //employee name
  unsigned long number;         //employee number
public:
  void getdata()
  {
  cout<<"\n Enter last name: "; cin>>name;
  cout<<"\n Enter number; ";    cin>>number;
  }
  void putdata() const
  {
  cout<<"\n Name: "<<name;
  cout<< "\n Number: " <<number;
  }
};
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
class manager : public employee //management class
{
private: 
char title[LEN];               //
double dues;                   //golf club dues
public :
void getdata()
{
employee::getdata();
cout<< "  Enter title: ";  cin>>title;
cout<< "  Enter golf club dues:   " ; cin>>dues;
}
void putdata() const
{
employee::putdata();
cout<<"\n Title: "<<title;
cout<<"\n Golf club dues: "<<dues;
}
};
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

class scientist : public employee //scientist class
{
private:
int pubs;                        //number of publications

public:
void getdata()
{
employee::getdata();
cout<<" Enter number of pubs: "; cin>>pubs;
}
void putdata() const
{
employee::putdata();
cout<<"\n Number of publications : "<<pubs;
}

};
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
class laborer : public employee // labour class
{

};
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
int main()
{
manager m1, m2;
scientist s1;
laborer l1;

cout<<endl;    //get data from several employees
cout<<"\n Enter data for manager 1";
m1.getdata();

cout<<"\n Enter data for scientist: ";
s1.getdata();

cout<<"\n Enter data for labour: ";
l1.getdata();

cout<<"\n Enter data for manager: ";
m1.getdata();

cout<<"\n data on manager 2: ";
m2.putdata();

cout<< "\n Data on scientist 1 : ";
s1.putdata();

cout<< "\n Data on labourer 1";
l1.putdata();
cout<<endl;
return 0;
}
