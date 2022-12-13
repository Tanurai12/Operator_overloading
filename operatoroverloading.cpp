/*#include<iostream>
using namespace std;
class complex
{
    int a,b;
    public:
    complex()
    { 
          cout<<"default constructor called"<<endl;
    }
    complex(int x,int y)
    {
        cout<<"parametrized constructor called"<<endl;
        a=x;
        b=y;
    }
    complex operator+(complex c)
    {
        cout<<"+ operator called"<<endl;
        complex temp;
        temp.a=a+c.a;
        temp.b=b+c.b;
        return temp;
    }
    void display()
    {
        cout<<"a="<<a<<"  b="<<b<<endl;
    }
    complex(complex &t)
    {
        cout<<"copy constructor called"<<endl;
        a=t.a;
        b=t.b;
    }
    complex operator-(complex s)
    {
        cout<<"- operator called"<<endl;
        complex temp;
        temp.a=a-s.a;
        temp.b=b-s.b;
        return temp;
    }
      complex operator*(complex s)
    {
        cout<<"* operator called"<<endl;
        complex temp;
        temp.a=a*s.a;
        temp.b=b*s.b;
        return temp;
    }
    friend int operator==(complex,complex);
     complex operator++()
   {
    complex temp;
    temp.a=++a;
    temp.b=++b;
    return temp;
 }
  complex operator++(int teja)//post increment
   {
    complex temp;
    temp.a=a++;
    temp.b=b++;
    return temp;
 }
    
};
int operator==(complex s,complex t)
{

  if( s.a==t.a)
  return 1;
  else
  return 0;

}
int main()
{
    complex c1(2,3);
    complex c2(2,3);
    complex c3;
    c3=c1+c2;
    if(c1==c2)
    {
        cout<<"equal"<<endl;
    }
    else
    {
        cout<<"not equal"<<endl;
    }
    c3.display();
    complex c4;
    c4=c1-c2;
    c4.display();
    complex c5;
    c5=c1*c2;
    c5.display();
    complex c6=++c1;
    c6.display();
    c1++.display();
    c1.display();


    return 0;

}*/
/*#include<iostream>
using namespace std;
class tanu
{
    int a,b;
    public:
    tanu()
    { 
          cout<<"default constructor called"<<endl;
    }
    tanu(int x,int y)
    {
        cout<<"parametrized constructor called"<<endl;
        a=x;
        b=y;
    }
   
    void display()
    {
        cout<<"a="<<a<<"  b="<<b<<endl;
    }
    tanu(tanu &t)
    {
        cout<<"copy constructor called"<<endl;
        a=t.a;
        b=t.b;
    }
   tanu operator++()
   {
    tanu temp;
    temp.a=++a;
    temp.b=++b;
    return temp;
 }
   tanu operator++(int teja)//post increment
   {
    tanu temp;
    temp.a=a++;
    temp.b=b++;
    return temp;
 }
     
};
int main()
{
    tanu c1(2,3);
    tanu c2=++c1; //pre increment
    c2.display();
    c1++.display();//post increment 
    c1.display();
   return 0;
}*/
/*#include<iostream>
using namespace std;
class complex
{
    int a,b;
    public:
    complex()
    { 
          cout<<"default constructor called"<<endl;
    }
    complex(int x,int y)
    {
        cout<<"parametrized constructor called"<<endl;
        a=x;
        b=y;
    }
   
    void display()
    {
        cout<<"a="<<a<<"  b="<<b<<endl;
    }
    complex(complex &t)
    {
        cout<<"copy constructor called"<<endl;
        a=t.a;
        b=t.b;
    }
   friend complex operator+(complex &,complex &);
};
complex operator+(complex &a1,complex &a2)
{

cout<<"+ operator called"<<endl;
    complex temp;
    temp.a=a1.a+a2.a;
    temp.b=a1.b+a2.b;
    return temp;
}

int main()
{
    complex c1(2,3);
    complex c2(2,3);
    complex c3=c1+c2;
    c3.display();
   return 0;
}*/
/*#include<iostream>
using namespace std;
class Time
{
    int min,hour;
    public:
    Time()
    { 
          cout<<"default constructor called"<<endl;
    }
    Time(int x,int y)
    {
        cout<<"parametrized constructor called"<<endl;
        hour=x;
        min=y;
    }
   
    void display()
    {
        cout<<"hour="<<hour<<"min="<<min<<endl;
    }
    Time(Time &t)
    {
        cout<<"copy constructor called"<<endl;
        hour=t.hour;
        min=t.min;
    }
    friend void operator<<(ostream &out, Time &s)
    {
        out<<s.hour<<"hours"<<s.min<<"minutes"<<endl;
    }
     friend void operator>>(istream &in, Time &s)
    {
       cout<<"enter hours and minutes"<<endl;
       in>>s.hour>>s.min;
    }
     friend int operator==(Time ,Time );
};
 int operator==(Time a,Time b)
 {
    if(a.hour==b.hour&&a.min==b.min)

    return 1;
    else
    return 0; 


 }

int main()
{
    Time c1;
    Time c2;
    cin>>c1;
    cin>>c2;
    cout<<c1;
    cout<<c2;
    if(c1==c2)
    cout<<"equal";
    else
    cout<<"not equal";
   return 0;
}*/
/*#include<iostream>
using namespace std;
class Time
{
    int min,hour;
    public:
    Time()
    { 
          cout<<"default constructor called"<<endl;
    }
    Time(int x,int y)
    {
        cout<<"parametrized constructor called"<<endl;
        hour=x;
        min=y;
    }
   
    void display()
    {
        cout<<"hour="<<hour<<"min="<<min<<endl;
    }
    Time(Time &t)
    {
        cout<<"copy constructor called"<<endl;
        hour=t.hour;
        min=t.min;
    }
    friend void operator<<(ostream &out, Time &s)
    {
        out<<s.hour<<"hours"<<s.min<<"minutes"<<endl;
    }
     friend void operator>>(istream &in, Time &s)
    {
       cout<<"enter hours and minutes"<<endl;
       in>>s.hour>>s.min;
    }
     friend int operator==(Time ,Time );
};
 int operator==(Time a,Time b)
 {
    if(a.hour==b.hour&&a.min==b.min)

    return 1;
    else
    return 0; 


 }

int main()
{
    Time c1;
    Time c2;
    cin>>c1;
    cin>>c2;
    cout<<c1;
    cout<<c2;
    if(c1==c2)
    cout<<"equal";
    else
    cout<<"not equal";
   return 0;
}*/
/*#include<iostream>
using namespace std;
class Number
{
    int x,y,z;
    public:
    Number()
    {

    }
    Number(int a,int b,int c)
    {
        x=a;
        y=b;
        z=c;
    }
   void operator-()
   {
       x=-x;
       y=-y;
       z=-z;
   }
   void display()
   {
    cout<<x<<y<<z;
   }

};
int main()
{
    Number n1(2,3,4);
    -n1;
    n1.display();
    return 0;
}*/
/*#include<iostream>
#include<cstring>
using namespace std;
class Cstring
{

   char name[20];
    public:
    void get_name()
    {
        cout<<"enter a name";
        cin>>name;
    }
    void display()
    {
        cout<<name;
    }
    Cstring operator+(Cstring t)
    {
        Cstring s;
        strcpy(s.name,name);
        strcat(s.name,t.name);
        return s;
    }
    int operator==(Cstring &t)
    {
        for(int i=0;name[i]!='\0';i++)
        {
            for(int j=0;t.name[j]!='\0';j++)
            {
                if(name[i]==t.name[j])
                return 0;

                else
                return 1;
            }
        }
    }


};

int main()
{
Cstring  s1,s2;
s1.get_name();
s2.get_name();
Cstring s3=s1+s2;
s3.display();
int result=s1==s2;
if(result==0)
cout<<"string are equal"<<endl;
else
cout<<"strings are not equal"<<endl;
return 0;
}**********/
/*#include<iostream>
using namespace std;
class fraction
{
  int nume,deno;
    public:
    fraction()
    {
      nume=0;
      deno=0;
    }
    friend void operator<<(ostream &out, fraction &t){
         out<<" numerator "<<t.nume<<" denomerator"<<t.deno<<endl;
    }

    friend void operator>>(istream &in, fraction &t){
        cout<<"enter numerator and denomerator"<<endl;
        in>>t.nume>>t.deno;
    }
 fraction operator++()
    {
        fraction temp;
        temp.nume=++nume;
        temp.deno=++deno;
        return temp;
    }
    fraction operator++(int teja)
    {
        fraction temp;
        temp.nume=nume++;
        temp.deno=deno++;
        return temp;
    }
    void display()
    {
        cout<<nume<<"/"<<deno<<endl;
    }
    fraction(fraction &t)
    {
        nume=t.nume;
        deno=t.deno;
    }

} ;
int main()
{
    fraction f1,f2,f4;
    cin>>f1;
    cout<<f1;
    
    fraction f3=f1++;
    f3.display();
    f3=++f1;
    f3.display();
    cin>>f2;
    cout<<f2;
    f4=f2++;
    f4.display();
    f4=++f2;
    f4.display();
    return 0;

}*/
/*#include<iostream>
using namespace std;
class matrix
{
  int a[3][3];
    public:
    matrix()
    {
      cout<<"enter 9 numbers";
      for(int i=0;i<=2;i++)
      {
        for(int j=0;j<=2;j++)
        {
         cin>>a[i][j];
        }
      }
    }
   
void display()
{
    cout<<"entered matrix is :"<<endl;
     for(int i=0;i<=2;i++)
      {
        for(int j=0;j<=2;j++)
        {
         cout<< "  "<<a[i][j]<<"  "  ;
        }
        cout<<endl;
      }
}
void negate()
{
    cout<<"negate matrix is :"<<endl;
     for(int i=0;i<=2;i++)
      {
        for(int j=0;j<=2;j++)
        {
            a[i][j]=-a[i][j];
         cout<< "  "<<a[i][j]<<"  "  ;
        }
        cout<<endl;
      }
}
} ;
int main()
{
    matrix f1;
    f1.display();
    f1.negate();
    return 0;

}*/
/*#include<iostream>
using namespace std;
class mystring
{
   char a[100];
    public:
    mystring()
    {
        cout<<"enter a name"<<endl;
        cin>>a;
    }
    void operator!()
    {
        for(int i=0;a[i]!='\0';i++)
        {
        if(a[i]>=65&&a[i]<=95)
        {
            a[i]=a[i]+32;
        }
        else{
            a[i]=a[i]-32;
        }
        }
cout<<"string is "<<a;
    }

};
int main()
{
    mystring  m1;
    !m1;
    return 0;
}*/


/*#include<iostream>
using namespace std;
class Matrix
{
   int a[3][3];
    public:
    Matrix()
    {
        cout<<"enter matrix element:"<<endl;
          for(int i=0;i<=2;i++)
          {
             for(int j=0;j<=2;j++)
              {
                 cin>>a[i][j];
              }
          }
       
     }
     void display1()
     {
        cout<<" first matrix is:"<<endl;
         for(int i=0;i<=2;i++)
          {
             for(int j=0;j<=2;j++)
              {
                 cout<<" "<<a[i][j]<<"  ";
              }
              cout<<endl;
          }
     }
     void display2()
     {
        cout<<"second matrix is:"<<endl;
         for(int i=0;i<=2;i++)
          {
             for(int j=0;j<=2;j++)
              {
                 cout<<" "<<a[i][j]<<"  ";
              }
              cout<<endl;
          }
     }
    void operator+(Matrix &m)
     {
        
        int temp[3][3];
        for(int i=0;i<=2;i++)
          {
             for(int j=0;j<=2;j++)
              {
                temp[i][j]=a[i][j]+m.a[i][j];
               
               cout<<" "<<temp[i][j]<<"  ";
              }
              cout<<endl;
          }
        
     }

void display()
     {
        cout<<"second matrix is:"<<endl;
         for(int i=0;i<=2;i++)
          {
             for(int j=0;j<=2;j++)
              {
                 cout<<" "<<a[i][j]<<"  ";
              }
              cout<<endl;
          }
     }

};
int main()
{
    Matrix  m1,m2;
    m1.display1();
    m2.display2();
    m1+m2;
    
    return 0;
}
**********/
/*#include<iostream>
using namespace std;
class complex
{
    int img,real;
    public:
    friend void operator>>(istream &in, complex &s)if there are only one object calling this function return type can be void but if there are more than one operatr like cout<<c1<<c2 then we have to returntype ostream&
    {
        cout<<"enter imaginary and real part "<<endl;
        in>>s.img>>s.real;
    }
    friend void operator<<(ostream &out, complex &s)
    {
       
        out<<"img="<<s.img<<"real="<<s.real;
    }


};
int main()
{
    complex c1;
    cin>>c1;
    cout<<c1;
    return 0;
}*****/
/*#include<iostream>
using namespace std;
class complex
{
    int img,real;
    public:
    void setData(int img,int real)
    {
       this->img=img;
       this->real=real;
    }
    void display()
    {
        cout<< "img="<<img<<"real="<<real;
    }

};
int main()
{
    complex c1;
   
    c1.setData(1,2);
    c1.display();
    return 0;
}*/
/*#include<iostream>
using namespace std;
class integer
{
    int a[100];
    const int size=100;
    public:
    integer()
    {

    }
    void set_data(int x, int index)
    {
        if(index>size)
        cout<<"size of array out of bound exception"<<endl;
        a[index]=x;
    }
    void display(int index)
    {
        cout<<a[index]<<endl;
    }
   int  operator[](int index)
    {
        if(index>size)
        {
        cout<<"array size out of bound exception"<<endl;
        exit(0);
        }
      return a[index];
    }
};
int main()
{
    integer i1;
    i1.set_data(20,20);
    i1.display(20);
    cout<<i1[150];
    return 0;
}*******/
/*#include<iostream>
using namespace std;
class complex
{
    int a,b;
    public:
    complex()
    {

    }
    complex(int x,int y)
    {
        a=x;
        b=y;
    }
    void display()
    {
        cout<<"a="<<a<<"b="<<b;
    }
   complex& operator=(complex c)
    {
       
        this->a=c.a;
       this->b=c.b;
        return *this;
    }

};
int main()
{
    complex c1(2,3),c2,c3;
    c3=c2=c1;
    c3.display();
    return 0;
    
}*/
/*#include<iostream>
using namespace std;
class integer
{
    int i;
    public:
    integer(int i)
    {
        this->i=i;
    }

    void operator!()
    {
          i=!i;
    }
    void display()
    {
        cout<<"i="<<i<<endl;
    }
};
int main()
{
    integer i1(0),i2(5);
    !i1;
    i1.display();
    !i2;
    i2.display();
    return 0;
   
    
}*****/
/*#include<iostream>
using namespace std;
class coord3d
{
    int a,b,c;
    public:
    coord3d()
    {

    }
    coord3d(int x,int y,int z)
    {
        a=x;
        b=y;
        c=z;
    }

    void display(){
        cout<<"a="<<a<<"b="<<b<<"c="<<c<<endl;
    }
    coord3d operator,(coord3d x)
    {
        coord3d temp;
       temp. a=x.c;
        temp. b=x.b;
         temp.c=x.a;
         return  temp;

    }
};
int main()
{
    coord3d c1(1,2,3),c2(4,5,6),c3(7,8,9);
  coord3d c4=(c1,c2,c3);
  c4.display();
 return 0;

}*/
/*#include<iostream>
using namespace std;

class Distance
{
    int feet;
    int inches;

public :
    Distance()
    {

    }

    Distance(int f, int i)
    {
        feet = f;
        inches = i;
    }

     Distance operator()(int a, int b,int c)
    {
        Distance d;
        d.feet = a + c + 5;
        d.inches = a + b + 15;
        return d;
    }

    void display()
    {
        cout<<" Feet = "<<feet<<" Inches "<<inches<<endl;
    }
};

int main()
{

    Distance d1;
    Distance d2;
    d2 = d1(10,20,30);
    d2.display();
 return 0;
}*/
#include<iostream>
using namespace std;
class marks
{
    int Marks;
    public:
    marks()
    {

    }
    marks(int x)
    {
        Marks=x;
    }
    void display()
    {
        cout<<"marks="<<Marks<<endl;
    }
    marks * operator->()
    {
        return this;
    }

};
int main()
{
    marks m1(10);
    m1.display();
    m1->display();
    return 0;
}



