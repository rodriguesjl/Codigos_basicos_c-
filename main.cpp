#include <iostream>
#include "euler.hpp"

using namespace std;

int main(){
    int n1;
    double x1;
    
    cout<<"Digite o numero de termos da série: "<<endl;
    cin>>n1;
    cout<<"Digite o valor de x: "<<endl;
    cin>>x1;

    euler* numero = new euler(1, n1, 1, x1, 1);
    cout<<numero->exponencial()<<endl;

    delete numero;

    return 0;
}
