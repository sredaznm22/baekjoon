#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int n, sum=0;
    cin>>n;
    int *grades= new int[n];
    for(int j=0;j<n;j++)
    {
        cin>>grades[j];
        sum=sum+grades[j];
    }
    sort (grades, grades+n);
    //max value = grades[n-1]
    cout<<double(((sum/(double(grades[n-1])))*100)/n)<<endl;
    
    return 0;
}
