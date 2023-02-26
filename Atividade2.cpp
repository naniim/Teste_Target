#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    bool confere = false;
    if(n==0 or n==1){confere=true;}
    int fib [2]; fib[0]=0; fib[1]=1;
    while(max(fib[1],fib[0])<n)
    {
        if(fib[1]<fib[0])
        {
            fib[1]+=fib[0];
        }
        else
        {
            fib[0]+=fib[1];
        }
        if(n==max(fib[0],fib[1])){confere=true;}
    }
    if(confere)
    {
        cout<<"O numero lido esta na sequencia de Fibonacci"<<endl;
    }
    else
    {
        cout<<"O numero lido nao esta na sequencia de Fibonacci"<<endl;
    }
    return 0;
}
