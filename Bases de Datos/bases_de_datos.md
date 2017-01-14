**Bases de Datos**
==============
----------


Asignatura de segundo curso en la que se estudian los conceptos básicos de bases de datos, modelo entidad relación modelo relacional, consultas en álgebla relacional y SQL, PL/SQL, Triggers, transacciones y bloqueos y dependencias funcionales y normalización.

Para el desarrollo de las prácticas usaremos:

 1. **MariaDB** como servicio que lanzará la bases de datos.
 2. **DBeaver** como cliente con el que nos conectaremos a la base de datos para desarrollar las prácticas.
 
 

MariaDB
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

Para lanzar la base de datos usa:

    sudo service mariadb start
Para detener la base de datos usa:

    sudo service mariadb stop
Para ver el estado de la base de datos usa:

    sudo service mariadb status

