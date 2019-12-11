/*
 * main.c
 *
 *  Created on: 13.11.2019
 *      Author: Froemberg Raphael
 */


#include "huffman.h"

int main(void) {

	/* Char-Array mit Zeichen befüllen */
	char a[199] = "Currywurst";

	/* Huffman Funktion ausführen */
	huffmann(a);

	return 0;
}
