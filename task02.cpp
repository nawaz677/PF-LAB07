#include<iostream>
using namespace std;

int calculate_sum(int);

main()
{
    int sum=0;
    sum=calculate_sum(sum);
    cout<<"The final sum is: "<<sum;

}

int calculate_sum(int sum)
{
    for(int i=1;i<=5;i++)
    {
        sum=sum+i;
    }    

    return sum;

}