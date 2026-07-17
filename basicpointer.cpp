#include<iostream>
#include<string>
using namespace std;
int main()
{
    //Basic Pointer

    int num = 100;
    int* ptr= &num;

    cout<<"\n Value of num:" <<num;
    cout<<"\n Value of num:" <<ptr;
    cout<<"\n Value of num:" <<*ptr;

    return 0;

}
