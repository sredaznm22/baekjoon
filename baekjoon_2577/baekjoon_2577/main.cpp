#include <iostream>
#include <array>

using namespace std;

int main()
{
    int arr[3], numarr[10]={}, multiple;
    for(int i=0;i<3;i++) cin>>arr[i];
    multiple=arr[0]*arr[1]*arr[2];
    
    while(multiple>0)
    {
        int temp=multiple%10;
        numarr[temp]++;
        multiple=(multiple-temp)/10;
    }
    
    for(int j=0;j<10;j++) cout<<numarr[j]<<endl;
}
