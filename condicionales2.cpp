#include <iostream>

using namespace std;

int main(){

    int edad;
    cout << "ingrese edad" << endl;
    cin >> edad;

    // uso de if-else
    if (edad >= 18){
        cout << "Ud es mayor de edad" << endl;
    }

    else{
        cout << "Es demasiado joven para morir" << endl;
    }
    return 0;
}