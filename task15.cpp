#include<iostream>
using namespace std;

float calculate_price(float,int);

main()
{
    float money;
    int year;
    cout<<"Enter the money received as inheritance: ";
    cin>>money;
    cout<<"Enter the year until which he has to live in the past: ";
    cin>>year;

    calculate_price(money,year);

}

float calculate_price(float money,int year)
{   
    float sum_1=0;
    float sum_2=0;
    float total_sum=0;
    float remaining=0;
    float add_money=0;
    

    for(int start_1=1800;start_1<=year;start_1=start_1+2)
    {
        sum_1=sum_1+12000;
    }

    int age=19;

    for(int start_2=1801;start_2<=year;start_2=start_2+2)
    {
        sum_2=sum_2+12000+(50*age);
        age=age+2;
    }

    total_sum=sum_1+sum_2;
    
    remaining=money-total_sum;
    add_money=total_sum-money;

    if(money>=total_sum)
    {
        cout<<"Yes!"<<endl;
        cout<<"He will have a care free life and will have "<<remaining<<" dollars left";
    }

    else if(money<total_sum)
    {
        cout<<"No!"<<endl;
        cout<<"He will need "<<add_money<<" dollars to survive";
    }

}