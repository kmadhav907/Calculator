#ifndef KEDAAR_H_INCLUDED
#define KEDAAR_H_INCLUDED
#include<iostream>
#include "manish.h"



using namespace std;

class logic: private arithmatic
{
int n,r;
 public:logic(){n=r=0;}
     void permutation()
     {
        cout<<"Enter the values of n objects among r arrangments should be done\n";
        cin>>n>>r;
        int b;
        b=factorial(n)/factorial(n-r);
        cout<<"\nIN "<<n<<" items ; "<<r<<" items are selected, then they can be Arranged in "<<b<<endl;
        ans+=b;
        n=r=0;
     }
void combination()
     {
        cout<<"Enter the values of n objects among r selections should be done\n";
        cin>>n>>r;
        int b;
        b=factorial(n)/(factorial(n-r)*factorial(r));
        cout<<"\nIN "<<n<<" items ; "<<r<<" items are selected, then they can be selected in "<<b<<endl;
        ans+=b;
     }



};

#endif // KEDAAR_H_INCLUDED
