#include <iostream>
#include <fstream>
#define lenght 5


using namespace std;

int main()
{
    cout << "Scrive 5 numeri, salva in un array e metti nel file" << endl;
    ofstream filino ;
    filino.open("file.txt") ;
    if (!filino)
    {
        cout << "Errore nell'apertura file" ;
    }
    int array[lenght];
    for (int i = 0 ; i < lenght ; i ++ )
    {
        cout << "Inserisci il " << i + 1 << "* elemnento dell'array: " ;
        cin >> array[i] ;
        filino << array[i] ;
    }
    filino.close();
    return 0;
}
