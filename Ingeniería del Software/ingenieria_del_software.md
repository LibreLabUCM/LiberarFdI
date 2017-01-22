<!--Creado por Jonathan Carrero Aranda -->

**Ingeniería del Software**
==============
----------


Ingeniería de Software es una asignatura de segundo curso común a todos los grados de la Facultad de Informática. El temario que se trata en la asignatura aborda los modelos de proceso y sus métricas, plan de proyecto y toda la documentación que este conlleva, UML y el proceso unificado de desarrollo.

Durante la asignatura se requiere hacer un proyecto software mediante diagramas UML. Así pues, para el desarrollo del proyecto y más concretamente para realizar los diagramas UML, trabajaremos con la herramienta *Umbrello UML Modeller*, disponible en Linux, Windows, Mac OS X y bajo licencia GPL.

**[Umbrello](https://umbrello.kde.org/)** para la creación y edición de diagramas UML para llevar a cabo el desarrollo de software.

 

**Umbrello**
=======
----------


1. Descripción del programa
---------------------------
Fue desarrollada por Paul Hensgen, y está diseñado principalmente para KDE, aunque funciona en otros entornos de escritorio.

Umbrello maneja gran parte de los diagramas estándar UML pudiendo crearlos, además de manualmente, importándolos a partir de código en C++, Java, Python, IDL, Pascal/Delphi, Ada, o también Perl. Así mismo, permite crear un diagrama y generar el código automáticamente en los lenguajes antes citados, entre otros. El formato de fichero que utiliza está basado en XMI.


2. Requisitos de hardware
-------------------------
No exige requisitos mínimos.


3. Guía de instalación
----------------------

En primer lugar es conveniente actualizar. Para ello usamos el comando:

	sudo apt-get update

A continuación, instalamos *Umbrello* con el comando:

	sudo apt-get install umbrello

Por último, para lanzarlo, ejecutamos:

	sudo umbrello


**Manual de usuario**
=================

Este manual no pretende ser un manual en el que aprender los distintos elementos de UMLy la construcción de diagramas. Por esa razón, no se harán ejemplos de todos los diagramas utilizados en Ingeniería del Software. Además se da por hecho que, aunque sea de forma básica, se conocen los conceptos utilizados en la construcción de diagramas usando UML.

**1. Interfaz de usuario**
----------------------

La ventana principal de Umbrello UML Modeller está dividida en tres áreas que le permiten tener a la vista todo el sistema y acceder a los distintos diagramas de forma rápida mientras trabaja en un modelo. Estas áreas se denominan:

- Vista en árbol
- Área de trabajo
- Ventana de documentación e historial

	Imagen 1

**Vista en árbol**

La vista de árbol suele estar ubicada en el lado superior izquierdo de la ventana y muestra todos los diagramas, clases, actores y casos de uso que constituyen el modelo. Esta vista de árbol le permite disponer de un rápido resumen de todos los elementos del modelo. También le proporciona un modo rápido de cambiar entre distintos diagramas del modelo e insertar elementos del modelo en el diagrama actual.

Si está trabajando en un modelo que contiene más de unas pocas clases y diagramas, la vista de árbol le puede ayudar a organizar el modelo usando carpetas. Puede crear carpetas seleccionando la correspondiente opción en el menú de contexto (haga clic con el botón derecho en cualquiera de las carpetas de la vista de árbol). Puede organizar los elementos moviéndolos a la carpeta adecuada (arrastrando y soltando). 

**Ventana de documentación e historial**

La ventana de documentación e historial de órdenes está situada en la parte inferior izquierda de la ventana principal de Umbrello UML Modeller y le proporciona una rápida vista previa de la documentación sobre el elemento seleccionado y el historial de órdenes de la sesión de trabajo actual. La ventana de documentación es pequeña porque está pensada para permitirle seleccionar rápidamente la documentación del elemento y el historial de órdenes ocupando el mínimo espacio posible de la pantalla. Si necesita consultar la documentación con más detalle, puede abrir las propiedades del elemento.

**Área de trabajo**

El área de trabajo es la ventana principal de Umbrello UML Modeller y es donde tiene lugar la acción real. Se usa para ver y editar los diagramas del modelo. El área de trabajo muestra el diagrama activo. Solo se puede mostrar un único diagrama a la vez en el área de trabajo.

**2. Crear, cargar y guardar modelos**
----------------------

Lo primero que necesita para empezar a hacer algo útil en Umbrello UML Modeller es crear un modelo sobre el que trabajar. Tras iniciar Umbrello UML Modeller, siempre se carga el último modelo usado o se crea uno nuevo vacío (según las preferencias seleccionadas en el diálogo de configuración). Esto le permite comenzar a trabajar enseguida. 

**Nuevo modelo**

Cuando necesite crear un nuevo modelo, seleccione la entrada *Nuevo* en el menú *Archivo* o pulse el icono *Nuevo* que hay en la barra de herramientas de la aplicación. Si estaba trabajando en un modelo que contenía modificaciones, Umbrello UML Modeller le preguntará si debe guardar los cambios antes de cargar el nuevo modelo. 

**Guardar modelo**

Puede guardar el modelo actual en cualquier momento usando la opción *Guardar* del menú *Archivo* o pulsando el botón *Guardar* que hay en la barra de herramientas de la aplicación. Si necesita guardar el modelo con otro nombre, use la opción *Guardar como* del menú *Archivo*.

Para su comodidad, Umbrello UML Modeller también le ofrece la opción de guardar automáticamente su trabajo cada cierto periodo de tiempo. Puede configurar este comportamiento así como los intervalos de tiempo en las *Preferencias* de Umbrello UML Modeller.

**Cargar modelo**

Para cargar un modelo existente, seleccione la opción *Abrir* en el menú *Archivo* o pulse el icono *Abrir* de la barra de herramientas de la aplicación. Dispone de una lista de los últimos modelos que haya usado en el submenú *Abrir reciente* del menú *Archivo* para acelerar el acceso a los modelos que use con más frecuencia.

Umbrello UML Modeller solo puede trabajar con un único modelo a la vez. Por lo tanto, si le pide al programa que cargue un modelo y el actual contiene modificaciones desde la última vez que lo guardó, Umbrello UML Modeller le preguntará si debe guardar dichos cambios para impedir que pierda su trabajo. Lo que sí puede hacer es lanzar dos o más instancias de Umbrello UML Modeller a la vez y copiar y pegar datos entre ellas.


**3. Edición de modelos**
----------------------

Umbrello UML Modeller dispone básicamente de dos modos para editar los elementos de un modelo.

- Editar los elementos del modelo directamente en la vista de árbol

- Editar los elementos del modelo mediante un diagrama

Usando el menú de contexto de los distintos elementos de la vista de árbol podrá añadir, eliminar y modificar casi cualquier elemento del modelo. Si hace clic con el botón derecho del ratón en las carpetas de la vista de árbol, dispondrá de opciones para crear distintos tipos de diagramas así como (dependiendo de si la carpeta es un *caso de uso* o una *vista lógica*) actores, casos de uso, clases, etc.

Tras añadir elementos al modelo, podrá editarlos accediendo a su diálogo de propiedades. Para ello, seleccione la opción *Propiedades* en el menú de contexto que se muestra al hacer clic con el botón derecho en los elementos de la vista de árbol.

Antes de continuar, cabe destacar que hay dos modos de funcionamiento a la hora de manejar elementos en el *Área de trabajo*. Seleccionando **Nota** se nos activa el *click* para crear diagramas, relaciones y demás elementos UML. Por otro lado, seleccionando **Seleccionar**, activamos el modo con el que podremos mover los elementos creados anteriormente (organizarlos, hacerlos más grandes, mover las flechas de las relaciones, etc) por el *Área de trabajo*.

	Imagen 2


**4. Añadir y eliminar diagramas**
----------------------

Un modelo UML consiste en un conjunto de elementos de UML y de asociaciones entre ellos. No obstante, el modelo no se visualiza directamente. Debe usar *diagramas* para verlo. 

**Creación de diagramnas**

Para crear un nuevo diagrama en un modelo, seleccione el tipo de diagrama que necesita en el submenú *Nuevo* del menú *Diagrama* y proporcione un nombre para él. Se creará y se activará el nuevo diagrama, por lo que lo verá inmediatamente en la vista de árbol.

Recuerde que Umbrello UML Modeller hace un extenso uso de menús de contexto: también puede hacer clic con el botón derecho sobre una carpeta en la vista de árbol y seleccionar el tipo de diagrama apropiado en el submenú *Nuevo* del menú de contexto. Tenga en cuenta que solo puede crear diagramas de casos de uso en las carpetas de vistas de casos de uso y que el resto de tipos de diagramas solo se pueden crear en las carpetas de vistas lógicas. 

**Eliminación de diagramas**

Si tiene que eliminar un diagrama de un modelo, márquelo para hacerlo activo y seleccione *Borrar* en el menú *Diagrama*. También puede hacer lo mismo seleccionando *Borrar* en el menú de contexto de los diagramas en la vista de árbol.

Umbrello UML Modeller le pedirá confirmación antes de borrar un diagrama, ya que esta operación es algo peligroso que puede causar una pérdida accidental del trabajo realizado. Tras borrar un diagrama y guardar el archivo que lo contenía, no existe modo alguno de deshacer esta acción. 

**Cambiar el nombre de diagramas**

Si desea cambiar el nombre de un diagrama existente, puede hacerlo con la opción «Cambiar nombre» del menú del botón derecho en la vista de árbol.

Otra forma de cambiar el nombre de un diagrama es desde el diálogo de sus propiedades, que puede mostrar seleccionando «Propiedades» en su menú de contexto o haciendo doble clic sobre él en la vista de árbol.


**5. Edición de diagramas**
----------------------

Cuando trabaje en un diagrama, Umbrello UML Modeller tratará de guiarlo aplicando algunas reglas sencillas a los elementos válidos en los distintos tipos de diagramas, así como a las relaciones que pueden existir entre ellos. Si usted es un experto en UML, tal vez no lo note, aunque será de gran ayuda para los menos expertos en UML a la hora de crear diagramas que cumplan los estándares.

Una vez creado el diagrama, llega el momento de empezar a editarlo. Aquí debería notar la diferencia (sutil para los principiantes) entre editar el diagrama y editar el modelo. Como ya sabe, los diagramas son vistas de un modelo. Por ejemplo, si crea una clase mientras edita un diagrama de clases, estará editando ambos, tanto el diagrama como el modelo. Si modifica el color u otras opciones de visualización de una clase del diagrama, estará editando el diagrama, pero no el modelo.

**Insertar elementos**

**Borrar elementos**

**Editar elementos**

**Editar clases**

**Anexos**
======

 - [Página oficial](https://umbrello.kde.org/) de Umbrello UML Modeller.
 - [Documentación](https://umbrello.kde.org/documentation.php) oficial de Umbrello UML Modeller.
 - [Características](https://umbrello.kde.org/features.php) de Umbrello UML Modeller.
 - [](https://umbrello.kde.org/documentation.php) oficial de Umbrello UML Modeller.
 - [Comunidad](https://www.kde.org/community/) KDE.

 

