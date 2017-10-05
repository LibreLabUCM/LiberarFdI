<!--
Esta obra está bajo una licencia Licencia Creative Commons Atribución 4.0 Internacional.
Licencia: http://creativecommons.org/licenses/by/4.0/
-->

# Manejo de terminal avanzado bajo linux en prácticas de FP

Esta carpeta contiene código para ayudarte a escribir prácticas de FP bajo linux que usan:

* Colores en la terminal. Bajo Windows, esta funcionalidad se consigue mediante llamadas a `windows.h`, pero esta cabecera no está disponible, por motivos obvios, bajo Linux.

* Lectura de teclas (sin necesidad de pulsar enter) desde la terminal. Bajo windows, conio.h soporta un `getch()` que sí permite esta funcionalidad. Bajo linux, la terminal está configurada para no enviar eventos a los programas hasta que se pulsa "enter"; así que hay que redefinir `getch()` para evitar este efecto.

# Uso

Incluye `colores.h` en tu proyecto, y *no* incluyas `windows.h` (que no compilaría bajo linux) ni `conio.h` (ya que daría conflicto bajo linux con la versión incluida en `colores.h`).

Usa `setColor()` en lugar de `SetConsoleTextAttribute()` para modificar el color, limpiar la pantalla, y en general modificar la consola.

Usa `getch()`, tanto en linux como en windows, para capturar tecla a tecla.

Juega con los ejemplos de test.cpp y test2.cpp para ver más detalles de uso.

# Uso en prácticas

Habla con tu profesor para saber si está dispuesto a corregir tus prácticas bajo linux. Si las va a corregir bajo windows, asegúrate de que el comportamiento es idéntico en ambas plataformas (es decir, pruébala bajo windows) antes de entregarla: el autor de este código no se responsabiliza de cualquier problema de compatibilidad.

# Otras recomendaciones

Nunca uses `system("pause");` en tu código. El uso de `system()` hace que tu código deje inmediatamente de ser multiplataforma.

Una posible alternativa es que uses la función `getchar()` de la librería estándar de Entrada/Salida `<iostream>`; no obstante, ésta no muestra el mensaje "Presiona una tecla para continuar" y únicamente cerrará el programa presionando la tecla <kbd>Enter</kbd>.

Mira [esta](https://stackoverflow.com/questions/1449324/how-to-simulate-press-any-key-to-continue) o [esta](https://stackoverflow.com/questions/21257544/c-wait-for-user-input) pregunta en stackoverflow para más información.
