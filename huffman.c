/*
 * huffman.c
 *
 *  Created on: 02.12.2019
 *      Author: Froemberg Raphael
 */

#include "huffman.h"

void huffmann(char word[]) {
	int current_char;
	int count[256];

	/* Komplettes Char-Array mit Nullen füllen */
	for (int i = 0; i < 256; i++) {
		count[i] = 0;
	}

	/* Für jeden Buchstaben im Array word, wird der integer davon in current_char gesetzt und die Anzahl in count +1 addiert  */
	for (int i = 0; i < strlen(word); i++) {
		current_char = (int) word[i];
		count[current_char]++;
	}

	/* Ausgabe des Chars und des dazugehörigen Counts */
	for (int a = 1; a < 10; a++) {
		for (int i = 0; i < 256; i++) {
			if (count[i] == a) {
				printf("%c   %d\n", (char) i, count[i]);
			}
		}
	}
}
