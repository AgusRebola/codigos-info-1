#include <stdio.h>
// Operadores
// Realizar un programa que determine si el caracter ingresado es un número o una letra.
// Ayuda:buscar “tabla ASCII”

int main(void) {

  char caracter;

  printf("Ingrese el caracter: ");
  scanf("%c", &caracter);


  if (caracter >= 48 && caracter <= 57){
    printf("El caracter es un número\n");
  } else if (caracter >= 65 && caracter <= 90) {
    printf("El caracter es una letra\n");
  } else if (caracter >= 97 && caracter <= 122) {
    printf("El caracter es una letra\n");
  }

  return 0;
}
