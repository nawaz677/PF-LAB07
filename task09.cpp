#include<iostream>
using namespace std;

int validate_integer(int);

main()
{
    int num;
    cout<<"Enter any number: ";
    cin>>num;

    num=validate_integer(num);

}

int validate_integer(int num)
{
    while(num<=0)
    {
        cout<<"Error! Insert a number greater than zero"<<endl;
        cout<<"Again enter number: ";
        cin>>num;
    }

    return num;

}