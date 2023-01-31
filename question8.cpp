/*Consider a class Matrix
Class Matrix
{
int a[3][3];
Public:
//methods;
};
Overload the - (Unary) should negate the numbers stored in the object.
Output -*/
#include<iostream>
using namespace std;
class matrix
{ int a[3][3];
public:
    void accept();
    void display();
    void operator-();
};
void matrix::accept()
{ cout<<"enter matrix element (3x3)\n";
    for(int i=0;i<3;i++)
    { for(int j=0;j<3;j++)
        {
           cin>>a[i][j];
        }
    }
};
void matrix::display()
{ cout<<"matrix is :\n";
    for(int i=0;i<3;i++)
  { for(int j=0;j<3;j++)
    {
      cout<<a[i][j]<<"\t";
    }cout<<"\n";
  }
};
void matrix::operator-()
{  for(int i=0;i<3;i++)
  { for(int j=0;j<3;j++)
    {
      a[i][j]=-a[i][j];
    }
  }
};
int main()
{ matrix m;
    m.accept();
    m.display();
    -m;
    m.display();
 return 0;
}
