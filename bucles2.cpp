#include <iostream>

using namespace std;

int main(){

    int contador = 10;

    // uso de bucle while
    while(contador >= 0){

        cout << "el contador marca: " << contador << endl;
        contador -= 1;
    }

    cout << "despegando!" << endl;

    return 0;
}

/* salida:
el contador marca: 10
el contador marca: 9
el contador marca: 8
el contador marca: 7
el contador marca: 6
el contador marca: 5
el contador marca: 4
el contador marca: 3
el contador marca: 2
el contador marca: 1
el contador marca: 0
despegando!
*/