//Write a C++ program to count the total number of even and odd elements in an array.
#include<iostream>
using namespace std;
int main()
{
    int arr[15]={1,10,16,19,23,15},even=0 , odd=0;
    cout<<endl;
    for (int i = 0; i < 6; i++)
    {
        cout << arr[i] << " ";
    }
    cout<<endl;
    for (int i = 0; i < 6; i++)
    {
        if (arr[i]%2==0)
        {
            even+=1;
        }
        else{
            odd+=1;
        }
        
    }
    cout<<"Even : "<<even<<"\n"<<"Odd : "<<odd<<endl;
    return 0;
    
}