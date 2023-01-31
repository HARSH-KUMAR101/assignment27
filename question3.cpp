/*Write a C++ program to add two complex numbers using operator overloaded by a friend
function.*/
#include<iostream>

using namespace std;
class complex
{ int num1,num2;
   public:
       void accept()
       {
        cout<<"enter two numbers : ";
        cin>>num1>>num2;
       }

       friend complex operator+(complex a,complex b);

       void display()
       {
          cout<<num1<<" +i"<<num2<<endl;
       }
};
complex operator+(complex a,complex b)
{ complex c;
    c.num1=a.num1+b.num1;
    c.num2=b.num2+b.num2;
return c;
};
int main()
{ complex c1,c2,sum;
   c1.accept();
   c2.accept();
    cout<<"value entered : "<<endl;
    c1.display();
    c2.display();
   sum=c1+c2;
   cout<<"final result after addition ";
   sum.display();
return 0;
}
