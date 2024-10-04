#include <iostream>
#include<limits>
#include<iomanip>
#include<locale>
#include <string>
using namespace std;
int main()
{
    locale loc("");
        cout.imbue(loc);
        string texto0 = "hola mundo";
        cout << texto0 << endl;
        string tipoa = "Hello";
        string tipob = "world";
        string saludo = tipoa + tipob;
        cout << saludo << endl;
        string Nombre;
        cout << "Dame tu nombre : ";
        cin >> Nombre;
        cout << "Hola " << Nombre << endl;
        cin.ignore();
        string NombreCompleto;
        cout << "Dame tu nombre completo : ";
        getline(cin, NombreCompleto);
        cout << " Tu nombre completo " << NombreCompleto << endl;
        cout << Nombre[2] << endl;
}

