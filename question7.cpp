/*Define a C++ class fraction
class fraction
{
long numerator;
long denominator;
Public:
fraction (long n=0, long d=0);
}
Overload the following operators as member or friend:
a) Unary ++ (pre and post both)
b) Overload as friend functions: operators << and >>.
Output-*/
#include<iostream>
using namespace std;
class fraction
{ long num;
  long deno;
    public:
     fraction(long int n=0,long int d=0)
     { num=n;
       deno=d;
     }
     friend istream& operator>>(istream &os,fraction &f)
     { cout<<"enter numerator: ";
       cin>>f.num;
       cout<<"enter denominator: ";
       cin>>f.deno;
       return cin;
     }

     friend ostream& operator<<(ostream &is,fraction f)
     {
        cout<<f.num<<"/"<<f.deno;
     }

     fraction operator++()
     { ++num;
       ++deno;
       return (*this);
     }
     fraction operator++(int a)
     { fraction old=(*this);
       ++num;
       ++deno;
       return old;
     }

};
int main()
{ fraction f1,f2;
    cout<<"\nenter first fraction value: \n";
    cin>>f1;

    cout<<"\n f1++ : ";
    f1++;
    cout<<f1;
    cout<<"\n ++f1 : ";
    ++f1;
    cout<<f1;
     cout<<"\n\nenter second fraction value:\n";
     cin>>f2;
     f2=++f1;

     cout<<"\n f2 = ++f1 ";
     cout<<"\n f1 : ";
     cout<<f1;

      cout<<"\n f2 : ";
      cout<<f2;
      f2=f1++;
     cout<<"\n\n f2 = f1++";
     cout<<"\n f1 : ";
     cout<<f1;
     cout<<"\n f2 : ";
     cout<<f2;
 return 0;
}
