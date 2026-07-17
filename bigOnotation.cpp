#include <iostream>
using namespace std;

int main(){
    int arr[]={10,20,30,40,50};
    int n = 5;

    // Sort the array first (needed to find median correctly)
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(arr[j] > arr[j+1])
            {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }

    // Find median
    if(n % 2 != 0)
    {
        cout<<"Median: "<<arr[n/2];
    }
    else
    {
        cout<<"Median: "<<(arr[n/2 - 1] + arr[n/2]) / 2.0;
    }

    return 0;
}