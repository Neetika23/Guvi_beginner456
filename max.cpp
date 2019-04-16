#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[10];
    for(int i=0;i<10;i++)
    {
        cin>>arr[i];
    }
    int *m=max_element(arr,arr+10);
    cout<<*m;
    return 0;
}