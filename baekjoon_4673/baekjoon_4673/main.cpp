#include <iostream>

using namespace std;

bool numbers [10001];

int selfnum(int number)
{
    int result=number;
    while(number>0)
    {
        result=result+number%10;
        number=number/10;
    }
    return result;
}

int main()
{
    fill_n(numbers, 10001, false);
    for(int i=1;i<10001;i++)
    {
        int temp=selfnum(i);
        if (numbers[temp]==false&&temp<10001) numbers[temp]=true;
    }
    for(int j=1;j<10001;j++)
        if(numbers[j]==false) cout<<j<<endl;
    
    return 0;
}
