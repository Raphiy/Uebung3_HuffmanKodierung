/*
 * main.c
 *
 *  Created on: 13.11.2019
 *      Author: Froemberg Raphael
 */


#include "huffman.h"

int main(void) {

	/* Char-Array mit Zeichen bef�llen */
	char a[199] = "Currywurst";

	/* Huffman Funktion ausf�hren */
	huffmann(a);

	return 0;
}
