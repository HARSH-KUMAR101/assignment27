/*Write a C++ program to overload unary operators that is increment and decrement.*/
#include<iostream>
using namespace std;
class Num
{ int n;
public:
    void setNum(int a)
    {
      n=a;
    }
    void display()
    {
     cout<<"value is "<<n<<endl;
    }
    void operator++(void)
    {
      n=++n;
    }
    void operator--(void)
    {
      n=--n;
    }

};
int main()
{ Num n;
   n.setNum(10);

   ++n;
   cout<<"after increment ";
   n.display();
   cout<<endl;

   --n;
   cout<<"after decrement ";
   n.display();
   cout<<endl;

 return 0;
}
