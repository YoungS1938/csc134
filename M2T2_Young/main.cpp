// CSC 134
// M2T2_Young
// Seth Young
// 01-29-2019

#include <iostream>

using namespace std;

int main()
{
    //IfElse
    int i;
    cout << "Type any number: ";
    cin >>i;
    if (i>10)
    {
        cout << "It's greater than 10." << endl;
    } else
    {
        cout << "It's not greater than 10." << endl;
    }

    //IfElse2
    // int i;
    cout << "Type any number: ";
    cin >> i;
    if (i>10)
    {
        cout<< "It's greater than 10."<<endl;
    } else if (i==10)
    {
        cout<< "It's equal to 10." << endl;
    } else
    {
         cout << "It's less than 10." << endl;
    }

    //IfElse3
    //int i;
    cout<<"Type any number: ";
    cin>> i;
    if (i>100)
    {
        cout<<"It's greater than 100."<<endl;
    } else if (i>10)
    {
        cout<< "It's greater than 10."<<endl;
    } else
    {
        cout<<"It's neither greater than 100 nor greater than 10."<<endl;
    }

    //ForLoop
    int x=0;
    //int i;
    for (i =1; i<=100; i++)
    {
        x+=i;
    }
    cout<<x<<endl;

    //ForCountdown
    //int i;
    for (i=10; i>=5; i--)
    {
        cout<<i<<endl;
    }

    //ForLoop2
    double xx = 0.0;
    double i1;
    for (i1=0.0; i1<=100; i1+=0.1)
    {
         xx+-i1;
    } cout <<xx << endl;

    //WhileLoop
    int i2=0;
    while(i2<=10)
    {
        cout<<i2<<endl;
        i2++;
    }
    cout<<"All Finished!"<<endl;

    //DoWhileLoop
 int i3 = 0;
 do
 {
     cout<< i3<<endl;
     i3++;
 }
 while (i3<=10);
 cout<<"All Finished!"<<endl;

    return 0;
}
