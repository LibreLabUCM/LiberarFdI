
**Probabilidad y estadística**
==========================
----------


Asignatura obligatoria de segundo de carrera, que está presente en todos los grados de la facultad de informática. En la que se estudia la estadística descriptiva entre una o dos variables, la regresión y correlación, la probabilidad (definición de sucesos y operaciones de sucesos) y sus teoremas y la inferencia estadística. 

Para las prácticas de esta asignatura se utiliza un programa estadístico informático, que es [PSPP](https://www.gnu.org/software/pspp/).

**PSPP**
--------
----------

**1. Descripción del programa**
---------------------------
----------

PSPP es una aplicación de software libre que se utiliza para el análisis de distintos tipos de datos y la estadística descriptiva. Además proporciona las funciones de frecuencia, tablas cruzadas, comparación de media, regresión lineal, entre otros. Usa la biblioteca científica GNU para las rutinas matemáticas y plotutils para la generación de gráficos. 

Los formatos de salida de este programa puede ser en PDF, HTML, ASCII o PostScript. 

**2. Requisitos hardware**
----------------------


----------
Se puede utilizar en cualquier ordenador y tanto en Linux, como Windows y MacOs.

**3. Guía de instalación**
----------------------


----------

En este [enlace](http://www.gnu.org/software/pspp/get.html) se podrán ver los paquetes para las diferentes distribuciones de linux y sistemas operativos.

 - **Linux**

Descargarse el paquete para Debian en el siguiente [enlace](http://ftp.de.debian.org/debian/pool/main/p/pspp/pspp_0.7.9+git20120620-1.1_amd64.deb).

Antes de instalar el paquete descargado, hay que instalar el ***paquete libpq5*** con este comando:

    $ sudo apt-get install libpq5

Cuando se instale, hay que ir a la carpeta en la que se ha descargado el paquete PSPP, y se instala de la siguiente forma desde la terminal:

	$ sudo dpkg -i pspp_0.7.9+git20120620-1.1_amd64.deb


 - **Windows**

Se intalará PSPP a través de este [enlace](https://sourceforge.net/projects/pspp4windows/files/2016-09-27/pspp-20160927-daily-64bits-setup.exe/download) y se ejecutará el instalador. 
	

**4.Estructura del programa**
-----------------------------


----------

 - **Vista de variables**
 
![Vista de variables de PSPP](https://github.com/LibreLabUCM/LiberarFdI/blob/master/Probabilidad%20y%20Estad%C3%ADstica/images/vista%20de%20variables.PNG?raw=TRUE)


 - **Vista de datos**

![Vista de datos de PSPP](https://github.com/LibreLabUCM/LiberarFdI/blob/master/Probabilidad%20y%20Estad%C3%ADstica/images/Vista%20de%20datos.PNG?raw=TRUE)

**5.Manual de usuario**
-------------------
----------

 - **Analizar datos de una misma variable**

Para analizar datos de la misma variable, primero habrá que definir la variable en la vista de variables, introduciendo el nombre y sus características.

![Creación de una variable](https://github.com/LibreLabUCM/LiberarFdI/blob/master/Probabilidad%20y%20Estad%C3%ADstica/images/Creacci%C3%B3n%20de%20una%20variable.PNG?raw=TRUW)

A continuación, habrá que ir a la vista de datos e ir introduciendo linea por linea los datos que tenemos respecto a esa variable. En algunos ordenadores cuando se llena la pantalla para seguir insertando casos habrá que darle a la opción “insertar casos” que está redondeada.

![enter image description here](https://github.com/LibreLabUCM/LiberarFdI/blob/master/Probabilidad%20y%20Estad%C3%ADstica/images/vista%20insertar%20datos.PNG?raw=TRUE)



Para analizar las frecuencias de una variable hay que darle a la opción:

    “Analizar” -> “Estadística descriptiva” -> Frecuencias


Una vez en **Frecuencias** se selecciona la variable a seleccionar de la caja de la izquierda y se envía a la caja de la derecha. En el apartado **estadísticos** se marcan los apartados que se desean calcular y se le dará a aceptar.

![Selección de estadísticos de una variable](https://github.com/LibreLabUCM/LiberarFdI/blob/master/Probabilidad%20y%20Estad%C3%ADstica/images/Selecci%C3%B3n%20de%20estadisticos%20de%20una%20variable.PNG?raw=true)

Después saldrá una ventana con los resultados obtenidos 

![Resultados obtenidos](https://github.com/LibreLabUCM/LiberarFdI/blob/master/Probabilidad%20y%20Estad%C3%ADstica/images/Resultados%20obtenidos.PNG?raw=true)


 - **Importar datos de LibreOffice Calc**

En primer lugar el archivo de LibreOffice Calc tiene que tener extensión ***“.csv”***. Para importar un archivo de datos y trabajar con él en PSPP habrá que seleccionar la siguiente opción:


	Archivo -> Importar datos de texto delimitados 


Se elige el archivo que contiene los datos con los que se quiere trabajar y se escoge la opción de importar todos los casos.

Para que el PSPP coja el nombre de las variables, se selecciona la línea donde empiezan los datos y se marca la casilla inferior.

![enter image description here](https://github.com/LibreLabUCM/LiberarFdI/blob/master/Probabilidad%20y%20Estad%C3%ADstica/images/Selecci%C3%B3n%20de%20datos%20para%20importar.PNG?raw=true)


A continuación se escogen los separadores de los datos importados, normalmente están separados por comas. Habrá que darle a adelante hasta llegar al apartado ***“Ajustar formato de variables”***, donde se revisará el formato de estas y el nombre asignado a cada una, con la posibilidad de modificarlo.

![Ajuste de formato de variables](https://github.com/LibreLabUCM/LiberarFdI/blob/master/Probabilidad%20y%20Estad%C3%ADstica/images/vista%20de%20ajustar%20formato%20de%20variables.PNG?raw=true)


Al darle aplicar aparecerán los datos importados en el PSPP y ya se podrá trabajar con ellos.

![Datos importador](https://github.com/LibreLabUCM/LiberarFdI/blob/master/Probabilidad%20y%20Estad%C3%ADstica/images/datos%20importados.PNG?raw=true)



**Anexos**
------
----------

 - Ficha docente de [probabilidad y estadística](http://www.fdi.ucm.es/Pub/ImpresoFichaDocente.aspx?Id=907) 
 - [Manual introductorio](http://www.index-f.com/lascasas/documentos/lc0773.pdf) al uso del programa para el análisis de datos

[Volver al repositorio inicial](https://github.com/LibreLabUCM/LiberarFdI/)
