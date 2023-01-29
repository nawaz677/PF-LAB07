#include<iostream>
using namespace std;

int digit_Sum(int,int);

main()
{
    int num;
    int sum=0;
    cout<<"Enter any number: ";
    cin>>num;

    sum=digit_Sum(num,sum);
    cout<<"The sum is: "<<sum;
    
}

int digit_Sum(int num,int sum)
{
    
    for(int i=num;i>0;i=i/10)
    {
        sum=sum+(i%10);
    }
    
    return sum;

}








