#ifndef MANISH_H_INCLUDED
#define MANISH_H_INCLUDED
#include <math.h>
#include <iostream>
using namespace std;
class arithmatic
{
private: float a, b;
public: float ans;
    arithmatic()
    {
        ans=0;
    }
~arithmatic()
{   cout<<"THIS IS THE GRAND TOTAL OF YOUR EXECUTION: ";
    cout<<ans;
    cout<<" \nTHANK YOU\n";
}

    void add()
    {

        cout<<"Enter the numbers to be added\n";
        cin>>a>>b;
        float c;
        c=a+b;
        ans+=c;
        cout<<"SUM OF "<<a<<" & "<<b<<" is "<<c<<endl;
        a=b=0;
    }
    void sub()
    { cout<<"Enter the number to be subtracted from another number\n";
        float c;
        cin>>a>>b;
        c=b-a;
        cout<<"DIFFERENCE OF "<<b<<" & "<<a<<"is "<<c<<endl;
        ans+=c;
        a=b=0;
    }
    void multiply()

    {
      cout<<"Enter the numbers to be multiplied\n";
      float c;
      cin>>a>>b;
      c=a*b;
      cout<<"PRODUCT OF "<<a<<" & "<<b<<" is " <<c;
    }
    void division()
    {  label:
        cout<<"Enter the dividend and divisor\n";
        cin>>a>>b;
        try{if(b==0)
        throw(b);
        }
        catch(float a)
        {cout<<"Cant Divide by zero\n ";
            goto label;
        }
        float c=a/b;
        cout<<"QUOTIENT OF "<<a<<" & "<<b<<" is "<<c<<endl;
        ans=+c;
        a=b=0;
    }
    void mod()  {  label:
        cout<<"Enter the dividend and divisor\n";
        cin>>a>>b;
        try{if(b==0)
        throw(b);
        }
        catch(float a)
        {cout<<"Cant Divide by zero\n ";
            goto label;
        }
        int c=(int)a%(int)b;
        cout<<"MOD OF "<<a<<" & "<<b<<" is "<<c<<endl;
        ans=+c;
        a=b=0;
    }
    int factorial(int n)
    {
        if (n==1)
            return 1;
        return n*factorial(n-1);
    }




};
#endif // MANISH_H_INCLUDED
