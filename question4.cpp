/*Create a class Time which contains:
- Hours
- Minutes
- Seconds
Write a C++ program using operator overloading for the following:
1. = = : To check whether two Times are the same or not.
2. >> : To accept the time.
3. << : To display the time.
Output -*/
#include<iostream>
using namespace std;
class time
{ public:
    int hr,min,sec;

     friend ostream& operator<<(ostream &os,time a)
      { cout<<"hour = "<<a.hr<<endl;
        cout<<"min = "<<a.min<<endl;
        cout<<"sec= "<<a.sec<<endl;
       return cout;
      }
    friend istream& operator>>(istream &is,time &b)
      { cout<<"enter hour : ";
        cin>>b.hr;
        cout<<"enter minute : ";
        cin>>b.min;
        cout<<"enter second : ";
        cin>>b.sec;
       return cin;
      }

       int operator==(time c)
       { if(hr==c.hr && min==c.min && sec==c.sec)
           return 1;
         else
           return 0;
       }
};

int main()
{ time t1,t2;
  int result;
    cout<<"enter first time:"<<endl;
    cout<<"---------------------"<<endl;
     cin>>t1;
      cout<<"\nfirst time"<<endl;
    cout<<t1;

    cout<<"enter second time:"<<endl;
    cout<<"---------------------"<<endl;
     cin>>t2;
      cout<<"\nsecond time"<<endl;
    cout<<t2;

      result=(t1==t2);
      if(result==1)
        cout<<"time are same"<<endl;
      else
        cout<<"\ntime are not same"<<endl;
 return 0;
}
