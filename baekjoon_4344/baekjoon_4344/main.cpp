#include <iostream>
#include <algorithm>
#include <iomanip>

using namespace std;

int main()
{
    int testcases;
    cin>>testcases;
    for(int i=0;i<testcases;i++)
    {
        int n;
        int totalscore=0;
        cin>>n;
        int *scoresarr=new int [n];
        for(int j=0;j<n;j++)
        {
            cin>>scoresarr[j];
            totalscore=totalscore+scoresarr[j];
        }
        sort(scoresarr,scoresarr+n);
        double average = double(totalscore)/n;
        
        for(int k=0;k<n;k++)
        {
            if(double(scoresarr[k])>average)
            {
                double percentage=double(100*(double(n)-double(k))/double(n));
                cout<<std::fixed<<std::setprecision(3)<<percentage<<"%"<<endl;
                break;
            }
            else if (k==n-1) cout<<"0.000%"<<endl;
        }
    }
    return 0;
}
