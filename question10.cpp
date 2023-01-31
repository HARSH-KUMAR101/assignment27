/*Class Matrix
{
int a[3][3];
Public:
//methods;
};
Let m1 and m2 are two matrices. Find out m3=m1+m2 (use operator overloading).
Output -*/
#include<iostream>
using namespace std;
class matrix
{ int a[3][3];
public:
    void accept();
    void display();
    matrix operator+(matrix x);
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
matrix matrix::operator+(matrix x)
{ matrix temp;
    for(int i=0;i<3;i++)
    { for(int j=0;j<3;j++)
        {
          temp.a[i][j]=a[i][j]+x.a[i][j];
        }
    }
 return temp;
};
int main()
{ matrix m1,m2,m3;
    m1.accept();
    cout<<"enter second matrix"<<endl;
    m2.accept();
    m3=m1+m2;
    m3.display();
return 0;
}





