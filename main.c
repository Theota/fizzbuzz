#include <stdlib.h>
#include <stdio.h>
#include <string.h>


#define MODULO_DEUX(nombre) ((nombre%2==0) ? "Pim" : "") // nombre prend la valeur Pim s'il est divisible par 2
#define MODULO_TROIS(nombre) ((nombre%3==0) ? "Pam" : "") // nombre prend la valeur Pam s'il est divisible par 3
#define MODULO_CINQ(nombre) ((nombre%5==0) ? "Poum" : "") // nombre prend la valeur Poum s'il est divisible par 5
#define MODULO_RIEN(nombre) (((nombre%2!=0) && (nombre%3!=0) && (nombre%5!=0)) ? 1 : (0) ) // nombre prend la valeur 1 s'il est divisible ni par 2 ni 3 ni 5

/* Theo Tardy */

int main()
{
    int nombre=11;

   for (nombre = 1; nombre < 100; nombre++)
   {
       if (MODULO_RIEN(nombre)==1){printf("%d\n",nombre);}else{printf("%s%s%s\n",MODULO_DEUX(nombre),MODULO_TROIS(nombre),MODULO_CINQ(nombre));}
   }

    return 0;
}