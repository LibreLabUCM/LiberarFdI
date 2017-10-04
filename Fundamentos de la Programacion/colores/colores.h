/**
 * Esta libreria permite colorear la salida tanto bajo windows como bajo linux
 * 
 * Uso: 
 *   - debe estar incluida en el proyecto
 *   - debe haber un #include "colores.h" al comienzo del fichero
 *   - llama a setColor(color) para cambiar el color actual
 *      usa las constantes Gris, Rojo, Verde, Azul para simplificarte la vida!
 *   - llama a cout << algo para mostrar 'algo' en ese color
 * 
 * Autor: manuel.freire@fdi.ucm.es
 * Licencia: https://creativecommons.org/licenses/by-sa/3.0/
 */

#ifndef COLORES_H_
#define COLORES_H_

// Alias de colores validos; sientete libre de ampliar la lista. Para cada nuevo color,
//  - version windows, a colocar en el "switch" de la definicion de setColor para windows: 
//    https://docs.microsoft.com/en-us/windows/console/console-screen-buffers#_win32_character_attributes
//  - version linux, a colocar en el "switch" de setColor para linux:
//    http://bluesock.org/~willkg/dev/ansi.html (o equivalente) 
enum Color {
    Gris, 
    Rojo, 
    Verde, 
    Azul, 
    Blanco=15
};

#ifdef _WIN32_
// este codigo solo se ejecuta bajo Windows -->

    #include <windows.h>
    #include <conio.h>

	// implementacion de setColor bajo Windows, con SetConsoleTextAttribute
    void setColor(int color) {
        WORD a = 0;
        switch (color) {
            case Gris: a = FOREGROUND_RED|FOREGROUND_BLUE|FOREGROUND_GREEN; break;
            case Rojo: a = FOREGROUND_RED|FOREGROUND_INTENSITY; break;
            case Verde: a = FOREGROUND_GREEN|FOREGROUND_INTENSITY; break;
            case Azul: a = FOREGROUND_BLUE|FOREGROUND_INTENSITY; break;
            default: a = color;
        }
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), a);
    }

// <-- fin de codigo windows-exclusivo
#elif __linux__ 
// este codigo solo se ejecuta bajo linux -->

    #include <iostream>
    #include <sstream>
    #include <cstdio>
    #include <termios.h>
    #include <unistd.h>
    
    namespace Colores {
        
        // constantes globales para colores; sientete libre de ampliarlas
        // ver http://bluesock.org/~willkg/dev/ansi.html o cualquier referencia ANSI
        const char *ANSI_COLOR_RED   =  "\x1b[31;1m";
        const char *ANSI_COLOR_GREEN =  "\x1b[32;1m";
        const char *ANSI_COLOR_YELLOW = "\x1b[33;1m";
        const char *ANSI_COLOR_BLUE =   "\x1b[34;1m";
        const char *ANSI_COLOR_MAGENTA ="\x1b[35;1m";
        const char *ANSI_COLOR_CYAN  =  "\x1b[36;1m";
        const char *ANSI_COLOR_WHITE  = "\x1b[37;1m";
        const char *ANSI_COLOR_RESET  = "\x1b[0m";
        const char *ANSI_COLOR_BLUE_BG = "\x1b[44m";
        const char *ANSI_COLOR_GREEN_BG = "\x1b[42m";
        const char *ANSI_WHITE_ON_REDG = "\x1b[37;41m";
        const char *ANSI_WHITE_ON_YELLOW = "\x1b[37;43m";
        const char *ANSI_WHITE_ON_BLACK = "\x1b[37;40m";
        const char *ANSI_CLS = "\x1b[2J";          
    }
    
    // cambio de color bajo linux
    void setColor(int color) {
        const char *a = Colores::ANSI_COLOR_RESET;
        switch (color) {
            case Gris: a = Colores::ANSI_COLOR_RESET; break;
            case Rojo: a = Colores::ANSI_COLOR_RED; break;
            case Verde: a = Colores::ANSI_COLOR_GREEN; break;
            case Azul: a = Colores::ANSI_COLOR_BLUE; break;
            case 15: a = Colores::ANSI_COLOR_WHITE; break;
            default: a = Colores::ANSI_COLOR_RESET;
        }
        std::cout << a;
    }    
    
    // emula getch() de conio.h
    int getch() {
        // from http://stackoverflow.com/a/23035044/15472
        struct termios oldattr, newattr;
        int ch;
        tcgetattr( STDIN_FILENO, &oldattr );
        newattr = oldattr;
        newattr.c_lflag &= ~( ICANON | ECHO );
        tcsetattr( STDIN_FILENO, TCSANOW, &newattr );
        ch = getchar();
        tcsetattr( STDIN_FILENO, TCSANOW, &oldattr );
        return ch;
    }
        
// <-- fin de codigo linux-exclusivo
#else         
    #error Platform not supported
#endif

// <-- fin de ifndef COLORES_H_ inicial
#endif 