/*
 ========================================================================================================================
 Name        : DFPR_U4_A1_OSAH.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Programa que permite ingresar un numero entero positivo por el teclado y cuenta cuantas cifras tiene
 ========================================================================================================================
 */

#include <io.h>
#include <stdio.h>
#include <string.h>
#include <conio.h>
#include <stdlib.h>

long long int main()
{
	char snum[100];
	int cifras =1;
	int num;


	printf( "\n   Introduzca un numero entero:   " );
	scanf( "%s", snum );
	num = atoi(snum);

	if (num != 0){
		while (num >= 10){
			num /= 10;
			cifras++;
		}
		printf	("\n El numero introducido tiene %d cifras ",  cifras);

	}
	else {
		printf ("\n Solo numeros enteros positivos \n ");
	}

	getch();
	return 0;

}
