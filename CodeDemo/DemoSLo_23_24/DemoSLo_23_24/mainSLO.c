//-----------------------------------------------------------------------------------//
// Nom du projet 		: DemoSlo23_24
// Nom du fichier 		: mainSLO.c
// Date de cr�ation 	: 21.09.2023
// Date de modification : 12.10.2023
//
// Auteur 				: Philou (Ph. Bovey)
//
// Description          : fichier source d�mo SLO
//
// Remarques 			: lien pour la table ASCII :	-> http://www.asciitable.com/
//						  lien pour la fct sizeof : 	-> https://www.geeksforgeeks.org/sizeof-operator-c/
//						  								ATTENTION -> sizeof est une fct, elle retourne quelque chose 
//						
// Th�orie 				: voir les chapitres 1 / 2 / 3 / 4 / 5
//----------------------------------------------------------------------------------//
//-- d�lcaration des libraires syst�mes --// 
#include <stdio.h>				// lib standard pour les entr�e sortie 
#include <stdint.h> 			// lib standard sur les entiers 

//-- d�claration des librairies personnelles --// 
#include "MesFonctions.h"

//-- d�claration globale d'une �num�ration (type) => vision uniquement dans ce source --// 
enum e_Etat1 {INIT = 10, EXECUT = 100, WAIT}; 

// fonction main -> point d'entre� 
void main()
{
	
	//-- d�claration variable 
	int resultat;		// pour la sortie fct addition 
	int val1 = 1, val2 = 2, val3 = 5;		// valeur entree fct addition 
	char car = 'A'; 

	// utilisation d'�num�ration avec initialiation
	enum e_Etat1 maMachineEtat = INIT; 
	e_Etat2 maMachineEtat2 = IDLE; 
	
	int8_t demo = 7;  // �criture en hexa 0x0A; 0xA;  0xFA 
					  // �criture en octal 07 
					  // �criture en binaire : 0b1010  
	
	float demo2 = 3.14; 
	
	resultat = sizeof(demo);  // param�tre d'entr�e -> nom d'une variable / constante ; une constante num�rioque ; un type 

	// -- initialiation 
	val1 = val2 +1 + val3; 


	//appel de fonction 
	printf("hello SLO 1"); // affichage d'une chaine de caract�re 
	printf("%c", car);
	//printf('A');    // putc / putchar ; 

	//appel de la fct addition 
	// int AdditionnerDeuxValeurs(int valeur1, int valeur2); 
	resultat = AdditionnerDeuxValeurs(val1, val2);

	// condition ou test 
	if(val1 != val2) { /* instruction */ }  // ATTENTION A NE PAS FAIRE 
	
	if(val1 != val2) 
	{
		if(maMachineEtat == EXECUT)
		{
			
		}
	
	
	
	// condition 1 -> test�e -> si fausse -> condition 2 
	// -> si vrai uniquement condition 1 
	if(val1 != val2)
	{
		val3 = val1; 
	}
	// condition 2 -> si fausee -> condsition 3 
	if else (val1 <= val2)
	{
		val2 = val3; 
	}
	// condition 3-> 
	else 
	{
		val3 = val2; 
	}

	if(val1 != val2)
		val3 = val1; 

	if (val1 <= val2)
		val2 = val3; 

	if((val1 != val2) && (val1 <= val2))
	{
		
	}

	//-- structure d'une machine d'�tat 
	switch(maMachineEtat)
	{
		case INIT: 
			break; 
			
		case EXECUT: 
			break; 	
		
		case WAIT: 
			break; 		

		default :
			break; 
	}
}