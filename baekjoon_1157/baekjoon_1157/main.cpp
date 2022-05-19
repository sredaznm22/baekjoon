#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    string word;
    cin>>word;
    int len=word.size();
    char letters[1000000];
    strcpy(letters, word.c_str());
    
    int notimes[26]={0,};
    
    for(int i=0;i<len;i++)
    {
        if(int(letters[i])>95) notimes[int(letters[i])-97]++;
        else notimes[int(letters[i])-65]++;
    }
    
    int max=0,maxnum=0;
    bool many = false;
    for(int j=0;j<26;j++)
    {
        if(max<notimes[j])
        {
            max=notimes[j];
            maxnum=j;
            many=false;
        }
        else if(max==notimes[j])
        {
            many=true;
        }
    }
    
    if(many==true) cout<<"?";
    else cout<<char(maxnum+65);
    
    return 0;
}
