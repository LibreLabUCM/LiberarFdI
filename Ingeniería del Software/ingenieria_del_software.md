<!--Creado por Jonathan Carrero Aranda -->

**Ingeniería del Software**
==============
----------

Ingeniería de Software es una asignatura de segundo curso común a todos los grados de la Facultad de Informática. El temario que se trata en la asignatura aborda los modelos de proceso y sus métricas, plan de proyecto y toda la documentación que este conlleva, UML y el proceso unificado de desarrollo.

Durante la asignatura se requiere hacer un proyecto software mediante diagramas UML. Así pues, para el desarrollo del proyecto y más concretamente para realizar los diagramas UML, trabajaremos con la herramienta *Umbrello UML Modeller*, disponible en Linux, Windows, Mac OS X y bajo licencia GPL.

**[Umbrello](https://umbrello.kde.org/)** para la creación y edición de diagramas UML para llevar a cabo el desarrollo de software.

 

**Umbrello**
=======



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

Antes de continuar, cabe destacar que hay dos modos de funcionamiento a la hora de manejar elementos en el *Área de trabajo*. Seleccionando *Nota* se nos activa el *click* para crear diagramas, relaciones y demás elementos UML. Por otro lado, seleccionando *Seleccionar*, activamos el modo con el que podremos mover los elementos creados anteriormente (organizarlos, hacerlos más grandes, mover las flechas de las relaciones, etc) por el *Área de trabajo*.

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

Una vez creado el diagrama, llega el momento de empezar a editarlo. Aquí debería notar la diferencia (sutil para los principiantes) entre editar el diagrama y editar el *modelo*. Como ya sabe, los diagramas son vistas de un modelo. Por ejemplo, si crea una clase mientras edita un diagrama de clases, estará editando ambos, tanto el diagrama como el modelo. Si modifica el color u otras opciones de visualización de una clase del diagrama, estará editando el diagrama, pero no el modelo.

**Insertar elementos**

Una de las primeras cosas que hará cuando edite un nuevo diagrama será insertar elementos en él (clases, actores, casos de uso, etc.). Básicamente, existen dos formas de hacerlo:

- Arrastrar elementos existentes desde la vista de árbol hasta el modelo.
- Crear nuevos elementos en el modelo y añadirlos al diagrama al mismo tiempo usando una de las herramientas de edición disponibles en la barra de herramientas de trabajo.

Para insertar elementos existentes en el modelo, arrástrelos desde la vista de árbol y suéltelos en el lugar del diagrama donde quiera colocarlos. Siempre puede mover los elementos dentro del diagrama usando la herramienta de selección.

El segundo modo de añadir elementos al diagrama consiste en usar las herramientas de edición de la barra de herramientas de trabajo (tenga en cuenta que esto también añadirá los elementos al modelo). 

**Borrar elementos**

Puede borrar cualquier elemento seleccionando la opción Borrar en su menú de contexto.

De nuevo, existe una gran diferencia entre eliminar un objeto de un diagrama y borrarlo de un modelo: cuando borra un objeto de un diagrama, solo está eliminándolo de dicho diagrama, aunque el elemento seguirá siendo parte del modelo (si existen otros diagramas que usan el mismo elemento, no sufrirán ningún cambio). Si, por el contrario, borra el elemento en la vista de árbol, está borrando realmente dicho elemento del *modelo*. Como el elemento dejará de existir en el modelo, se eliminará automáticamente de todos los diagramas en los que aparece.

**Editar elementos**

Puede editar la mayoría de los elementos UML de un modelo y de sus diagramas abriendo su diálogo de propiedades y seleccionando las opciones apropiadas. Para editar las propiedades de un objeto, seleccione *Propiedades* en su menú de contexto (clic con el botón derecho). Cada elemento posee un diálogo con varias páginas donde podrá configurar las correspondientes opciones de dicho elemento. En el caso de algunos elementos (como los actores), solo podrá ajustar algunas opciones, como su nombre y su documentación, mientras que para otros elementos (como las clases), podrá editar sus atributos y sus operaciones, seleccionar lo que se va a mostrar en el diagrama (la firma completa de la operación o solo el nombre de la operación, etc.) e incluso los colores que quiera usar para la línea y el relleno de la representación de la clase en el diagrama.

Tenga en cuenta que también puede seleccionar la opción de las propiedades de un elemento en su menú de contexto en la vista de árbol. Esto también le permite editar las propiedades de los diagramas, así como ajustar si se debe mostrar o no la cuadrícula.

	Imagen 3

**Editar clases**

Aunque en las secciones anteriores ya se ha cubierto la edición de las propiedades de todos los objetos, la edición de clases merece una sección especial porque son un poco más complejas y tienen más opciones que la mayor parte de los elementos UML.

En la imagen anterior hemos visto las distintas opciones que hay dentro de las propiedades de una clase. Vamos a ver para que sirve cada una de estas opciones:

- General: La página de preferencias generales del diálogo de propiedades es autoexplicativa. En ella puede cambiar el nombre de la clase, su visibilidad, su documentación, etc. Esta página siempre está disponible.

- Attributes: En la página de preferencias de los atributos puede añadir, editar y borrar los atributos (variables) de la clase. Puede moverlos arriba y abajo usando los botones de las flechas que hay al lado. Esta página siempre está disponible.

- Operations: Al igual que en la página de preferencias de los atributos, en la página de preferencias de las operaciones puede añadir, editar y eliminar operaciones de la clase. Cuando añada o edite una operación, introduzca los datos básicos en el diálogo Propiedades de la operación. Si desea añadir parámetros a la operación, pulse el botón *Nuevo parámetro* para mostrar el diálogo de Propiedades del parámetro. Esta página siempre está disponible.

- Templates: Esta página le permite añadir plantillas de la clase, que son clases o tipos de datos sin especificar. En Java 1.5 reciben el nombre de «genéricos». 

- Associations: La página de *Asociaciones de la clase* muestra todas las asociaciones de la clase en el diagrama actual. Haga doble clic en una asociación para mostrar sus propiedades y, según el tipo de asociación, modificar algunos de sus parámetros, como su multiplicidad y el nombre de su rol. Si la asociación no permite modificar estas opciones, el diálogo de propiedades de la asociación será de solo lectura y solo podrá modificar en él la documentación de la asociación. 

- Display: En la página de *Opciones de visualización* podrá ajustar lo que se muestra en el diagrama. Una clase se puede mostrar usando solo un rectángulo con su nombre (útil si tiene muchas clases en el diagrama o si no tiene interés mostrar sus detalles) o en su totalidad, mostrando paquetes, estereotipos, atributos y operaciones con firma y visibilidad completas. En esta página puede seleccionar las opciones correspondientes a la información que desee mostrar. Los cambios que haga aquí son solo opciones de visualización para el diagrama. Esto quiere decir que si «oculta» operaciones de una clase, dejarán de ser visibles solo en el diagrama, aunque dichas operaciones seguirán siendo parte del modelo. Esta opción solo está disponible si ha seleccionado las propiedades de la clase desde el interior de un diagrama. Si ha abierto las propiedades de la clase desde la vista de árbol, esta página no estará disponible, ya que estas opciones de visualización no tienen sentido en este caso.

- Style: En la página *Estilo del widget* podrá configurar los colores que desee usar en la línea y en el relleno del widget. Esta opción, obviamente, solo tiene sentido para las clases que se muestran en los diagramas, por lo que no estará presente si ha abierto el diálogo de propiedades de la clase desde la vista de árbol.

**Asociaciones**

Las asociaciones relacionan dos objetos UML entre sí. Normalmente, las asociaciones se definen entre dos clases, aunque algunos tipos de asociaciones también pueden existir entre casos de uso y actores.

Para crear una asociación, seleccione la herramienta apropiada en la barra de herramientas de trabajo (asociación genérica, generalización, agregación, etc.), haga clic en el primer elemento que participa en la asociación y luego vuelva a hacer clic en el segundo elemento de la misma. Observe que se necesitan dos clics, uno en cada uno de los objetos que participan en la asociación (no se trata de arrastrar un objeto sobre el otro).

Si está intentando usar una asociación de un modo que va contra la especificación de UML, Umbrello UML Modeller se negará a crearla y le mostrará un mensaje de error. Este será el caso si, por ejemplo, existe una generalización desde la «clase A» hasta la «clase B» y luego intenta crear otra generalización desde la «clase B» hasta la «clase A».

Si hace clic con el botón derecho del ratón en una asociación, se mostrará un menú de contexto con las acciones que puede aplicar sobre ella. Si necesita borrar una asociación, seleccione la opción *Borrar* en este menú de contexto. También puede seleccionar la opción *Propiedades* y, según el tipo de asociación, editar sus atributos, como sus roles y su multiplicidad.

	Imagen 4
	
	
Otro concepto útil es el de asociación. Las asociaciones se muestran, por omisión, como una línea recta que conecta los dos objetos del diagrama.

Puede añadir puntos de anclaje para doblar una asociación haciendo doble clic en algún punto de la línea de la asociación. Esto insertará un punto de anclaje (que se muestra como un punto azul al seleccionar la línea de la asociación) que podrá mover para dar forma a la asociación.

Si necesita eliminar un punto de anclaje, vuelva a hacer doble clic sobre él para eliminarlo.

**Notas, textos y cuadros**

Las notas, las líneas de texto y los cuadros son elementos que pueden estar presentes en cualquier tipo de diagramas y no poseen ningún valor semántico real, aunque resultan útiles para añadir comentarios adicionales o explicaciones que pueden facilitar la comprensión de un diagrama.

Para añadir una nota o una línea de texto, seleccione la correspondiente herramienta en la barra de herramientas de trabajo y haga clic en el punto del diagrama donde quiera situar el comentario. Puede editar su texto abriendo las propiedades del elemento mediante su menú de contexto o, en el caso de las notas, haciendo doble clic sobre ellas.

	Imagen 5

Resulta interesante y práctico explicar qué son los anclajes. Los anclajes se usan para enlazar una nota de texto y otro elemento UML. Por ejemplo, seguramente usará una nota de texto para explicar o hacer algún comentario sobre una clase o una asociación en concreto, en cuyo caso puede usar un anclaje para dejar claro que la nota «pertenece» al elemento en cuestión.

Para añadir un anclaje entre una nota y otro elemento UML, use el botón de anclaje que hay en la barra de herramientas de trabajo. Primero debe hacer clic en la nota y luego en el elemento UML con el que quiera enlazar la nota. 








**Anexos**
======

 - [Página oficial](https://umbrello.kde.org/) de Umbrello UML Modeller.
 - [Documentación](https://umbrello.kde.org/documentation.php) oficial de Umbrello UML Modeller.
 - [Características](https://umbrello.kde.org/features.php) de Umbrello UML Modeller.
 - [](https://umbrello.kde.org/documentation.php) oficial de Umbrello UML Modeller.
 - [Comunidad](https://www.kde.org/community/) KDE.

 

