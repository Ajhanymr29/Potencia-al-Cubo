/* Programa: De número a letras */
#include <stdio.h>
#include <conio.h>


int main()
{
    int num, x, cubo;

    printf( "\n   Digita un numero: ", 163 );
    scanf( "%d", &num );


    if ( num == 15){
        printf("QUINCE");

        }else if (num !=15){
        printf("%d", pow(num, 3));
        cubo=num*num*num;
        printf( "\n   El calculo de la pontencia al cubo es %d ", cubo );

        }
    return 0;
}
