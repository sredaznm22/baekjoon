#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    int testcases;
    cin>>testcases;
    
    for(int i=0;i<testcases;i++)
    {
        int r;
        cin>>r;
        string temp;
        char temp1[1000];
        cin>>temp;
        int len=temp.size();
        strcpy(temp1,temp.c_str());
        
        for(int j=0;j<len;j++)
        {
            int cnt=0;
            while(cnt<r)
            {
                cout<<temp1[j];
                cnt++;
            }
        }
        cout<<endl;
    }
}
