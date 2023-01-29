#include<iostream>
using namespace std;

int total_digits(int,int);

main()
{
    int num;
    int sum=0;
    cout<<"Enter any number: ";
    cin>>num;

    sum=total_digits(num,sum);
    cout<<"The total number of digits in the number are: "<<sum;

}

int total_digits(int num,int sum)
{
    int k;
    for(int i=num;i>0;i=i/10)
    {
        k=i/10;
        sum=sum+1;
    }

    return sum;

}