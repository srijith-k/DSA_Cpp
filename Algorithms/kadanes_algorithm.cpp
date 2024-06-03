#include<iostream>
using namespace std;

int kadanes(int* arr, int n)
{
    int curr_sum=0, max_sum=INT_MIN;
    for(int i=0;i<n;i++)
    {
        curr_sum=curr_sum+arr[i];
        if(curr_sum>max_sum)
            max_sum= curr_sum;
        if(curr_sum<0)
            curr_sum=0;
    }
    return max_sum;
}

int main()
{
    int arr[]= {-2, -3, -4, 1, 0, -1, -5, -3};
    cout<<kadanes(arr, 8);
    return 0;
}
