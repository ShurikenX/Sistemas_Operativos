/*
Autores:
  Benitez Morales Manuel Emilio.
  Crixo
  Molina

  2CM8

Fecha: 28 de Noviembre 2019.
Descripción: PROYECTO FINAL, mini bash.
Entrada: Comandos similares al bash de UNIX como cadenas de caracteres.
Salida: Ejecución de las funciones de cada comando utilizando los temas vistos durante el curso.
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>



void ejecutarComando(char comando[]){
    system(comando);
}

int main(){
  char comando[100];
  while(strcmp(comando, "exit")!=0){
    printf("mini-bash>");
    fgets(comando,100,stdin);
    ejecutarComando(comando);
  }
  return 0;
}
