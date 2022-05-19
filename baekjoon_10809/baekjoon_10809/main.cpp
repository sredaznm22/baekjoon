#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    string a;
    char array[100];
    int places[300];
    fill(places,places+300,-1);
    
    cin>>a;
    int len=a.size();
    strcpy(array,a.c_str());
    
    for(int i=0;i<len;i++)
        if(places[int(array[i])]==-1) places[int(array[i])]=i;
    
    for(int j=97; j<123;j++) cout<<places[j]<<" ";
    
    return 0;
}
