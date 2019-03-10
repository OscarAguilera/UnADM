//============================================================================
//
// DFPR_U2_EA_OSAH.c
//
//  Created on: Feb 24, 2019
//  Author:	Oscar Aguilera Huerta
//	UNADM
//	Ingenieria en Desarrollo de Software
//	Fundamentos de Programacion
//
//============================================================================

#include <io.h>
#include <stdio.h>
#include <string.h>
#include <conio.h>


int main()
{
    printf("Programa que lee un apellido y muestra los caracteres que tiene si es mayor que 6 \n");
    printf("Introduce el apellido a medir: ");
    char a[100];
        int i;
    scanf("%s", a);

    	for(i = 0; a[i] !='\0'; ++i);
    	if(i < 6){
    		printf("\n El apellido es menor a 6 ya que solo tiene:    %d\n" , i);
    	}
    	else {
    		printf("\n El Apellido tiene esta cantidad de caracteres    %d\n", i);
    	}
        getch();
    return 0;
}
