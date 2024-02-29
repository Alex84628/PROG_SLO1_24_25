//-----------------------------------------------------------------------------------//
// Nom du projet 		: DemoSlo23_24
// Nom du fichier 		: MesFonctions.h
// Date de cr�ation 	: 21.09.2023
// Date de modification : 12.10.2023
//
// Auteur 				: Philou (Ph. Bovey)
//
// Description          : fichier source d�mo SLO
//
// Remarques 			: 
//						
// Th�orie 				: voir le chapitre 1 / 2 / 3 / 4 
//----------------------------------------------------------------------------------//

#ifndef MES_FONCTIONS_H  // g�n�ralement nom du fichier headerFile 
#define MES_FONCTIONS_H

//-- d�claration �num�ration => vision dans diff�rents fichiers sources --// 
typedef enum { IDLE, CANCEL, RESET } e_Etat2; 

//-- d�claration d'un type structure
typedef struct 
{
	char *ptChar; 
	double dataReel; 
	e_Etat2 monEnum; 
} str_structureDemo2; 

typedef struct
{
	char A; 
	short B; 
	int C; 
} str_demo3;

typedef struct
{
	str_demo3 A1; 
	str_demo3 A2; 
} str_demo4;

typedef struct  			
{
	char start:1; 
	char data; 
	char parite:1; 
	char stop:1; 
}str_exempleTrame; 




typedef union
{
	// 4 octets
	struct
	{
		char start;
		char data;
		char parite;
		char stop;
	}str_exempleStr; 
	int envoiReception; 	
} u_demoTrame1; 
	



//-- d�claration de prototype --// 
int AdditionnerDeuxValeurs(int valeur1, int valeur2); 

void FctDATA(short *ptDemo, int tailleTB); 


#endif