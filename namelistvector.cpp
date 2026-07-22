#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() 
{
    vector<string> names;
    names.push_back("Riya");
    names.push_back("Nikita");
    names.push_back("Garima");
    names.pop_back();
    for (string x : names)
    {
        cout << x << " ";
    }
    return 0;
}