#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(){

    int n, num, cont;
    
    // Inicializa la semilla del generador de números aleatorios
    srand(time(NULL));
    n = 1 + rand() % 6;  // n es un valor aleatorio entero entre 1 y 6
    cont = 0;
    
    do {
        cout << "ingrese numero entre 1 y 6: " << endl;
        
        /* La expresión dentro del if se lee asi: pide entrada al usuario
           la cual se guarda en la variable num, luego se evalúa el objeto cin,
           y según su condición se ejecutará si solo lo que está dentro del
           if es falso osea num no es un número entero ya que !(false) es true */
        if(!(cin >> num)){
            cin.clear();  // limpia el error
            cin.ignore(1000, '\n'); //descarta entrada invalida 
            cout << "entrada invalida, intente de nuevo.\n";
            continue;
        }
        
        cont += 1;

    }

    while(n != num);
        
    cout << "lo adivinaste en " << cont << " veces" << endl;
    return 0;

}

/* salida:
    ingrese numero entre 1 y 6: 4
    ingrese numero entre 1 y 6: 3
    ingrese numero entre 1 y 6: 1
    lo adivinaste en 3 veces */