#include<iostream>
using namespace std;
void fizzbuzz()
{
    for(int i=0; i<=100; i++)
    {
        if(i==0)
            cout<<"0, ";
        else if((i%3) == 0)
            cout<<"Fizz, ";
        else if((i%5) == 0)
            cout<<"Buzz, ";
        else
            cout<<i<<", ";    
    }
}
int main()
{
    cout<<"------------------------------------"<<endl;
    cout<<"Fizz Buzz Program in c++"<<endl;
    cout<<"Coded by Jackson Konjengbam"<<endl;
    cout<<"------------------------------------"<<endl;
    fizzbuzz();
    return 0;
}