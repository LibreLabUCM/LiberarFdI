<!--Creado por Jonathan Carrero Aranda -->

**Ingeniería del Software**
==============
----------

Ingeniería de Software es una asignatura de segundo curso común a todos los grados de la Facultad de Informática. El temario que se trata en la asignatura aborda los modelos de proceso y sus métricas, plan de proyecto y toda la documentación que este conlleva, UML y el proceso unificado de desarrollo.

Durante la asignatura se requiere hacer un proyecto software mediante diagramas UML. Así pues, para el desarrollo del proyecto y más concretamente para realizar los diagramas UML, trabajaremos con la herramienta *Umbrello UML Modeller*, disponible en Linux, Windows, Mac OS X y bajo licencia GPL.

**Índice de la guia**
	
![enter image description here](https://github.com/LibreLabUCM/LiberarFdI/blob/master/Ingenier%C3%ADa%20del%20Software/images/imagen0.png)

# 1. Umbrello
=======

## 1.1. Descripción del programa
---------------------------
Fue desarrollado por Paul Hensgen, y está diseñado principalmente para KDE, aunque funciona en otros entornos de escritorio.

Umbrello maneja gran parte de los diagramas estándar UML pudiendo crearlos, además de manualmente, importándolos a partir de código en C++, Java, Python, IDL, Pascal/Delphi, Ada, o también Perl. Así mismo, permite crear un diagrama y generar el código automáticamente en los lenguajes antes citados, entre otros. El formato de fichero que utiliza está basado en XMI.


## 1.2. Requisitos de hardware
-------------------------
No exige requisitos mínimos.


## 1.3. Guía de instalación
----------------------

En primer lugar es conveniente actualizar. Para ello usamos el comando:

	sudo apt-get update

A continuación, instalamos *Umbrello* con el comando:

	sudo apt-get install umbrello

Por último, para lanzarlo, ejecutamos:

	sudo umbrello


# 2. Manual de usuario
=================

Este manual no pretende ser un manual en el que aprender los distintos elementos de UML y la construcción de diagramas. Por esa razón, no se harán ejemplos de todos los diagramas utilizados en Ingeniería del Software. Además se da por hecho que, aunque sea de forma básica, se conocen los conceptos utilizados en la construcción de diagramas usando UML.

## 2.1. Interfaz de usuario
----------------------

La ventana principal de Umbrello UML Modeller está dividida en tres áreas que le permiten tener a la vista todo el sistema y acceder a los distintos diagramas de forma rápida mientras trabaja en un modelo. Estas áreas se denominan:

- Vista en árbol
- Área de trabajo
- Ventana de documentación e historial

![enter image description here](https://github.com/LibreLabUCM/LiberarFdI/blob/master/Ingenier%C3%ADa%20del%20Software/images/imagen1.png)

### 2.1.1. Vista en árbol

La vista de árbol suele estar ubicada en el lado superior izquierdo de la ventana y muestra todos los diagramas, clases, actores y casos de uso que constituyen el modelo. Esta vista de árbol le permite disponer de un rápido resumen de todos los elementos del modelo. También le proporciona un modo rápido de cambiar entre distintos diagramas del modelo e insertar elementos del modelo en el diagrama actual.

Si está trabajando en un modelo que contiene más de unas pocas clases y diagramas, la vista de árbol le puede ayudar a organizar el modelo usando carpetas. Puede crear carpetas seleccionando la correspondiente opción en el menú de contexto (haga clic con el botón derecho en cualquiera de las carpetas de la vista de árbol). Puede organizar los elementos moviéndolos a la carpeta adecuada (arrastrando y soltando). 

### 2.1.2. Ventana de documentación e historial

La ventana de documentación e historial de órdenes está situada en la parte inferior izquierda de la ventana principal de Umbrello UML Modeller y le proporciona una rápida vista previa de la documentación sobre el elemento seleccionado y el historial de órdenes de la sesión de trabajo actual. La ventana de documentación es pequeña porque está pensada para permitirle seleccionar rápidamente la documentación del elemento y el historial de órdenes ocupando el mínimo espacio posible de la pantalla. Si necesita consultar la documentación con más detalle, puede abrir las propiedades del elemento.

### 2.1.3. Área de trabajo

El área de trabajo es la ventana principal de Umbrello UML Modeller y es donde tiene lugar la acción real. Se usa para ver y editar los diagramas del modelo. El área de trabajo muestra el diagrama activo. Solo se puede mostrar un único diagrama a la vez en el área de trabajo.

## 2.2. Crear, cargar y guardar modelos
----------------------

Lo primero que necesita para empezar a hacer algo útil en Umbrello UML Modeller es crear un modelo sobre el que trabajar. Tras iniciar Umbrello UML Modeller, siempre se carga el último modelo usado o se crea uno nuevo vacío (según las preferencias seleccionadas en el diálogo de configuración). Esto le permite comenzar a trabajar enseguida. 

### 2.2.1. Nuevo modelo

Cuando necesite crear un nuevo modelo, seleccione la entrada *Nuevo* en el menú *Archivo* o pulse el icono *Nuevo* que hay en la barra de herramientas de la aplicación. Si estaba trabajando en un modelo que contenía modificaciones, Umbrello UML Modeller le preguntará si debe guardar los cambios antes de cargar el nuevo modelo. 

### 2.2.2. Guardar modelo

Puede guardar el modelo actual en cualquier momento usando la opción *Guardar* del menú *Archivo* o pulsando el botón *Guardar* que hay en la barra de herramientas de la aplicación. Si necesita guardar el modelo con otro nombre, use la opción *Guardar como* del menú *Archivo*.

Para su comodidad, Umbrello UML Modeller también le ofrece la opción de guardar automáticamente su trabajo cada cierto periodo de tiempo. Puede configurar este comportamiento así como los intervalos de tiempo en las *Preferencias* de Umbrello UML Modeller.

### 2.2.3. Cargar modelo

Para cargar un modelo existente, seleccione la opción *Abrir* en el menú *Archivo* o pulse el icono *Abrir* de la barra de herramientas de la aplicación. Dispone de una lista de los últimos modelos que haya usado en el submenú *Abrir reciente* del menú *Archivo* para acelerar el acceso a los modelos que use con más frecuencia.

Umbrello UML Modeller solo puede trabajar con un único modelo a la vez. Por lo tanto, si le pide al programa que cargue un modelo y el actual contiene modificaciones desde la última vez que lo guardó, Umbrello UML Modeller le preguntará si debe guardar dichos cambios para impedir que pierda su trabajo. Lo que sí puede hacer es lanzar dos o más instancias de Umbrello UML Modeller a la vez y copiar y pegar datos entre ellas.


## 2.3. Edición de modelos
----------------------

Umbrello UML Modeller dispone básicamente de dos modos para editar los elementos de un modelo:

- Editar los elementos del modelo directamente en la vista de árbol

- Editar los elementos del modelo mediante un diagrama

Usando el menú de contexto de los distintos elementos de la vista de árbol podrá añadir, eliminar y modificar casi cualquier elemento del modelo. Si hace clic con el botón derecho del ratón en las carpetas de la vista de árbol, dispondrá de opciones para crear distintos tipos de diagramas así como (dependiendo de si la carpeta es un *caso de uso* o una *vista lógica*) actores, casos de uso, clases, etc.

Tras añadir elementos al modelo, podrá editarlos accediendo a su diálogo de propiedades. Para ello, seleccione la opción *Propiedades* en el menú de contexto que se muestra al hacer clic con el botón derecho en los elementos de la vista de árbol.

Antes de continuar, cabe destacar que hay dos modos de funcionamiento a la hora de manejar elementos en el *Área de trabajo*. Seleccionando *Nota* se nos activa el *click* para crear diagramas, relaciones y demás elementos UML. Por otro lado, seleccionando *Seleccionar*, activamos el modo con el que podremos mover los elementos creados anteriormente (organizarlos, hacerlos más grandes, mover las flechas de las relaciones, etc) por el *Área de trabajo*.

![enter image description here](https://github.com/LibreLabUCM/LiberarFdI/blob/master/Ingenier%C3%ADa%20del%20Software/images/imagen2.png)


## 2.4. Añadir y eliminar diagramas
----------------------

Un modelo UML consiste en un conjunto de elementos de UML y de asociaciones entre ellos. No obstante, el modelo no se visualiza directamente. Debe usar *diagramas* para verlo. 

### 2.4.1. Creación de diagramnas

Para crear un nuevo diagrama en un modelo, seleccione el tipo de diagrama que necesita en el submenú *Nuevo* del menú *Diagrama* y proporcione un nombre para él. Se creará y se activará el nuevo diagrama, por lo que lo verá inmediatamente en la vista de árbol.

Recuerde que Umbrello UML Modeller hace un extenso uso de menús de contexto: también puede hacer clic con el botón derecho sobre una carpeta en la vista de árbol y seleccionar el tipo de diagrama apropiado en el submenú *Nuevo* del menú de contexto. Tenga en cuenta que solo puede crear diagramas de casos de uso en las carpetas de vistas de casos de uso y que el resto de tipos de diagramas solo se pueden crear en las carpetas de vistas lógicas. 

### 2.4.2. Eliminación de diagramas

Si tiene que eliminar un diagrama de un modelo, márquelo para hacerlo activo y seleccione *Borrar* en el menú *Diagrama*. También puede hacer lo mismo seleccionando *Borrar* en el menú de contexto de los diagramas en la vista de árbol.

Umbrello UML Modeller le pedirá confirmación antes de borrar un diagrama, ya que esta operación es algo peligroso que puede causar una pérdida accidental del trabajo realizado. Tras borrar un diagrama y guardar el archivo que lo contenía, no existe modo alguno de deshacer esta acción. 

### 2.4.3. Cambiar el nombre de diagramas

Si desea cambiar el nombre de un diagrama existente, puede hacerlo con la opción «Cambiar nombre» del menú del botón derecho en la vista de árbol.

Otra forma de cambiar el nombre de un diagrama es desde el diálogo de sus propiedades, que puede mostrar seleccionando «Propiedades» en su menú de contexto o haciendo doble clic sobre él en la vista de árbol.


## 2.5. Edición de diagramas
----------------------

Cuando trabaje en un diagrama, Umbrello UML Modeller tratará de guiarlo aplicando algunas reglas sencillas a los elementos válidos en los distintos tipos de diagramas, así como a las relaciones que pueden existir entre ellos. Si usted es un experto en UML, tal vez no lo note, aunque será de gran ayuda para los menos expertos en UML a la hora de crear diagramas que cumplan los estándares.

Una vez creado el diagrama, llega el momento de empezar a editarlo. Aquí debería notar la diferencia (sutil para los principiantes) entre editar el diagrama y editar el *modelo*. Como ya sabe, los diagramas son vistas de un modelo. Por ejemplo, si crea una clase mientras edita un diagrama de clases, estará editando ambos, tanto el diagrama como el modelo. Si modifica el color u otras opciones de visualización de una clase del diagrama, estará editando el diagrama, pero no el modelo.

### 2.5.1. Insertar elementos

Una de las primeras cosas que hará cuando edite un nuevo diagrama será insertar elementos en él (clases, actores, casos de uso, etc.). Básicamente, existen dos formas de hacerlo:

- Arrastrar elementos existentes desde la vista de árbol hasta el modelo.
- Crear nuevos elementos en el modelo y añadirlos al diagrama al mismo tiempo usando una de las herramientas de edición disponibles en la barra de herramientas de trabajo.

Para insertar elementos existentes en el modelo, arrástrelos desde la vista de árbol y suéltelos en el lugar del diagrama donde quiera colocarlos. Siempre puede mover los elementos dentro del diagrama usando la herramienta de selección.

El segundo modo de añadir elementos al diagrama consiste en usar las herramientas de edición de la barra de herramientas de trabajo (tenga en cuenta que esto también añadirá los elementos al modelo). 

### 2.5.2. Borrar elementos

Puede borrar cualquier elemento seleccionando la opción *Borrar* en su menú de contexto.

De nuevo, existe una gran diferencia entre eliminar un objeto de un diagrama y borrarlo de un modelo: cuando borra un objeto de un diagrama, solo está eliminándolo de dicho diagrama, aunque el elemento seguirá siendo parte del modelo (si existen otros diagramas que usan el mismo elemento, no sufrirán ningún cambio). Si, por el contrario, borra el elemento en la vista de árbol, está borrando realmente dicho elemento del *modelo*. Como el elemento dejará de existir en el modelo, se eliminará automáticamente de todos los diagramas en los que aparece.

### 2.5.3. Editar elementos

Puede editar la mayoría de los elementos UML de un modelo y de sus diagramas abriendo su diálogo de propiedades y seleccionando las opciones apropiadas. Para editar las propiedades de un objeto, seleccione *Propiedades* en su menú de contexto (clic con el botón derecho). Cada elemento posee un diálogo con varias páginas donde podrá configurar las correspondientes opciones de dicho elemento. En el caso de algunos elementos (como los actores), solo podrá ajustar algunas opciones, como su nombre y su documentación, mientras que para otros elementos (como las clases), podrá editar sus atributos y sus operaciones, seleccionar lo que se va a mostrar en el diagrama (la firma completa de la operación o solo el nombre de la operación, etc.) e incluso los colores que quiera usar para la línea y el relleno de la representación de la clase en el diagrama.

Tenga en cuenta que también puede seleccionar la opción de las propiedades de un elemento en su menú de contexto en la vista de árbol. Esto también le permite editar las propiedades de los diagramas, así como ajustar si se debe mostrar o no la cuadrícula.

![enter image description here](https://github.com/LibreLabUCM/LiberarFdI/blob/master/Ingenier%C3%ADa%20del%20Software/images/imagen3.png)

### 2.5.4. Editar clases

Aunque en las secciones anteriores ya se ha cubierto la edición de las propiedades de todos los objetos, la edición de clases merece una sección especial porque son un poco más complejas y tienen más opciones que la mayor parte de los elementos UML.

En la imagen anterior hemos visto las distintas opciones que hay dentro de las propiedades de una clase. Vamos a ver para qué sirve cada una de estas opciones:

- General: La página de preferencias generales del diálogo de propiedades es autoexplicativa. En ella puede cambiar el nombre de la clase, su visibilidad, su documentación, etc. Esta página siempre está disponible.

- Attributes: En la página de preferencias de los atributos puede añadir, editar y borrar los atributos (variables) de la clase. Puede moverlos arriba y abajo usando los botones de las flechas que hay al lado. Esta página siempre está disponible.

- Operations: Al igual que en la página de preferencias de los atributos, en la página de preferencias de las operaciones puede añadir, editar y eliminar operaciones de la clase. Cuando añada o edite una operación, introduzca los datos básicos en el diálogo Propiedades de la operación. Si desea añadir parámetros a la operación, pulse el botón *Nuevo parámetro* para mostrar el diálogo de Propiedades del parámetro. Esta página siempre está disponible.

- Templates: Esta página le permite añadir plantillas de la clase, que son clases o tipos de datos sin especificar. En Java 1.5 reciben el nombre de «genéricos». 

- Associations: La página de *Asociaciones de la clase* muestra todas las asociaciones de la clase en el diagrama actual. Haga doble clic en una asociación para mostrar sus propiedades y, según el tipo de asociación, modificar algunos de sus parámetros, como su multiplicidad y el nombre de su rol. Si la asociación no permite modificar estas opciones, el diálogo de propiedades de la asociación será de solo lectura y solo podrá modificar en él la documentación de la asociación. 

- Display: En la página de *Opciones de visualización* podrá ajustar lo que se muestra en el diagrama. Una clase se puede mostrar usando solo un rectángulo con su nombre (útil si tiene muchas clases en el diagrama o si no tiene interés mostrar sus detalles) o en su totalidad, mostrando paquetes, estereotipos, atributos y operaciones con firma y visibilidad completas. En esta página puede seleccionar las opciones correspondientes a la información que desee mostrar. Los cambios que haga aquí son solo opciones de visualización para el diagrama. Esto quiere decir que si «oculta» operaciones de una clase, dejarán de ser visibles solo en el diagrama, aunque dichas operaciones seguirán siendo parte del modelo. Esta opción solo está disponible si ha seleccionado las propiedades de la clase desde el interior de un diagrama. Si ha abierto las propiedades de la clase desde la vista de árbol, esta página no estará disponible, ya que estas opciones de visualización no tienen sentido en este caso.

- Style: En la página *Estilo del widget* podrá configurar los colores que desee usar en la línea y en el relleno del widget. Esta opción, obviamente, solo tiene sentido para las clases que se muestran en los diagramas, por lo que no estará presente si ha abierto el diálogo de propiedades de la clase desde la vista de árbol.

### 2.5.5. Asociaciones

Las asociaciones relacionan dos objetos UML entre sí. Normalmente, las asociaciones se definen entre dos clases, aunque algunos tipos de asociaciones también pueden existir entre casos de uso y actores.

Para crear una asociación, seleccione la herramienta apropiada en la barra de herramientas de trabajo (asociación genérica, generalización, agregación, etc.), haga clic en el primer elemento que participa en la asociación y luego vuelva a hacer clic en el segundo elemento de la misma. Observe que se necesitan dos clics, uno en cada uno de los objetos que participan en la asociación (no se trata de arrastrar un objeto sobre el otro).

![enter image description here](https://github.com/LibreLabUCM/LiberarFdI/blob/master/Ingenier%C3%ADa%20del%20Software/images/imagen4.png)

Si está intentando usar una asociación de un modo que va contra la especificación de UML, Umbrello UML Modeller se negará a crearla y le mostrará un mensaje de error. Este será el caso si, por ejemplo, existe una generalización desde la «clase A» hasta la «clase B» y luego intenta crear otra generalización desde la «clase B» hasta la «clase A».

Si hace clic con el botón derecho del ratón en una asociación, se mostrará un menú de contexto con las acciones que puede aplicar sobre ella. Si necesita borrar una asociación, seleccione la opción *Borrar* en este menú de contexto. También puede seleccionar la opción *Propiedades* y, según el tipo de asociación, editar sus atributos, como sus roles y su multiplicidad.

![enter image description here](https://github.com/LibreLabUCM/LiberarFdI/blob/master/Ingenier%C3%ADa%20del%20Software/images/imagen5.png)
		
Otro concepto útil es el de asociación. Las asociaciones se muestran, por omisión, como una línea recta que conecta los dos objetos del diagrama.

Puede añadir puntos de anclaje para doblar una asociación haciendo doble clic en algún punto de la línea de la asociación. Esto insertará un punto de anclaje (que se muestra como un punto azul al seleccionar la línea de la asociación) que podrá mover para dar forma a la asociación.

Si necesita eliminar un punto de anclaje, vuelva a hacer doble clic sobre él para eliminarlo.

### 2.5.6. Notas, textos y cuadros

Las notas, las líneas de texto y los cuadros son elementos que pueden estar presentes en cualquier tipo de diagramas y no poseen ningún valor semántico real, aunque resultan útiles para añadir comentarios adicionales o explicaciones que pueden facilitar la comprensión de un diagrama.

Para añadir una nota o una línea de texto, seleccione la correspondiente herramienta en la barra de herramientas de trabajo y haga clic en el punto del diagrama donde quiera situar el comentario. Puede editar su texto abriendo las propiedades del elemento mediante su menú de contexto o, en el caso de las notas, haciendo doble clic sobre ellas.

![enter image description here](https://github.com/LibreLabUCM/LiberarFdI/blob/master/Ingenier%C3%ADa%20del%20Software/images/imagen6.png)

Resulta interesante y práctico explicar qué son los anclajes. Los anclajes se usan para enlazar una nota de texto y otro elemento UML. Por ejemplo, seguramente usará una nota de texto para explicar o hacer algún comentario sobre una clase o una asociación en concreto, en cuyo caso puede usar un anclaje para dejar claro que la nota «pertenece» al elemento en cuestión.

Para añadir un anclaje entre una nota y otro elemento UML, use el botón de anclaje que hay en la barra de herramientas de trabajo. Primero debe hacer clic en la nota y luego en el elemento UML con el que quiera enlazar la nota. 

## 2.6. Importación y generación de código
----------------------

Umbrello UML Modeller es una herramienta de modelado UML. Como tal, su propósito principal es servirle de ayuda en el análisis y diseño de sistemas. No obstante, para hacer la transición entre el diseño y la implementación, le permite generar código fuente en distintos lenguajes de programación para que pueda empezar con algo. Además, si desea comenzar a usar UML en un proyecto de C++ ya iniciado, Umbrello UML Modeller le puede ayudar a crear un modelo del sistema a partir del código fuente analizando el código fuente e importando las clases que encuentre.

### 2.6.1. Generación de código

Para poder generar código con Umbrello UML Modeller, necesita primero crear o cargar un modelo que contenga al menos una clase. Cuando esté preparado para empezar a escribir código, seleccione la entrada *Asistente para generación de código* en el menú *Código* para iniciar un asistente que le guiará durante el proceso de generación de código.

El primer paso consiste en seleccionar las clases para las que desea generar código fuente. Por omisión están seleccionadas todas las clases del modelo, aunque puede eliminar las que no desee moviéndolas a la lista de la parte izquierda.

El siguiente paso del asistente le permite modificar los parámetros que usa el generador de código para escribir el código fuente. Dispone de las siguientes opciones:

![enter image description here](https://github.com/LibreLabUCM/LiberarFdI/blob/master/Ingenier%C3%ADa%20del%20Software/images/imagen7.png)
	
- Language (lenguaje): Por omisión, Umbrello UML Modeller creará código en el lenguaje que haya seleccionado como activo, aunque en el asistente de generación de código tendrá la opción de usar otro lenguaje. 

- Folders (carpetas): *Escribir todos los archivos generados en la carpeta*. Aquí debe seleccionar la carpeta en la que quiere que Umbrello UML Modeller sitúe el código fuente generado. La opción *Incluir archivos de cabecera de la carpeta* le permite insertar una cabecera al principio de cada archivo generado. Los archivos de cabecera pueden contener información sobre derechos de autor o sobre licencias, así como variables que se evalúan durante la generación del código. Puede examinar los archivos de plantillas de cabecera que acompañan a Umbrello UML Modeller para ver cómo se usan estas variables para sustituir su nombre o la fecha actual durante la generación. 

- Overwrite Policy (política de sobreescritura): Esta opción le indica a Umbrello UML Modeller qué debe hacer si ya existe el archivo que va a crear en la carpeta de destino. Umbrello UML Modeller no puede modificar archivos de código fuente existentes, por lo que debe elegir entre sobrescribir el archivo existente, omitir la generación de ese archivo en particular o dejar que Umbrello UML Modeller escoja un nombre distinto para el archivo. Si elige la opción de usar un nombre diferente, Umbrello UML Modeller añadirá un sufijo al nombre del archivo.

El tercer y último paso del asistente muestra el estado del proceso de generación de código. Solo tiene que pulsar el botón «Generar» para escribir el código de las clases seleccionadas.

Tenga en cuenta que las opciones que haya seleccionado en el asistente de generación de código solo son válidas en dicho momento. La próxima vez que ejecute el asistente tendrá que volver a seleccionar todas las opciones (carpeta de cabeceras, política de sobrescritura y demás). Puede definir los valores por omisión que use Umbrello UML Modeller en la sección *Generación de código* de las preferencias de Umbrello UML Modeller, disponible en *Preferencias* → *Configurar Umbrello UML Modeller...*

Si ha ajustado las opciones de generación de código de forma correcta y desea generar código inmediatamente sin recorrer todos los pasos del asistente, puede seleccionar *Generar todo el código* en el menú *Código*. Esto generará código para todas las clases del modelo usando las preferencias actuales (incluyendo la carpeta de salida y la política de sobrescritura, por lo que debería tener cuidado).

![enter image description here](https://github.com/LibreLabUCM/LiberarFdI/blob/master/Ingenier%C3%ADa%20del%20Software/images/imagen8.png)
	
En nuestro caso, para la generación de código, hemos seleccionado el lenguaje C++ y hemos añadido tres atributos a la clase Empleados: Nombre (String), Apellidos (String) y Edad (int). **El código resultante (ficheros Empleados.cpp y Empleados.h) puede consultarse dentro de la carpeta "Ejemplo Empleados", la cual se encuentra en este mismo directorio.**
	
### 2.6.2. Importación de código

Umbrello UML Modeller puede importar código fuente de proyectos existentes para ayudarle a construir un modelo de sus sistemas. Umbrello UML Modeller 2 permite usar código fuente de ActionScript, Ada, C++, C#, D, IDL, Java™, Javascript, MySQL y Pascal.

Para importar clases en un modelo, seleccione la entrada *Asistente de importación de código...* en el menú *Código*. En el diálogo de archivos, seleccione los archivos que contengan declaraciones de clases y pulse *Siguiente* y después *Iniciar* *Importación* y *Terminar*. Las clases se importarán y podrá encontrarlas como parte del modelo en la vista en árbol. Tenga presente que Umbrello UML Modeller no creará ningún tipo de diagrama para mostrar las clases: solo las importará en su modelo par que pueda usarlas en cualquier diagrama que desee. 

![enter image description here](https://github.com/LibreLabUCM/LiberarFdI/blob/master/Ingenier%C3%ADa%20del%20Software/images/imagen9.png)
	
## 2.7. Otras funciones
----------------------

Este capítulo explicará brevemente otras funciones que le ofrece Umbrello UML Modeller.

### 2.7.1. Copiar objetos como imágenes PNG

Además de ofrecerle las típicas funciones de copiar, cortar y pegar que esperaría para copiar objetos entre diferentes diagramas, Umbrello UML Modeller puede copiar objetos como imágenes PNG, por lo que podrá insertarlos en otros tipos de documentos. No necesita hacer nada especial para usar esta función: solo tiene que seleccionar un objeto de un diagrama (clase, actor, etc.) y copiarlo (Ctrl+C o usando el menú); después puede abrir un documento de Calligra Words (o de cualquier otro programa en el que pueda pegar imágenes) y seleccionar *Pegar*. Esta es una poderosa función para exportar partes de sus diagramas como simples imágenes.

### 2.7.2. Exportar una imagen

También puede exportar un diagrama completo como una imagen. Lo único que tiene que hacer es seleccionar el diagrama que desee exportar y usar la opción *Exportar como imagen...* del menú *Diagrama*. 

### 2.7.3. Imprimir

Umbrello UML Modeller le permite imprimir diagramas individuales. Pulse el botón *Imprimir* de la barra de herramientas de la aplicación o seleccione la opción *Imprimir* en el menú *Archivo* para mostrar el diálogo estándar de impresión de KDE, desde el que podrá imprimir sus diagramas. 

### 2.7.4. Carpetas lógicas

Para organizar mejor su modelo, especialmente en grandes proyectos, puede crear carpetas lógicas en la vista de árbol. Solo tiene que seleccionar la opción *Nueva* → *Carpeta* en el menú de contexto de las carpetas por omisión de la vista de árbol para crearlas. Las carpetas se pueden anidar y puede mover objetos arrastrándolos de una a otra.

![enter image description here](https://github.com/LibreLabUCM/LiberarFdI/blob/master/Ingenier%C3%ADa%20del%20Software/images/imagen10.png)
	
## 2.8. Ejemplo Diagrama de Estados
----------------------

Como se dijo en la introducción al punto **2. Manual de usuario**, no se pretende enseñar todos y cada uno de los elementos que componen los distintos diagramas. A modo de plasmar un sencillo ejemplo, se va a realizar un Diagrama de Estados con una hipotética función de Alta Usuario.

![enter image description here](https://github.com/LibreLabUCM/LiberarFdI/blob/master/Ingenier%C3%ADa%20del%20Software/images/imagen11.png)


# 3. Anexos
=======

 - [Página oficial](https://umbrello.kde.org/) de Umbrello UML Modeller.
 - [Documentación](https://umbrello.kde.org/documentation.php) oficial de Umbrello UML Modeller.
 - [Características](https://umbrello.kde.org/features.php) de Umbrello UML Modeller.
 - [Comunidad](https://www.kde.org/community/) KDE.

 

