#include "euler.hpp"

euler::euler(int fatorial, int n, int i, double x, double soma){

    _fatorial = fatorial;
    _n = n;
    _i = i;
    _x = x;
    _soma = soma;
}

double euler::exponencial(){

    for(_i = 1; _i<_n;_i++){
    _fatorial = _fatorial*_i;
    _soma = pow(_x,_i)/_fatorial + _soma;
    
    }
    return _soma;
}

