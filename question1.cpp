/*Define a class Complex with appropriate instance variables and member functions.
Define following operators in the class:
a. +
b. -
c. *
d. ==*/
#include<iostream>

using namespace std;
class complex
{ int a,b;
   public:
       complex(){};
       complex(int x,int y)
       { a=x;
         b=y;
       }
       void display()
       {
         cout<<"a + ib = "<<a<<" +i"<<b<<endl;
       }
       complex operator+(complex c)
       { complex temp;
           temp.a=a+c.a;
           temp.b=b+c.b;
           return temp;
       }
       complex operator-(complex c)
       { complex temp;
           temp.a=a-c.a;
           temp.b=b-c.b;
           return temp;
       }
       complex operator*(complex c)
       { complex temp;
           temp.a=a*c.a;
           temp.b=b*c.b;
           return temp;
       }
       bool operator==(complex c)
       { if(a==c.a && b==c.b)
           return true;
         else
           return false;
       }
};
int main()
{ complex c1(2,3),c2,c3(1,2);
    c2=c1+c3;
    c2.display();

    c2=c1-c3;
    c2.display();

    c2=c1*c3;
    c2.display();

    cout<<"comparison of c1 == c3 "<<(c1==c3)<<endl;
}
