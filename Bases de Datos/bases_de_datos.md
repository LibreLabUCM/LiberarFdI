**Bases de Datos**
==============
----------


Asignatura de segundo curso en la que se estudian los conceptos básicos de bases de datos, modelo entidad relación modelo relacional, consultas en álgebla relacional y SQL, PL/SQL, Triggers, transacciones y bloqueos y dependencias funcionales y normalización.

Para el desarrollo de las prácticas usaremos:

 1. **[MariaDB](https://mariadb.org/)** como servicio que lanzará la bases de datos.
 2. **[DBeaver](http://dbeaver.jkiss.org/)** como cliente con el que nos conectaremos a la base de datos para desarrollar las prácticas.
 
 

**MariaDB**
=======

----------

1. Descripción del programa
---------------------------
Es el servicio de bases de datos **open source** más popular. Hecho por los desarrolladores originales de MySQL.

Instalaremos este **servicio** en nuestra máquina y lanzaremos la base de datos en local (en el propio ordenador) para conectarnos a éste mismo.

2. Requisitos de hardware
-------------------------
No exige requisitos mínimos.

3. Guía de instalación
----------------------
Siguiendo los pasos de la [guía oficial](https://downloads.mariadb.org/mariadb/repositories) de instalación de MariaDB. *Elige la guía que necesites según tu distribución.*

Estos son los comandos que debes ejecutar para instalar MariaDB en tu Ubuntu (16.04):

    sudo apt-get install software-properties-common

    sudo apt-key adv --recv-keys --keyserver hkp://keyserver.ubuntu.com:80 0xF1656F24C74CD1D8

    sudo add-apt-repository 'deb [arch=amd64,i386,ppc64el] http://tedeco.fi.upm.es/mirror/mariadb/repo/10.1/ubuntu xenial main'

Una vez hayas importado la clave y añadido el repositorio, puedes instalar MariaDB con:

    sudo apt-get update

    sudo apt install mariadb-server

4. Manual de usuario
--------------------

Para **lanzar** la base de datos usa:

    sudo service mariadb start
Para **detener** la base de datos usa:

    sudo service mariadb stop
Para ver el **estado** de la base de datos usa:

    sudo service mariadb status

**DBeaver**
=======
----------

1. Descripción del programa
---------------------------

DBeaver será el IDE que usaremos para conectarnos a la base de datos y poder interactuar con ella.

 2. Requisitos hardware
----------------------
Tener 512MB de RAM libres.

 3. Gía de instalación
---------------------

 - Descarga el archivo de instalación que necesites para tu OS desde la [página oficial](http://dbeaver.jkiss.org/download/).
 - Instalación:

**Windows** 	

    Ejecuta el intalador.

 
**Debian**  

    sudo dpkg -i dbeaver-<version>.deb

 
 **RPM**
 

     sudo rpm -ivh dbeaver-<version>.rpm

> **Nota:**
> Requiere Java 1.7 o superior instalado
> Existe versión para windows con JRE incluido
> Si estás en Ubuntu prueba *sudo apt-get install default-jdk*

4. Estructura del programa
--------------------------
Capturas

**Manual de usuario**
=================
Capturas

**Anexos**
======

 - [Guía de instalación](https://downloads.mariadb.org/mariadb/repositories) oficial de MariaDB.
 - Consejos de instalación de la [página de descargas](http://dbeaver.jkiss.org/download/) oficial de DBeaver.