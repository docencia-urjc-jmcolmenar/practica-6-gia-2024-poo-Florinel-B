//
// Created by florin on 19/04/24.
//
#define MAX_CHAR 30
#ifndef PRACTICA_6_GIA_2024_POO_FLORINEL_B_PERSONA_H
#define PRACTICA_6_GIA_2024_POO_FLORINEL_B_PERSONA_H
enum tipoContacto {
    FAVORITO,
    CONOCIDO,
    TRABAJO
};

class persona {
private:
    char nombre[MAX_CHAR];
    char apellido[MAX_CHAR];
public:
    char *toString();
    persona(char nombre, char apellido);
    persona.toString;

};


#endif //PRACTICA_6_GIA_2024_POO_FLORINEL_B_PERSONA_H
