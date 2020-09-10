#include <iostream>

using namespace std;

int multiplicacion(int, int);

int main(){
    int a = 0, b = 0;
    cout<<"ingrese el primer dato: ";
    cin>>a;
    cout<<"Ingrese el segundo dato: ";
    cin>>b;

    cout<<"La multiplicacion del primer por el segundo dato, es: "<<multiplicacion(a,b);
    return 0;
}

int multiplicacion(int a, int b){
    if(b == 1){
        return a;
    }
    else if (b > 1){
         return a + multiplicacion(a,b-1);
    }
}