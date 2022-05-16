#include <iostream>
#include <string>

using namespace std;

int main()
{
    int testcase;
    cin>>testcase;
    for(int i=0;i<testcase;i++)
    {
        string answers;
        cin>>answers;
        
        int straight=0;
        int score=0;
        for(int i=0;i<answers.length();i++)
        {
            if(answers[i]=='O')
            {
                straight++;
                score=score+straight;
            }
            else if (answers[i]=='X') straight = 0;
        }
        
        cout<<score<<endl;
    }
    
    return 0;
}
