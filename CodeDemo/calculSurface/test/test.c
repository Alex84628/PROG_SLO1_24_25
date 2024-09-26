//-----------------------------------------------------------------------------------//
// Nom du projet 		: test
// Nom du fichier 		: test
// Date de cr�ation 	: 19.09.2024
// Date de modification : 20.09.2024
//
// Auteur 				: Alexandre Rabald
//
// Version				: 0.x (premier gros changement deuxieme petit changement)
//
// Description          : Programme pour calculer plusieurs surface diff�rente.
//
//
// Remarques :
//----------------------------------------------------------------------------------//

//appel de librairie
#include <math.h>
#include <corecrt_math_defines.h>

//utilisation define
#define _USE_MATH_DEFINES

//appel de headerfill
//prototype ATTANTION a eviter ici

//d�claration des variables globale ATTANTION a eviter ici 

//d�claration des constante ATTANTION a eviter ici

//d�claration des fonctions

//fonction principale main
//type_de_sortie nom_fct (param_entr�e1, param_entree2, ....)
void main() 
{
	//d�claration des variables
	int longueur_m = 0, largeur_m = 0, rayon_m = 0;

	//type reel
	float surfaceCarre_m2 = 0;
	float surfaceRectangle_m2 = 0;
	float surfaceTriangle_m2 = 0;
	float surfaceCercle_m2 = 0;

	double PI = M_PI;
	//calcule carr�
	surfaceCarre_m2 = largeur_m * 2;
	//Printf(surfaceCarre_m2);
	//calcule rectangle
	surfaceRectangle_m2 = largeur_m * largeur_m;
	//Printf(surfaceRectangle_m2);
	//calcule triangle
	surfaceTriangle_m2 = (largeur_m * largeur_m) / 2;
	//Printf(surfaceTriangle_m2);
	//calcule Cercle
	surfaceCercle_m2 = (rayon_m * rayon_m) * PI;
	//Printf(surfaceTriangle_m2);
}
