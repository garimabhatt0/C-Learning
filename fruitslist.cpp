#include <iostream>
#include <list>
using namespace std;

int main()
    {
        list<string> fruits={"Apple", "Banana", "Cherry", "Date", "Elderberry"};

        fruits.push_front("Grapes");
        for(string s: fruits)
        {
            cout<<s<<" ";
        }
    }