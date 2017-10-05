/**
 * Un ejemplo de uso de colores.h que solamente funciona en consolas ANSI
 * (como la de linux). En este caso, no se usan llamadas a setColor.
 */

#include <iostream>
#include "colores.h"

using namespace std;

int main() {

    // limpio pantalla
    cout << Colores::ANSI_CLS;
    cout << "yo estoy en color normal\n";
    cout << Colores::ANSI_COLOR_BLUE_BG;
    cout << "fondo azul ahora\n";
    cout << "y hasta que lo cambie\n";
    cout << Colores::ANSI_COLOR_GREEN_BG;
    cout << "esto\n";
    cout << Colores::ANSI_WHITE_ON_YELLOW;
    cout << "es\n";
    cout << Colores::ANSI_WHITE_ON_REDG;
    cout << "una\n";
    cout << Colores::ANSI_COLOR_RESET;
    cout << "prueba\n";

    return 0;
}
