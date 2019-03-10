//============================================================================
//
// DFPR_U3_A2_OSAH.c
//	Calculadora
//  Created on: Feb 25, 2019
//  Author:	Oscar Aguilera Huerta
//	UNADM
//	Ingenieria en Desarrollo de Software
//	Fundamentos de Programacion
//
//============================================================================

#include <stdio.h>
#include <stdlib.h>

int main()
{
    char continuar;
    int i, x;

    do
    {
        printf( "\n   Introduzca un n%cmero entero del 1 al 10: ", 1 );
        scanf( "%d", &x );

        if(x>0){
        	printf( "\n   La tabla de multiplicar del %d es:\n", x );

        	        for ( i = 1 ; i <= 10 ; i++ )
        	            printf( "\n   %d * %d = %d", x, i, x * i );
        }

        printf( "\n\n   %cDesea ver otra tabla (s/n)?: ", 168 );
        fflush( stdin );
        scanf( "%c", &continuar );

    } while ( continuar != 'n' );

    return 0;
}