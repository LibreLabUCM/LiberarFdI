/**
 * Un ejemplo de uso de colores.h multiplataforma:
 * deberia funcionar igual en linux y en windows.
 *
 * Usa setColor en lugar de SetConsoleTextAttribute ó escapes llamados directamente
 * Usa getch implementado vía getchar-en-consola-en-modo-raw para capturar teclas
 */

#include <iostream>
#include "colores.h"

using namespace std;

int main() {
        
    cout << "yo estoy en color normal\n";
    setColor(Rojo);
    cout << "yo aparezco en color rojo\n";
    setColor(Azul);
    cout << "yo voy de azul\n";
    setColor(15);
    cout << "yo voy de intenso\n";
    setColor(Gris);
    cout << "yo estoy en color normal\n";
    
    cout << "pulsa una tecla ... ";
    cout << "has pulsado '" << (char)getch() << "' !\n";
    
    return 0;    
}