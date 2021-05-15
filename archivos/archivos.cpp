
#include <iostream>
#include <fstream>
#include <string>
#include <sstream>

using namespace std;

int main()
{
    cout << "Hello World!\n";
    ifstream fileListado;
    fileListado.open("listado.txt");
    if (fileListado.fail())
    {
        cerr << "Error con la lectura" << endl;
        exit(1);
    }
    string linea;
    
    while (getline(fileListado, linea))
    {
        istringstream iss(linea);        
        cout << "Elemento: " << linea << endl;
        
    }
    fileListado.close();
}
