# ETAPAS DE LA COMPILACIÓN EN C/C++


## 1._ Preprocesador
Procesa directivas como #include, #define, elimina comentarios, etc.

***Archivo generado***
.i → C preprocesado
.ii → C++ preprocesado

No se genera por defecto

***Cómo generarlo?*** 
en el bash
g++ -E hola.cpp > hola.i



## 2._ Compilación
Transforma el código c/c++ en lenguaje ensamblador (assembler) propio del
procesador de nuestro ordenador.

***Archivo generado***
.s → código ensamblador

Tampoco se genera por defecto

***Cómo generarlo?*** 
en el bash
g++ -S hola.cpp



## 3._ Ensamblado
Transforma el programa de lenguaje ensamblador a código objeto que consiste 
en un archivo binario (ceros '0' y unos '1') en lenguaje de máquina 
ejecutable por el procesador; este código aún no es el ejecutable final.

***Archivo generado***
.o → objeto (Linux / macOS)
.obj → objeto (Windows / MSVC)

***Cómo generarlo?*** 
en el bash
g++ -c hola.cpp



## 4._ Enlazado
Funciones de C/C++ como printf(), cout, etc se encuentran ya compiladas y
ensambladas en bibliotecas existentes en el sistema. Es preciso incorporar
de algún modo el código binario de estas funciones a nuestro ejecutable.
En esto consiste la etapa de enlace, donde se reúnen uno ó más módulos en 
código objeto con el código existente en las bibliotecas, generándose asi
el archivo ejecutable final.

***Archivo generado***
a.out (Linux/macOS por defecto)
.exe (Windows)
ejecutable ELF / PE / Mach-O

***Cómo generarlo?***  
en el bash
g++ hola.o -o hola



## Nota
Headers (caso especial)
Archivos
.h
.hpp

Etapa
NO se generan
Son entrada del preprocesador
Solo contienen declaraciones, no binarios

## Detalles importantes que pocos explican

.h no se compila solo
.o no es ejecutable
.i y .s son temporales
el linker no entiende C++, solo símbolos

## Tabla de resúmen
Suponiendo que el nombre del archivo se llama 'hola'

|     etapa      |        que pasa        |   archivo generado   |          como generarlo           |
|----------------|------------------------|----------------------|-----------------------------------|
|     Fuente     |     código humano      |   .cpp    .c         |                                   |
|  Preprocesado  |  procesa directivas    |   .i     .ii         |    g++ -E hola.cpp > hola.i       |
|  Compilación   |  traduce a assembler   |       .s             |    g++ -S hola.cpp                | 
|  Ensamblado    |  assembler -> máquina  |   .o     .obj        |    g++ -c hola.cpp                |
|    Enlazado    |      une objetos       |   .exe    a.out      |    g++ hola.o -o hola             |
|    Headers     |     declaraciones      |   .h     .hpp        |                                   |