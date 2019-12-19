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
    cout<<"------------------------------------\n";
    cout<<"Fizz Buzz Program in c++\n";
    cout<<"Coded by Jackson Konjengbam\n";
    cout<<"------------------------------------\n";
    fizzbuzz();
    return 0;
}