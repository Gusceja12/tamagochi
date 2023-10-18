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

void dormir(void) {
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

void ver_estado(void) {
  printf("Energía: %d\n", energia);
  printf("Hambre: %d\n", hambre);
}

// Programa principal
int main(void) {
  int opcion;

  // Solicitamos el nombre del Tamagochi
  printf("¿Cómo quieres llamar a tu Tamagochi?\n");
  scanf("%s", nombre);

  // Bucle principal
  while (1) {
    // Imprimimos el menú
    printf("** Menú **\n");
    printf("(1)Jugar\n");
    printf("(2)Comer\n");
    printf("(3)Dormir\n");
    printf("(4)Ver estado\n");
    printf("(5)Salir\n");
    scanf("%d", &opcion);

    // Procesamos la opción seleccionada
    switch (opcion) {
      case 1:
        jugar();
        break;
      case 2:
        comer();
        break;
      case 3:
        dormir();
        break;
      case 4:
        ver_estado();
        break;
      case 5:
        printf("¡Adiós, %s!\n", nombre);
        return 0;
      default:
        printf("Opción no válida.\n");
        break;
    }

    // Actualizamos el estado del Tamagochi
    energia -= 5;
    hambre -= 5;

    // Si el Tamagochi muere, terminamos el programa
    if (energia <= 0 || hambre <= 0) {
      printf("¡Tu Tamagochi ha muerto!\n");
      return 0;
    }
  }

  return 0;
}
}
