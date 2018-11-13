/****************************************************
*                                                   *
*  TP_lib  pour les premiers Th�mes G�nie Logiciel  * 
*													*
*****************************************************
Auteurs : S. Moutault - A. Priou
Version : 16/11/11  V3.2 (A. Priou)
Fichier : TP_lib.h
*****************************************************/

/* Attention : aucune fonction de saisie n'est blindee contre les erreurs de manipulation */

/*------------------------------- max d'entiers ----------------------------------------------*/

long int  calculer_max_2_entiers ( long int a, long int b ) ;

/*----------------------------- calcul d'une remise ------------------------------------------*/

double saisir_montant ( void ) ;   /* pour la saisie d'un montant d'achat */

void afficher_remise ( double montant_final, double remise );  
	/* 1er argument = montant APRES d�duction de la remise - 2eme argument = remise a deduire */


/*------------------------------ lancer de de ------------------------------------------------*/

short int LancerDe (void);	/* retourne un nombre al�atoire compris entre 1 et 6 */
							/* permet de simuler le lancer d'un d� */


/*-------------------------cryptage par entrelacement-----------------------------------------*/

long int  extraire_un_chiffre ( long int Nbre , long int PositionChiffre ) ;   
		/* renvoie le chiffre de Nbre dont le rang est PositionChiffre */

#ifdef AGNES_VERSION 
long int inserer_un_chiffre( long int Chiffre, long int Nbre , long int Position );
	/* insere le chiffre dans Nbre au rang Position (sans toucher aux autres chiffres de Nbre),
	puis renvoie le nombre ainsi compl�t�. La position indiquee est supposee 
	etre "libre" dans Nbre (cad occupee par un chiffre nul par defaut). */          

#else  /*AGNES_VERSION*/
long int inserer_un_chiffre( long int Nbre , long int Chiffre, long int Position );
	/* ins�re le chiffre dans Nbre au rang Position (sans toucher aux autres chiffres de Nbre),
	puis renvoie le nombre ainsi compl�t�. La position indiqu�e effac�e au pr�alable. */     
#endif

/*-----------------------------  diverses fonctions du TD GL2 -----------------------------------*/
						
int essayerCode(unsigned short code);  /* renvoie 1 si le code fourni en argument est le bon, 0 sinon */

void afficherCodeAcces(unsigned short code);  /* affiche le code fourni en argument */

/*-------------------------------------------------------------------------------------------*/

unsigned char lirePortA(void); 	/* simule la lecture du port A avec le clavier :
								renvoie le code ASCII de la touche appuy�e si une touche est enfonc�e 
								au clavier (sans attente), renvoie 0 si aucune touche n'est appuy�e */

void allumerLed1(void);		/* simule l'affichage d'une LED avec un message � l'�cran */ 

void attendreSec(long sec); /* attente */

void ecrirePortA(unsigned char val);  /*simule l'�criture sur le port A via affichage �cran*/ 

void afficherChiffre(short chiffre) ;  /*affiche un chiffre hexa*/

/*-------------------------------------------------------------------------------------------*/

int testerNombre(long nombre);	/* renvoie -1 (inf), 0 (egal) ou 1 (sup) selon la position
								de nombre par rapport au nbre � deviner */

void afficherNbTentatives(long nbTentatives);

/*-------------------------------------------------------------------------------------------*/

//int estBissextile(unsigned long annee);

void afficherJour(unsigned long date, unsigned short jour); /* Si on lui fournit 
															date=17022006 (17 f�vrier 2004) et jour=3 (mercredi), 
															cette fct affiche :
															"Le 17 f�vrier 2006 est un mercredi" */

