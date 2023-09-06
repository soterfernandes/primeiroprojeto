#include <iostream>
using namespace std;

int main(){
    int i=3,j=5;
    int *p, *q;
    p = &i;
    q = &j;
    cout << "Exercicio Ponteiros: " << endl << endl;
    cout << "[p] =  " << p << endl;
    cout << "[q] =  " << q << endl;
    cout << "[*p] =  " << *p << endl;
    cout << "[*q] =  " << *q << endl;
    cout << "[i] =  " << i << endl;
    cout << "[j] =  " << j << endl;
    cout << "[&i] =  " << &i << endl;
    cout << "[&j] =  " << &j << endl << endl;
    cout << "a. p == &i; = 0x61ff04 / b. *p - *q = -2 / c. **&p = 3 / d. 3* - *p/(*q)+7 = 0 " << endl << endl;
    cout << "Nice!" << endl;
    return 0;
}
