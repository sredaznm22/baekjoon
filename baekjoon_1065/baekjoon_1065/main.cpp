#include <iostream>

using namespace std;

int onenum(int n)
{
    int tempn=n, x=0;
    
    //find x, the length of the number
    while(tempn!=0)
    {
        tempn=tempn/10;
        x++;
    }
    
    //true if number is a onenum, false if it is not
    bool numbers [10001];
    
    //initialize numbers[] to false
    fill_n(numbers, 10000, false);
    
    //evaluation for single digit numbers
    if(n<10)
        for(int i=1;i<n+1;i++) numbers[i]=true;
    else if (n>9)
        for(int i=1;i<10;i++) numbers[i]=true;
    
    //For an x digit number, when an+d, d can range from 0 to 2^(5-x)
    //지금 d가 음수인 걸 고려 못해줬음
    if(x>1)
    {
        for(int j=-9;j<10;j++)
        {
            for(int k=1;k<10;k++)
                if((j+k)<10&&(j+k)>=0) numbers[k*10+(j+k)]=true;
        }
    }
    
    if(x>2)
    {
        for(int l=-4;l<5;l++)
        {
            for(int m=1;m<10;m++)
                if((m+(2*l))<10&&(m+(2*l))>=0) numbers[m*100+(m+l)*10+(m+(2*l))]=true;
        }
    }
    
    int total=0;
    
    for(int p=1;p<n+1;p++)
        if(numbers[p]==true)    total++;
    
    return total;
}

int main()
{
    int n;
    cin>>n;
    cout<<onenum(n);
    
    return 0;
}
