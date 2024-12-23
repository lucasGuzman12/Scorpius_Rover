# SCORPIUS ROVER
Desarrollo del proyecto del rover Scorpius.

# Descripción del proyecto:
Este proyecto consiste en el desarrollo de un robot hexápodo rover controlado por Arduino, diseñado para recolectar datos ambientales en terrenos a investigar. A diferencia de los rovers tradicionales que utilizan ruedas, este robot emplea 6 patas para sortear obstáculos y moverse eficientemente en superficies irregulares. El rover está equipado con sensores de ultrasonido, humedad y temperatura, cuyos datos se visualizan en tiempo real en una aplicación móvil. Además, el robot puede ser controlado de forma remota para realizar tareas como caminar, girar y activar un sistema de alarma.

# Tecnologías utilizadas:
  Se utilizaron las siguientes herramientas:
   - MIT App Inventor 2.
   - TinkerCad.
   - Arduino IDE.
   - SketchUp.

  Se utilizaron los siguientes lenguajes de programación:
   - C++.
   - Lenguaje de bloques de App Inventor.

# Contenido del repositorio:
- Anteproyecto
- App
  * Para descarga
  * Proyecto MIT App Inventor
- Diseño:
  * Esquema de conexiones
  * Modelo 3D:
    - Para impresión
    - Para visualización
- Informe
- Presentación
- Software
- Tutorial

# Guía de instalación:
- Conseguir los materiales indicados en el tutorial.
- En primer lugar se deberá imprimir en 3D la pieza de la carpeta "Para Impresión" y recortar 6 patas de cartón gris basándose en la plantilla de la carpeta "Diseño".
- Centrar todos los servomotores utilizando el código "centrador_de_servos.ino" provisto en este repositorio.
- Tomar como referencia el modelo 3D de la carpeta "Diseño 3D" (utilizar el visor 3D de su preferencia para visualizarlo), y pegar los servos a las patas como está indicado en dicho modelo, es recomendable utilizar silicona caliente para mayor facilidad de manipulación.
- Utilizando también silicona caliente, pegar las patas en el chásis respetando el diseño 3D provisto, hacer lo mismo con el aguijón.
- Ubicar y pegar los sensores según su preferencia y tarea que necesite realizar con el rover.
- Una vez montada la estructura, descargar la aplicación provista en la carpeta "App" a modo de APK.
- Realizar las conexiones indicadas en el esquema de la carpeta "Esquema de Conexiones". Para ahorrar cable se ha diseñado una placa de estaño cuyo esquema se encuentra en la misma carpeta, si así lo prefiere, puede replicarla siguiendo dicho esquema.
- Una vez montadas las conexiones, asegurarlas y fijarlas en el lomo del hexápodo dependiendo de la longitud de los cables que usted haya utilizado (No importa realmente como prefiera distribuirlo).
- Conectar los cables de datos a los arduinos y descargar los códigos correspondientes indicados en la carpeta "Software".
- Ahora, para proveer energía al rover puede optarse por una powerbank de dos puertos usb y conectarlos a los arduinos; por una fuente de energía de 7 voltios al puerto de los arduinos; o bien consiguiendo una batería y conectar cada polo a los puertos de 5v y GND de cada uno de los arduinos; cualquier método es útil y válido. IMPORTANTE: Es muy recomendable conectar los arduinos a una fuente y los servos a otra con mas potencia.
- Una vez terminados los pasos anteriores, dar energía al rover para encenderlo, abrir la aplicación descargada y seguir los pasos allí indicados para realizar la conexión Bluetooth con el rover.
- Ahora podrá controlar al rover para realizar exploraciones!

# Licencias:
- MIT.

# Equipo de trabajo:
- Cenci Heredia, Facundo Ariel.
- Guzmán Domínguez, Lucas Santiago.
- Roldan, Tiago.
