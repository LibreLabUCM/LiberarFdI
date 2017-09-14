<!--Creado y editado por Roberto Barrasus -->
<!--
Esta obra está bajo una licencia Licencia Creative Commons Atribución 4.0 Internacional. 
Licencia: http://creativecommons.org/licenses/by/4.0/
-->

# **Fundamentos de la Programación**

Asignatura de primero de carrera con la que se inicia al estudiante en los conocimientos de la programación utilizando el lenguaje de programación C++. En ella se aprenden las construcciones básicas de la programación estructurada.
Necesitamos un entorno de desarrollo (IDE) compatible con C++. Eclipse cumple nuestros requisitos, desarrollado por Eclipse Foundation y de código abierto.
Todo esto lo realizaremos sobre un sistema Debian 7.

## **Eclipse**
### **1. Descripción del programa**

Eclipse es un entorno de desarrollo de software en multilenguaje que incluye un entorno de desarrollo integrado (IDE) y un sistema extensible de plugins que puede ser instalado en el IDE, para proveer nuevas características y funcionalidades. Está escrito principalmente en Java y se puede utilizar para desarrollar aplicaciones en Java, C, C++, COBOL, Python, Perl, PHP, Scala y Ruby (incluyendo Ruby on Rails). 

Distribuido bajo los términos de la Licencia Pública de Eclipse, Eclipse es libre y software de código abierto.


### **2. Requisitos hardware**
- 1 GB de RAM
- Procesador de al menos 1,6 GHz
- 500 MB de espacio en disco


### **3. Guía de instalación**
Para la instalación necesitamos abrir una terminal y tener acceso al usuario administrador para poder ejecutar el siguiente comando:
	
	sudo apt-get install eclipse-cdt
Una vez finalizado el proceso de instalación ya podemos ejecutar eclipse.


### **4. Estructura del programa**
Eclipse cuenta con varias perspectivas, entre ellas una para programar en C++ (desarrollo) y otra para depurar (debug).

![Vista de desarrollo](https://github.com/LibreLabUCM/LiberarFdI/blob/master/Fundamentos%20de%20la%20Programacion/images/01.png?raw=true)
Vista de desarrollo

![Vista de depuración](https://github.com/LibreLabUCM/LiberarFdI/blob/master/Fundamentos%20de%20la%20Programacion/images/02.png?raw=true)
Vista de depuración


### **5. Manual de usuario**
#### **Crear nuevo proyecto**
Para crear un nuevo proyecto tenemos que ir a
 
		File -> New -> C++ Proyect
![Nuevo proyecto](https://github.com/LibreLabUCM/LiberarFdI/blob/master/Fundamentos%20de%20la%20Programacion/images/03.png?raw=true)

Nos aparecerá una nueva ventana en la que tenemos que detallar el nombre del proyecto, su ubicación y el compilador que queremos utilizar.
Entonces pulsamos en Siguiente.

![Nombre proyecto](https://github.com/LibreLabUCM/LiberarFdI/blob/master/Fundamentos%20de%20la%20Programacion/images/04.png?raw=true)


En la siguiente ventana, dejamos la configuración por defecto y pulsamos Siguiente

![Configuración proyecto](https://github.com/LibreLabUCM/LiberarFdI/blob/master/Fundamentos%20de%20la%20Programacion/images/05.png?raw=true)

Después pulsamos en Finish y ya tendremos nuestro proyecto creado.

![Finalizar opciones proyecto](https://github.com/LibreLabUCM/LiberarFdI/blob/master/Fundamentos%20de%20la%20Programacion/images/06.png?raw=true)

Ahora para crear un nuevo archivo fuente:

	Botón derecho en el proyecto -> New -> Source file

![Nuevo archivo fuente](https://github.com/LibreLabUCM/LiberarFdI/blob/master/Fundamentos%20de%20la%20Programacion/images/07.png?raw=true)

Entonces introducimos el directorio en el que estará ubicado y el nombre del fichero fuente con su correspondiente extensión .cpp (en el caso de C++)

![Detalles fichero](https://github.com/LibreLabUCM/LiberarFdI/blob/master/Fundamentos%20de%20la%20Programacion/images/08.png?raw=true)

Y pulsamos en Finish para terminar.


#### **Exportar proyecto**

Para exportar un proyecto:
	
	File -> Export

![Exportar proyecto](https://github.com/LibreLabUCM/LiberarFdI/blob/master/Fundamentos%20de%20la%20Programacion/images/09.png?raw=true)

Entonces seleccionamos el formato de exportación.

![Formato exportación](https://github.com/LibreLabUCM/LiberarFdI/blob/master/Fundamentos%20de%20la%20Programacion/images/10.png?raw=true)

Y finalmente seleccionamos el proyecto de nuestro workspace que queremos exportar, los ficheros de configuración y el nombre y formato de archivo de salida.

![Finalizarexportación](https://github.com/LibreLabUCM/LiberarFdI/blob/master/Fundamentos%20de%20la%20Programacion/images/11.png?raw=true)

Para terminar pulsamos Finish.


#### **Importar proyecto**

Para importar un proyecto:
	
	File -> Import

Entonces seleccionamos qué tipo de proyecto queremos importar

![Importar proyecto](https://github.com/LibreLabUCM/LiberarFdI/blob/master/Fundamentos%20de%20la%20Programacion/images/12.png?raw=true)

En nuestro caso, si seleccionamos Existing Projects into Workspace en la siguiente ventana podremos examinar el directorio concreto del proyecto, o el fichero en el caso que queramos importar desde 'Archive File'.

![Importar proyecto](https://github.com/LibreLabUCM/LiberarFdI/blob/master/Fundamentos%20de%20la%20Programacion/images/13.png?raw=true)

Para terminar, en la última ventana tenemos también opciones para copiar el proyecto al workspace etc. Pulsamos Finish y ya tendríamos el proyecto importado.

![Importar proyecto](https://github.com/LibreLabUCM/LiberarFdI/blob/master/Fundamentos%20de%20la%20Programacion/images/14.png?raw=true)

###**6. Anexos:**
- [Ficha docente de la asignatura Fundamentos de la Programación del curso 2016/2017](http://www.fdi.ucm.es/Pub/ImpresoFichaDocente.aspx?Id=913)
- [Eclipse](https://eclipse.org/)
 - [Eclipse C/C++](http://www.eclipse.org/downloads/packages/eclipse-ide-cc-developers/neon2)
 
 
 ## Atom Editor 
### 1. Descripción del programa

Atom es un editor de texto de código abierto desarrollado por Github usando Electron, que permite crear aplicaciones multiplataforma usando tecnologías web basadas en Node.js
### 2. Requisitos hardware
Cualquier versión reciente de GNU/Linux, MacOs o Windows
### 3. Guía de instalación
#### Debian y derivadas
Para la instalación necesitamos descargar el .deb de [aquí](https://atom.io) y posteriormente abrir una terminal teniendo acceso al usuario administrador para poder ejecutar el siguiente comando:

	sudo dpkg -i atom-amd64.deb
	
#### Arch linux y derivadas
Para la instalación necesitamos abrir una terminal teniendo acceso al usuario administrador para poder ejecutar el siguiente comando:

	sudo pacman -S atom
	
### 4. Estructura del programa
Atom cuenta con varias perspectivas, entre ellas una para editar texto y otra para trabajar con git.


![Edición de texto](/Fundamentos%20de%20la%20Programacion/images/15.png?raw=true)
Edición de texto

![Herramienta de Git](/Fundamentos%20de%20la%20Programacion/images/16.png?raw=true)
Herramienta de Git

### 5. Manual de usuario
#### **Crear nuevo proyecto**
Para crear un nuevo proyecto tenemos que crear una nueva carpeta en tu ordenador y después ir a:
 
		File -> Add Project Folder
y ya te aparecerá en la vista de árbol, pulsando CONTROL+N puedes abrir nuevas pestañas que podrás guardar en la capeta pulsando CONTROL+S y seleccionando su ruta.






 [Volver al repositorio principal.](https://github.com/LibreLabUCM/LiberarFdI/)
 
 [![Licencia Creative Commons](https://i.creativecommons.org/l/by/4.0/88x31.png)](http://creativecommons.org/licenses/by/4.0/)
 Esta obra está bajo una  [Licencia Creative Commons Atribución 4.0 Internacional](http://creativecommons.org/licenses/by/4.0/) 
