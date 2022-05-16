#include <iostream>

using namespace std;

int main()
{
    int max=1, maxnum=0;
    for (int i=0;i<9;i++)
    {
        int temp;
        cin>>temp;
        if(temp>maxnum)
        {
            maxnum=temp;
            max=i+1;
        }
    }
    cout<<maxnum<<endl<<max;
}
