#include <bits/stdc++.h>

using namespace std;

int main()
{
    cout<<"Passe uma string como entrada"<<endl;
    string entrada;
    cin>>entrada;
    int l = 0;
    int r = (int)entrada.size()-1;
    while(l<r)
    {
        char temp = entrada[l];
        entrada[l]=entrada[r];
        entrada[r]=temp;
        l++; r--;
    }
    cout<<"String reversa = "<<entrada<<endl;
    return 0;
}
