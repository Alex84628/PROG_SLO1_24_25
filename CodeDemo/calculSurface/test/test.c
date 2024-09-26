//-----------------------------------------------------------------------------------//
// Nom du projet 		: test
// Nom du fichier 		: test
// Date de création 	: 19.09.2024
// Date de modification : 20.09.2024
//
// Auteur 				: Alexandre Rabald
//
// Version				: 0.x (premier gros changement deuxieme petit changement)
//
// Description          : Programme pour calculer plusieurs surface différente.
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

//déclaration des variables globale ATTANTION a eviter ici 

//déclaration des constante ATTANTION a eviter ici

//déclaration des fonctions

//fonction principale main
//type_de_sortie nom_fct (param_entrée1, param_entree2, ....)
void main() 
{
	//déclaration des variables
	int longueur_m = 0, largeur_m = 0, rayon_m = 0;

	//type reel
	float surfaceCarre_m2 = 0;
	float surfaceRectangle_m2 = 0;
	float surfaceTriangle_m2 = 0;
	float surfaceCercle_m2 = 0;

	double PI = M_PI;
	//calcule carré
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
