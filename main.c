//Book Inventory Program with Single linked list and Hashing 

#include<stdio.h>
#include<conio.h>
#define MaxSize 10

typedef struct {
	char kode[10];
	char jenis[50];
	char judul[255];
	char pengarang[100];
	char penerbit[100];
	int jumlah;
	struct buku *next;
}buku;

void welcomeMessage () {
	printf("\t\t\t\t\t\t\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\");
	printf("\n\t\t\t\t\t\t\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\");
	printf("\n\n\t\t\t\t\t\t////////         WELCOME TO BOOK INVENTORY PROGRAM         /////////");
	printf("\n\n\t\t\t\t\t\t\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\");
	printf("\n\t\t\t\t\t\t\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\");
	printf("\n\t\t\t\t\t\t			by : Kelompok 4A			");
	printf("\n\n\n\n\t\t\t\t\tPress any key to continue . . .");
	getch();
}

int hashCode (char kode[]) {
	//konversi kode ke ASCII
	int key = 0;
	for (int i=0; i<strlen(kode); i++) 
		key += kode[i];
	//return hash kode
	return key % MaxSize;
}



