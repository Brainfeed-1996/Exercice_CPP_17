/*
Écrire un programme qui calcule les racines carrées de nombres fournis en
donnée. Il s’arrêtera lorsqu’on lui fournira la valeur 0. Il refusera les valeurs
négatives. Son exécution se présentera ainsi :
donnez un nombre positif : 2
sa racine carrée est : 1.414214e+00
donnez un nombre positif : -1
svp positif
donnez un nombre positif : 5
sa racine carrée est : 2.236068e+00
donnez un nombre positif : 0
*/

#include <iostream>
#include <cmath>
using namespace std ;
int main(){
    double (nombre);
    while(true) {
        cout << "Donnez un nombre positif : ";
        cin >> nombre;
        
        if (nombre < 0){
            cout << "svp positif" << endl;
        }
        else if (nombre==0) {
            cout << "Fin du programme";
            return 0;
        }
        else {
            cout << "Sa racine carrée est : " << scientific << sqrt(nombre) << endl;
        }
    }
}

/* Résultats
Donnez un nombre positif : -5
svp positif
Donnez un nombre positif : 81
Sa racine carrée est : 9.000000e+00
Donnez un nombre positif : 100
Sa racine carrée est : 1.000000e+01
Donnez un nombre positif : 2
Sa racine carrée est : 1.414214e+00
Donnez un nombre positif : 0
Fin du programme
*/

/*====================================================
    Autre version de mon programme (au second essai) :
======================================================*/

/*

#include <iostream>
#include <cmath>
using namespace std ;
int main(){
    double nombre;
    do {
        cout << "Donnez un nombre positif";
        cin >> nombre;
        if (nombre<0){ cout << "svp positif \n";
            continue;
        }
        if (nombre > 0) cout << "Sa racine carrée est : " << sqrt(nombre) << "\n";
        if (nombre==0) break;
    } while(nombre != 0);
    return 0;
}

*/
