#include <iostream>

using namespace std;

int main()
{
    int arr[42]={}, cnt=0;
    for(int i=0;i<10;i++)
    {
        int temp;
        cin>>temp;
        int temp1=temp%42;
        if(arr[temp1]==0) cnt++;
        arr[temp1]++;
    }
    cout<<cnt;
}
