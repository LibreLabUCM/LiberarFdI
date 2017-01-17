#**Tecnología y Organización de Computadores**

Asignatura de segundo de carrera en la que se amplían los conocimientos de la asignatura de primero de Fundamentos de Computadores, más enfocado en el primer cuatrimestre. Se programa en VHDL..

##**GHDL y GTKWave**
###**1. Descripción del programa**
**[GHDL](http://ghdl.free.fr/ )** es un compilador de código abierto para el lenguaje VHDL. Permite la compilación y ejecución de código VHDL en el ordenador. Combinado con un analizador de ondas gráfico **[GTKWave](http://gtkwave.sourceforge.net/)** y un editor de texto (Geany, Notepad++, Sublime Text)
###**2. Requisitos hardware**
Se puede usar sin problemas en cualquier ordenador.
###**3. Guía de instalación**
- **Linux**

Para poder instalar GHDL, en Debian 7, hay que descargarse la distribución en el siguiente [enlace](https://sourceforge.net/projects/ghdl-updates/files/Builds/ghdl-0.31/Debian/ghdl_0.31-2wheezy1_amd64.deb/download).

Para Debian 8 el siguiente [enlace](https://sourceforge.net/projects/ghdl-updates/files/Builds/ghdl-0.33/debian/ghdl_0.33-1jessie1_amd64.deb/download).

 

Cuando se ha descargado es posible que tengamos que instalar varios paquetes para poder instalar la distribución. La primera línea instala esos paquetes, la segunda la distribución (en este caso la de Debian 7):

	$ sudo apt-get -f install gnat-4.6-base libgnat-4.6
	
	$ sudo dpkg --install ghdl_0.31-2wheezy1_amd64.deb 

Ahora instalamos GTKWave:
	
	$ sudo apt-get install gtkwave


----------

 - **Windows**

Instalamos GHDL a través de este [enlace](http://ghdl.free.fr/ghdl-installer-0.29.1.exe) y ejecutamos el instalador.

Instalamos GTKWave a través de este [enlace](https://sourceforge.net/projects/gtkwave/files/latest/download?source=typ_redirect) y ejecutamos el instalador.

----------

 - **MacOS**

Instalamos GHDL a través de este [enlace](https://github.com/tgingold/ghdl/releases/download/v0.33/ghdl-0.33-llvm-darwin13.pkg).

>Es posible que no deje ejecutar la instalación, si es así, entonces vamos a “Preferencias del Sistema” → Seguridad y privacidad y abajo nos saldrá un mensaje para autorizar ese paquete y lo instalamos.

Después instalamos GTKWave desde este [enlace](http://gtkwave.sourceforge.net/gtkwave.zip).


###**4. Estructura del programa**

 **1. Terminal**
 
 ![Terminal](https://github.com/LibreLabUCM/LiberarFdI/blob/master/Tecnologia%20y%20Organizacion%20de%20Computadores/images/Terminal.png?raw=true)
 
 **2. GTKWave**
 
![GTKWave](https://github.com/LibreLabUCM/LiberarFdI/blob/master/Tecnologia%20y%20Organizacion%20de%20Computadores/images/GTKWave.png?raw=true)
###**5. Manual de usuario**

 - Creamos los archivos VHDL tanto el código como el testbench con Geany o cualquier editor de texto:
    
![GTKWave](https://github.com/LibreLabUCM/LiberarFdI/blob/master/Tecnologia%20y%20Organizacion%20de%20Computadores/images/Codigo.png?raw=true)

 - Se analizan los archivos creados con -a:

		$ sudo ghdl -a -Wa,--32 --ieee=synopsys prueba.vhdl
	
	>-Wa,--32 → hace que funcione ghdl para 32 bits, si no es posible que se produzca un error.
	
	>--ieee=synopsys → acepta las librerías std_logic_arith y unsigned.
	
	Después de este comando aparecerá otro archivo .o de cada uno.

 - Generamos el ejecutable del archivo testbench:

		$ sudo ghdl -e -Wa,--32 --ieee=synopsys -Wl,-m32 tb_prueba

 - Se ejecuta el archivo pasando como parámetros el tiempo máximo de simulación (por ejemplo, 150 nano segundos) y el archivo en donde se guardarán los resultados (tb_prueba.vcd):
	
		$ ./tb_prueba --stop-time=150ns --vcd=tb_prueba.vcd

 - Finalmente visualizamos los resultados en GTKWave (también se puede abrir haciendo doble click al archivo .vcd que se encuentra en la carpeta):

		$ gtkwave tb_prueba.vcd

 - Arrastramos los registros a Signals para ver como evolucionan los
   registros.
   
![Simulacion](https://github.com/LibreLabUCM/LiberarFdI/blob/master/Tecnologia%20y%20Organizacion%20de%20Computadores/images/Simulacion.png?raw=true)

###**6. Anexos:**

 - [Manual de instalación](https://sourceforge.net/projects/umhdl/files/umhdl-install-es.pdf/download) de UMHDL, GHDL.


 - [Ficha docente](http://www.fdi.ucm.es/Pub/ImpresoFichaDocente.aspx?Id=905) de la asignatura.
