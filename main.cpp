#include <iostream>
#include "manish.h"
#include "kedaar.h"
#include "mad.h"
#include <stdlib.h>
#include "maths.h"
#include<conio.h>
using namespace std;
int main(){
    int ch;label:system ("cls");
    cout<<"Enter the choice \n1. Arithmatic\t 2.Combinotrics\t 3.Complex Numbers\t 4.ARRAY Mechanics\t 5.EXIT"<<endl;

    cin>>ch;
    switch(ch)
    {
        case 1:{arithmatic a;
        int ch1;
        while(1)
            {label2:
                cout<<"\n1.ADDITION \t 2.SUBTRACTION \t 3.MULTIPLICATION \t 4.DIVISION\t 5.FACTORIAL \t 6.MODULUS \t 7.MAIN MENU";
                cin>>ch1;
                switch(ch1)
                {case 1:a.add();break;
                case 2: a.sub();break;
                case 3: a.multiply();break;
                case 4: a.division();break;
                case 5:int n,b;
                    cout<<"\nEnter the integer\n";
                    cin>>n;
                    b=a.factorial(n);
                    a.ans=a.ans+b;
                    cout<<"\n FACTORIAL OF "<<n<<" is "<<b;break;
                case 6:a.mod();break;
                case 7:goto label;
                default:cout<<"\nINVALID INPUT ERROR 303\n";goto label2;
            }
        }
    break;}
    case 5:exit(0);
    case 2:{logic b1;int ch;
    while(1){label1:cout<<"\n 1.ARRANGEMENTS OF N OBJECTS TAKEN R AT A TIME \n 2.SELECTIONS OF N OBJECTS TAKEN R AT A TIME\n 3.MAINMENU";
    cin>>ch;switch(ch)
    {
        case 1:b1.permutation();break;
        case 2:b1.combination();break;
        case 3:goto label;
        default:cout<<"\nINVALID INPUT ERROR 303\n";goto label1;


    }

    }

    break;}
    case 3:{complexs a1,c1,c2;
    a1.input();
    c1.input();c2.display1();
    c2=a1+c1;

    c2.display();cout<<endl;
    goto label;}
    case 4:{int ch,n;float a0[100];char s[100];
    cout<<"\n1.ENTER THE CHOICE 1.Search \t 2.Sort\n";
    cin>>ch;
    switch(ch){case 1:cout<<"WHICH TYPE OF DATA YOU WANT TO SEARCH\n";
    cout<<"1.FLOAT 2.CHAR";
    cin>>ch;
    if(ch==1){char q;label10:
        cout<<"Enter the number of Elements\n";
        cin>>n;
        cout<<"\nENTER THE ELEMENTS IN ASCENDING ORDER\n";
            for(int i=0;i<n;i++)
            cin>>a0[i];
            cout<<"ARE THE ELEMENTS ARE IN ASCENDING ORDER 1.Y \t 2.N\n";cin>>q;
            if(q=='N'||q=='n'){cout<<"PLEASE REENTER THE ARRAY\n";goto label10;}
       n=binarysearch(a0,n);if(n==-1){cout<<"ERROR 404,NOT FOUND\n";}
       else
       cout<<"ELEMENT IS FOUND IN POSITION "<<n+1<<endl;


    }
else if(ch==2){char q; label11:
cout<<"Enter the number of Elements\n";
        cin>>n;
        cout<<"\nENTER THE ELEMENTS\n";
            for(int i=0;i<n;i++)
            cin>>s[i];cout<<"ARE THE ELEMENTS ARE IN ASCENDING ORDER 1.Y \t 2.N\n";cin>>q;
            if(q=='N'||q=='n'){cout<<"PLEASE REENTER THE ARRAY\n";goto label11;}
       n=binarysearch(s,n);if(n==-1){cout<<"ERROR 404,NOT FOUND\n";}
       else
       cout<<"ELEMENT IS FOUND IN POSITION  "<<n+1<<endl;
}
goto label;
case 2:{int ch8;
    cout<<"WHICH TYPE OF DATA YOU WANT TO SORT\n";
    cout<<"1.FLOAT 2.CHAR";
    cin>>ch8;
    if(ch8==1){
        cout<<"Enter the number of Elements\n";
        cin>>n;
        cout<<"\nENTER THE ELEMENTS\n";
            for(int i=0;i<n;i++)
            cin>>a0[i];
            sorts(a0,n);
            }else if(ch8==2){



        cout<<"Enter the number of Elements\n";
        cin>>n;
        cout<<"\nENTER THE ELEMENTS\n";
            for(int i=0;i<n;i++)
            cin>>s[i];
            sorts(s,n);
            }
cout<<endl;goto label;    }}


}}}
