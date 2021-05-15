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
    cout << "Iniciando lectura de archivo..." << endl;
    if (fileListado.fail())
    {
        cerr << "Error con la lectura" << endl;
        exit(1);
    }
    string linea = "";
    
    while (getline(fileListado, linea))
    {
        istringstream iss(linea);     
        for (int i = 0; i < linea.length(); i++)
        {
            if (linea.substr(i, 1)._Equal("e"))
            {
                linea = linea.replace(i, 1, "a");
            }
        }
        cout << "Elemento: " << linea << endl;
        cout << "--------------------" << endl;
        for (int i = 0; i < linea.length(); i++)
        {
            cout << linea[i] << " - " << linea[linea.length()-1-i] << endl;
        }
        cout << "--------------------" << endl;

        cout << "--------------------" << endl;
        for (int i = linea.length() - 1; i > -1; i--)
        {
            cout << linea[linea.length() - 1 - i] << " - " << linea[i] << endl;
        }
        cout << "--------------------" << endl;
    }
    fileListado.close();
}
