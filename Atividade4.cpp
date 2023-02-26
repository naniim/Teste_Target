#include <bits/stdc++.h>

using namespace std;

//SP – R$67.836,43

double converte (string estado)
{
    //Podemos ignorar os 7 primeiros caracteres
    int pot10=1;
    int atual = 7;
    if(estado[0]=='O')
    {
        atual = 11;
    }
    double valor = 0.0;
    while(atual<estado.size())
    {
        if(estado[atual]==','){break;}
        if(estado[atual]!='.')
        {
            pot10*=10;
        }
        atual++;
    }
    atual = 7;
    if(estado[0]=='O')
    {
        atual = 11;
    }
    pot10/=10;
    while(atual<estado.size())
    {
        if(estado[atual]==','){break;}
        if(estado[atual]!='.')
        {
            valor += (double)(estado[atual]-'0')*pot10;
            pot10/=10;
        }
        atual++;
    }
    pot10 = 10;
    atual++;
    while(atual<estado.size())
    {
        valor += (estado[atual]-'0')/(double)pot10;
        pot10 *=10;
        atual++;
    }
    return valor;
}


int main()
{
    string sp; getline(cin,sp);
    double sp_valor = converte(sp);
    string rj; getline(cin,rj);
    double rj_valor = converte(rj);
    string mg; getline(cin,mg);
    double mg_valor = converte(mg);
    string es; getline(cin,es);
    double es_valor = converte(es);
    string outros; getline(cin,outros);
    double outros_valor = converte(outros);
    double total = sp_valor+rj_valor+mg_valor+es_valor+outros_valor;
    cout<<"SP representa "<<(sp_valor/total)*100.0<<"% do valor total da distribuidora"<<endl;
    cout<<"RJ representa "<<(rj_valor/total)*100.0<<"% do valor total da distribuidora"<<endl;
    cout<<"MG representa "<<(mg_valor/total)*100.0<<"% do valor total da distribuidora"<<endl;
    cout<<"ES representa "<<(es_valor/total)*100.0<<"% do valor total da distribuidora"<<endl;
    cout<<"Os demais estados representam "<<(outros_valor/total)*100.0<<"% do valor total da distribuidora"<<endl;
    return 0;
}
