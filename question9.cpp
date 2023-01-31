/*Consider the following class mystring
Class mystring
{
char str [100];
Public:
// methods
};
Overload operator “!” to reverse the case of each alphabet in the string (Uppercase to
Lowercase and vice versa).*/
#include<iostream>
using namespace std;
class mystring
{ char str[100];
public:
    void accept()
    { cout<<"enter string: ";
       cin>>str;
    }
    void display()
    {
      cout<<str;
    }
    void operator!()
    { int i=0;
        while(str[i])
        { if(str[i]>='A' && str[i]<='Z')
             str[i]=str[i]+32;
           else if(str[i]>='a' && str[i]<='z')
              str[i]=str[i]-32;
           i++;
        }
    }
};
int main()
{ mystring s;
   s.accept();
   cout<<"entered string : ";
   s.display();
   !s;
   cout<<"\nnew string : ";
   s.display();

 return 0;
}
