#include <iostream>

using namespace std;

int main()
{
    int n, total=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        char a;
        cin>>a;
        total=total+(int(a)-48);
    }
    cout<<total;
}
