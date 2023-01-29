#include<iostream>
using namespace std;

int calculate_sum(int,int);

main()
{
    int i=1;
    int sum=0;

    sum=calculate_sum(i,sum);
    cout<<"The Final Sum is: "<<sum;

}

int calculate_sum(int i,int sum)
{
    while(i<=100)
    {
        sum=sum+i;
        i++;
    }
    return sum;

}