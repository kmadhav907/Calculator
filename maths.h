#ifndef MATHS_H_INCLUDED
#define MATHS_H_INCLUDED
#include<iostream>
using namespace std;
template <class T>
int binarysearch(T t[], int n)
 {

   int e,b,m,p=-1;
    T k;
    e=0;cout<<"\nENTER THE SEARCH ELEMENT\n";
    cin>>k;
    b=n-1;
    while(b>=e)
    {
     m=(int)((b+e)/2);
     if(t[m]==k)

     {
         p=m;
            return p;}
     else if(t[m]>k)
       {

        b=m-1;}
     else
        {e=m+1;
    }
    }

}template <class T>
void sorts(T t[],int n){
cout<<"\n SORTED ELEMENTS ARE:\n";T temp;
for(int i=0;i<n;i++)
    for(int j=0;j<n-1;j++)
if(t[j]>t[j+1])
{
    temp=t[j];
    t[j]=t[j+1];
    t[j+1]=temp;
}
for(int k=0;k<n;k++)
    cout<<'\t'<<t[k];

}



#endif // MATHS_H_INCLUDED
