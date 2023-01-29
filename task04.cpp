#include<iostream>
using namespace std;

void fibonacci_series(int);

main()
{
    int number;
    cout<<"How many numbers of Fibonacci series you want to print: ";
    cin>>number;

   fibonacci_series(number);

}

void fibonacci_series(int number)
{
    int previous=0;
    int next=1;
    int sum=0;

    cout<<previous<<","<<next;

    for(int i=1;i<=number-2;i++)
    {
        sum=previous+next;
        previous=next;
        next=sum;
        cout<<","<<sum;
        
    }

    

}