#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int num;
    cin>>num;
    int arr[1000000];
    for(int i=0;i<num;i++) cin>>arr[i];
    sort(arr, arr+num);
    cout<<arr[0]<<" "<<arr[num-1];
}
