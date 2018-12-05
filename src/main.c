//  Copyright (c) 2018 Antoine Tran Tan
//

#include <ansi_c.h>
#include "my_header.h"

int main(void)
{  
char nom_fig[80];	
char nb_pts[80];

char nom_figpenta[80];	
char nb_ptspenta[80];

int x[5];
int y[5];

int x2[5];
int y2[5];

char ligne1 [80] = "nom: triangle_A";
char ligne2 [80] = "nb points: 3";
char ligne3 [80] = "cordonnees: 10 20 30 20 30 40 -1 -1 -1 -1";

sscanf(ligne1,"%*s %s",nom_fig);
sscanf(ligne2,"%*s %*s %s",nb_pts);
sscanf(ligne3,"%*s %d %d %d %d %d %d %d %d %d %d",&x[0], &y[0], &x[1], &y[1], &x[2], &y[2], &x[3], &y[3], &x[4], &y[4]);

printf(" \n la figure %s possede %s sommets ",nom_fig,nb_pts);

char penta1 [80] = "nom: pentagone_B ";
char penta2 [80] = "nb points: 5";
char penta3 [80] = "cordonnees: 10 20 30 20 30 40 43 53 35 65"; 

sscanf(penta1,"%*s %s",nom_figpenta);
sscanf(penta2,"%*s %*s %s",nb_ptspenta);
sscanf(penta3,"%*s %d %d %d %d %d %d %d %d %d %d",&x2[0], &y2[0], &x2[1], &y2[1], &x2[2], &y2[2], &x2[3], &y2[3], &x2[4], &y2[4]);

printf(" \n la figure %s possede %s sommets ",nom_figpenta,nb_ptspenta);
  
	return 0;
}
