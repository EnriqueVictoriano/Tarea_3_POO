# Tarea_3_POO

# Tarea de implementación de sistema de seguridad

Este proyecto consiste en la implementación de un sistema de seguridad utilizando C++ y Qt Creator. El sistema incluye puertas, ventanas, una central y la posibilidad de agregar una sirena. A medida que avanzas en las etapas, se van agregando funcionalidades y se introduce una interfaz gráfica.

## 1 Primera Etapa: Sólo puertas (sin interfaz gráfica)

En esta etapa, el programa se ejecuta sin una interfaz gráfica y sigue un paradigma no conducido por eventos. El archivo de configuración se lee para obtener los datos iniciales y el programa realiza invocaciones a cada puerta para abrirla y cerrarla. Los sensores de puerta muestran su estado por consola después de cada cambio.

## 2 Segunda Etapa: Puertas y ventanas más la Central (sin interfaz gráfica ni sirena)

En esta etapa, se agregan las ventanas al sistema. El programa sigue sin interfaz gráfica y se abren y cierran todas las puertas y ventanas. Los sensores muestran su estado por consola y la Central verifica todas las zonas. La Central muestra un mensaje indicando si alguna zona está abierta.

## 3 Tercera Etapa: Puertas y ventanas más la Central (con interfaz gráfica sin sirena)

En esta etapa, se implementa una interfaz gráfica utilizando Qt Creator. Las puertas y ventanas se pueden abrir y cerrar al presionar y soltar el botón izquierdo del mouse sobre ellas. La Central verifica el estado de los sensores cada 200 ms y muestra un mensaje en caso de que alguna zona esté abierta.

## 4 Cuarta Etapa: finalización del sistema de seguridad

En esta etapa, se cumple con todos los requisitos y especificaciones de la tarea. Se incluyen los botones de la central, su display y la sirena.

## Instrucciones de ejecución

1. Abre el proyecto en Qt Creator.
2. Configura el archivo de configuración con los datos iniciales del sistema.
3. Compila el proyecto en Qt Creator.
4. Ejecuta el programa resultante.
5. Sigue las indicaciones en consola o en la interfaz gráfica para interactuar con el sistema de seguridad.

## Requisitos del sistema

-- Qt Creator 5.1 o superior.
-- Compilador de C++ compatible.



