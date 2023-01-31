/*Consider following class Numbers
class Numbers
{

int x,y,z;
public:
// methods
};
Overload the operator unary minus (-) to negate the numbers.*/
#include<iostream>
using namespace std;
class numbers
{ int x,y,z;
public:
    void accept()
    { cout<<"enter first number: ";
      cin>>x;
      cout<<"enter second number: ";
      cin>>y;
      cout<<"enter third number: ";
      cin>>z;
    }
    void display()
    {
      cout<<" "<<x<<"\t"<<y<<"\t"<<z<<endl;
    }
    void operator-()
    { x=-x;
      y=-y;
      z=-z;
    }
};
int main()
{ numbers num;
    cout<<"enter three numbers::::"<<endl;
    num.accept();
    cout<<"\ngiven numbers are...";
    num.display();
    -num;
    cout<<"\nnegative numbers are...";
    num.display();
 return 0;
}



