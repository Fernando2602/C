#include<stdio.h>

int main(){
  int f, c;
  float promedioA = 0, promedioU = 0;

  printf("Introduce el numero de filas: ");
  scanf("%d", &f);

  printf("Introduce el numero de columnas: ");
  scanf("%d", &c);

  int datos[f][c];

  for (int count = 0; count < f; count++){
    for (int count2 = 0; count2 < c; count2 ++){
      printf("Introduce el valor en la fila %d, en   la columna %d: ", count, count2);
      scanf("%d", &datos[count][count2]);
    }
  }

  printf("Los valores introducidos fueron: \n");
  for (int count = 0; count < f; count++){
    for (int count2 = 0; count2 < c; count2 ++)
      printf("%d ", datos[count][count2]);

    printf("\n");
  }

  printf("\n");

  for (int count = 0; count < f; count++){
    for (int count2 = 0; count2 < c; count2++)
      promedioA += datos[count][count2];

    promedioA = (float)promedioA/c;
    printf("El promedio del alumno %d fue: %.2f", count + 1, promedioA);
    printf("\n");
    promedioA = 0;

  }

  for (int count = 0; count < c; count++){
    for (int count2 = 0; count2 < f; count2++)
      promedioU += datos[count2][count];

    promedioU = (float)promedioU/f;
    printf("El promedio de la unidad %d fue: %.2f", count + 1, promedioU);
    printf("\n");
    promedioU = 0;
  }

  return 0;
}
