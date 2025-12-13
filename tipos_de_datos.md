# Tipos de datos

## 1.- Fundamentales

|  modificador   |     tipo     |      tamaño     |                               rango                              |
|----------------|--------------|-----------------|------------------------------------------------------------------|
|                |     char     |      1 byte     |     -128 a 127 con signo     /        0 a 255 sin signo          |
|                |   boolean    |      1 byte     |                       0 o 1 (true o false)                       |
|    short       |      int     |      2 bytes    |    -32768 a 32767 con signo     /      0 a 65535 sin signo       |
|                |      int     |      4 bytes    | -2147483648 a 2147483647 con signo  /  0 a 4294967295 sin signo  |
|     long       |      int     |    4 o 8 bytes  |                        depende del sistema                       |
|   long long    |      int     |      8 bytes    |         ±9.22 × 10¹⁸ con signo  /    0 a (2⁶⁴ - 1) sin signo     |
|                |     float    |      4 bytes    |                    -3.4e -38 a 3.4e +38                          |
|                |    double    |      8 bytes    |                    2.22e -308 a 1.79e +308                       |
|     long       |    double    |   8 o 16 bytes  |                        depende del sistema                       |
|                |     void     |                 |                                                                  | 

## 2.- Derivados

punteros, referencias, arrays, funciones, puntero a función.

## 3.- Definidos por el usuario

struct, class, union, enum

## 4.- STL (Standard Template Library)

vector, array, string, map, set, list, deque, etc.