//
// Created by florin on 19/04/24.
//
#include <cstring>
#include "persona.h"

persona::persona(char nombre, char apellido) {

}

char *persona::toString (){
    char *buf = new char[3*MAX_CHAR];
    strcpy(buf,nombre);
    strcpy(buf,";");
    strcpy(buf,apellido);

    return buf;
}

