#ifndef MAD_H_INCLUDED
#define MAD_H_INCLUDED
#include<iostream>

using namespace std;
class complexs
{
    float real,imag;
    public: void input()
    {static int i=1;
        cout<<"Enter the complex number\n real and imaginary part respectively";

        cin>>real>>imag;cout<<"INPUTED COMPLEX NUMBER IS : \n C"<<i<<" : ";
        display();i++;
    }
    void display()
    {
        cout<<real<<"+ i"<<imag<<endl;

    }
    void display1(){cout<<"SUM OF C1 and C2\n";}
friend complexs operator + (complexs a,complexs b);


};
complexs operator +(complexs a,complexs b)
{complexs c;
c.real=a.real+b.real;
c.imag=a.imag+b.imag;
return c;
}
#endif // MAD_H_INCLUDED
