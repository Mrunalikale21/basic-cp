#include<iostream>
using namespace std;

int main()
{

    int n1,n2;
    cout<<"enter two numbers"<<endl;
    cin>>n1>>n2;

    char op;
    cout<<"enter operator"<<endl;
    cin>>op;

    switch (op)
    {
    case'+':
        cout<<n1+n2<<endl;
        break;
    case'-':
        cout<<n1-n2<<endl;
        break;
    case'*':
        cout<<n1*n2<<endl;
        break;
    case'/':
        cout<<n1/n2<<endl;
        break;
    defalut:
        cout<<"enter proper operator"<<endl;
        break;
    }

        return 0;
    }

    

    
    
    

    
