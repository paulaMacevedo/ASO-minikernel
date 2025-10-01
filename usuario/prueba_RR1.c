/*
 * usuario/prueba_RR1.c
 *
 *  Minikernel. Versi�n 1.0
 *
 *  Fernando P�rez Costoya
 *
 */

/*
 * Programa de usuario que realiza una prueba del round-robin usando
 * procesos que hacen muchas llamadas al sistema.
 */

#include "servicios.h"
#include <stdio.h>

int main(){
	int i;

	printf("prueba_RR1: comienza\n");

	for (i=1; i<=5; i++)
		if (crear_proceso("yosoy")<0)
			printf("Error creando yosoy\n");
	

	printf("prueba_RR1: termina\n");
	return 0; 
}
