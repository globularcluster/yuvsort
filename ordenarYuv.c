/*
 * Autor: Wagner F o Jr
 * Algoritmos e Estruturas de Dados I
 * Aula 7, Exercicio 1
 */

#include <stdlib.h>
#include <stdio.h>

 typedef struct 
 {
 	unsigned char Y;
 	unsigned char Cb;
 	unsigned char Cr;
 } pixel;

 int main (int argc, char *argv[])
 {
	int i, j;

	pixel **vetor = (pixel **) malloc(sizeof(pixel *) * 256);
	for (i = 0; i < 256; ++i)
		vetor[i] = (pixel *) malloc(sizeof(pixel) * 256);


	if (argc != 2) {
		printf("Utilizar: %s <arquivo_de_entrada>", argv[0]);
		return EXIT_FAILURE;
	}

  // Abra o arquivo e lê a primeira linha, que indica o total de elemntos do vetor
	FILE *fp;
	fp = fopen(argv[1], "r");
	if (fp == NULL) {
		perror("Error");
		return EXIT_FAILURE;
	}

	for (i = 0; i < 256; ++i)
	{
		for (j = 0; j < 256; ++i)
		{
			fscanf(fp, "%c", &vetor[i][j].Y);
		}
	}

	for (i = 0; i < 256; ++i)
	{
		for (j = 0; j < 256; ++i)
		{
			fscanf(fp, "%s", &vetor[i][j].Cb);
		}
	}	

	for (i = 0; i < 256; ++i)
	{
		for (j = 0; j < 256; ++i)
		{
			fscanf(fp, "%s", &vetor[i][j].Cr);
		}
	}

	for (i = 0; i < 256; ++i)
	{
		for (j = 0; j < 256; ++i)
		{
			printf("%s", &vetor[i][j].Cr);
		}
	}
	fclose(fp);
	free(vetor);
	return 0;
 }