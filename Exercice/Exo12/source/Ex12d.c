// Canevas  Ex 12D  C. HUBER 

#include <stdio.h>
#include <string.h>	// pour strcpy

// typedef pour Q1
typedef struct {
	int nombre;
	short int TabQ1[4];
} S_dataQ1;

// typedef pour Q2
typedef struct {
	unsigned char B;
	unsigned char G;
	unsigned char R; 
} S_RGB;

typedef struct {
	char colorName[12];
	struct { 
		     unsigned int codeRGB;
	         S_RGB struRGB;
	       } dataColor;
} S_DefColor;

// Fonction SetColor 
void SetColor(S_DefColor *pDefColor, char *ColorName, S_DefColor dCol) 
{

}

// Fonction DispColor 
void DispColor(S_DefColor *pDefColor) 
{

}





int main (void)
{
	// Q1
	// a) D�claration de TabStru1 (5 �l�ments du type S_dataQ1)
	

	// Q2
	// a) D�claration de TabStru2 (3 �l�ments du type S_DefColor)
	//    Declaration de Rouge du type S_RGB  init avec   0,   0, 255
	//    Declaration de Green du type S_RGB  init avec   0, 255,   0	
	//    Declaration de Bleu  du type S_RGB  init avec 255,   0,   0

	// Affichage du titre
	printf("Exercice 12D, Prenom Nom \n");

		

	// Test Q1
	printf("*** Test Q1 **** \n");
	// b) Attribution de la valeur 431 au champ nombre du 1er �l�ment du tableau TabStru1
	
    // c) Attribuez la valeur 178 au 2�me �l�ment du champ TabQ1 pour le 3�me �l�ment tableau TabStru1
	
	// d) Affichez la valeur du champ nombre du 1er �l�ment et 
	//    la valeur du 2�me �l�ment du champ TabQ1


	// Test Q2
	printf("*** Test Q2 **** \n");
	// pour les 3 �l�ments de TabStru2
	// appel de SetColor (1er  �l�ment, "Rouge", Rouge)
	// appel de SetColor (2eme �l�ment, "Vert", Green)
	// appel de SetColor (3eme �l�ment, "Bleu", Bleu)

	// pour les 3 �l�ments de TabStru2
	// appel de DispColor avec l'adresse du 1er, 2�me et 3�me �l�ment

	return (0);
}