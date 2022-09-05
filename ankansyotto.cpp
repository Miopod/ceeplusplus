#include <iostream>

using namespace std;

void pelinalku() {
    int leipapuu;
    cout << "Kävelet lammelle. Lammella on ankkoja." << endl;
    cout << "Edessäsi on kaksi esinettä. Leipä ja pala puuta." << endl;
    cout << "Kumman syötät ankoille? (Jos valitset leipä, paina numero yksi. Jos valitset puu, paina numero 2)" << endl;
    cin >> leipapuu;
    
    if (leipapuu == 1) {
        cout << "Syötit leivän. Ankat ovat iloisia :)";
    } else if (leipapuu == 2) {
        cout << "Syötit palan puuta. Ankat voivat pahoin. Olet hirviö! :(";
    } else {
        cout << "Ankat kärsivät. Anna heille ruokaa annetuista vaihtoehdoista!";
    }
}

void nomnom() {
    cout << "Sinä söit leivän, joka oli tarkoitettu ankoille!" << endl;
    cout << "Ankat nälkiintyvät ja kärsivät!" << endl;
    cout << "P.S. tämä oli ilmainen vihje.";
}

int main()
{
    int menumero;
    cout << "MENU" << endl;
    cout << "**" << endl;
    cout << "1. Aloita peli" << endl;
    cout << "2. Syö leipä" << endl;
    cout << "3. Lopeta peli" << endl;
    cout << "Syötä numero, joka vastaa haluamaasi vaihtoehtoa:" << endl;
    cin >> menumero;
    
    switch(menumero) {
        case 1:
        cout << "Peli alkoi." << endl;
        pelinalku();
        break;
        case 2:
        cout << "Söit leivän." << endl;
        nomnom();
        break;
        case 3:
        cout << "Peli päättyy.";
        return 0;
    }

    return 0;
}