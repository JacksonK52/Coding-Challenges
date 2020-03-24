#include<iostream>
#include<stdlib.h>

using namespace std;

void linear()
{
    bool found = false;
    int a[4], sum=0;
    cout<< "Enter any 4 digits separated by space: ";
    for(int i=0; i<4; i++)
    {
        cin>> a[i];
    }
    cout<< "\nEnter the value of sum: ";
    cin>>sum;
    for(int i=0; i<4; i++)
    {
        if(a[i] == sum)
        {
            cout<< "Sum is found" << endl;
            cout<< "Position: "<< i + 1<< endl<<endl;
            found = true;
            break;
        }
        for(int j=i+1; j<4; j++)
        {
            if((a[i] + a[j]) == sum)
            {
                cout<< "Sum is found" << endl;
                cout<< "when performing addition with the value of position: "<< i + 1 << " and position: "<< j + 1 << endl<<endl;
                found = true;
                break;
            }
        }      
    }

    if(found == false)
    {
        cout<< "Sum is not found" <<endl<<endl;
    }
}

int main() 
{
    int ch;
    cout<<"----------------------------------------------------------------"<<endl;
    cout<<"----------------------------------------------------------------"<<endl;
    cout<<"\t\tSUM OF FEAR Codding challenges"<<endl;
    cout<<"\t\tDeveloped by Jackson Konjengbam"<<endl;
    cout<<"----------------------------------------------------------------"<<endl;
    cout<<"----------------------------------------------------------------"<<endl;
    while(1)
    {
        cout<<"==========================( MENU )=========================="<<endl;
        cout<<"1. Linear Addition"<<endl;
        cout<<"2. Exit"<<endl;
        cout<<"Enter your choice: ";
        cin>> ch;

        switch (ch)
        {
        case 1:
            linear();
            break;

        case 2:
            cout<<"Good Bye"<<endl;
            exit(0);
            break;

        default:
            cout<<"Wrong choice. Please try again!";
            break;
        }
    }
    return 0;
}