/*Create a class CString to represent a string.
a) Overload the + operator to concatenate two strings.
b) == to compare 2 strings.*/
#include<iostream>
#include<string.h>
using namespace std;
class cstring
{ public:
    char str[20];
      void get_string()
      { cout<<"\nenter string: ";
         cin>>str;
      }
       void display()
       {
         cout<<str<<endl;
       }
       cstring operator+(cstring x)
       { cstring s;
           strcpy(s.str,str);
           strcat(s.str,x.str);
         return s;
       }
       int operator==(cstring c);
};
int cstring::operator==(cstring c)
{int equalornot=1;
    for(int i=1;str[i];i++)
    {
       if(str[i]!=c.str[i]){
         equalornot=0;
         break;
       }
    }
  return equalornot;
};
int main()
{ cstring s1,s2,s3;
   int result=0;
    s1.get_string();
    s2.get_string();

    cout<<"\nfirst string :";
    s1.display();
    cout<<"\nsecond string :";
    s2.display();
    s3=s1+s2;
    cout<<"\nconcatenated string is ";
    s3.display();
   result=(s1==s2);
   if(result==1)
     cout<<"\n both string are equal..."<<endl;
   else
    cout<<"\n both string are not equal..."<<endl;
 return 0;
}



