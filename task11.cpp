#include<iostream>
using namespace std;

int print_counting(int,int);

main()
{   
    int i=1;
    int num;
    cout<<"Enter any number: ";
    cin>>num;

    i=print_counting(i,num);
}

int print_counting(int i,int num)
{
    while(i<=num)
    {
        cout<<i<<endl;
        i++;
    }

    return i;

}