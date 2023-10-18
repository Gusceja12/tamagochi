# include <stdio.h>
int main () {
// Constantes
const int MAX_ENERGIA = 100;
const int MAX_HAMBRE = 100;

// Variables
int energia = 50;
int hambre = 50;
char nombre[20];

// Funciones
void jugar(void) {
  int opcion;

  printf("¿Qué quieres hacer?\n");
  printf("(1)Jugar al parque\n");
  printf("(2)Jugar con un juguete\n");
  printf("(3)No jugar\n");
  scanf("%d", &opcion);

  switch (opcion) {
    case 1:
      energia += 20;
      break;
    case 2:
      energia += 10;
      break;
    case 3:
      break;
    default:
      printf("Opción no válida.\n");
      break;
  }
}


}

void comer(void) {
  int opcion;

  printf("¿Qué quieres comer?\n");
  printf("(1)Fruta\n");
  printf("(2)Comida rápida\n");
  printf("(3)No comer\n");
  scanf("%d", &opcion);

  switch (opcion) {
    case 1:
      hambre -= 20;
      energia += 10;
      break;
    case 2:
      hambre -= 10;
      break;
    case 3:
      break;
    default:
      printf("Opción no válida.\n");
      break;
  }
}

oid dormir(void) {
  int opcion;

  printf("¿Cuánto quieres dormir?\n");
  printf("(1)Siesta\n");
  printf("(2)Toda la noche\n");
  printf("(3)No dormir\n");
  scanf("%d", &opcion);

  switch (opcion) {
    case 1:
      energia += 30;
      break;
    case 2:
      energia += 50;
      break;
    case 3:
      break;
    default:
      printf("Opción no válida.\n");
      break;
  }
}