//  Copyright (c) 2018 Antoine Tran Tan
//

#include "my_header.h"
#include "TP_lib_suite.h"

		unsigned char lotowin[6]={11,34,7,12,31,5};
		unsigned char lotojoueur[6]={5,34,27,2,31,3};
        unsigned char lotowinrandom[6]={1,2,3,4,5,6};

void verif (unsigned char lotowin[6],unsigned char lotojoueur[6]);
void verif_random (unsigned char lotowinrandom[6],unsigned char lotojoueur[6]);
void verif_random100 (unsigned char lotowinrandom[6],unsigned char lotojoueur[6]);

   unsigned char rendu=0;
   unsigned char i,b,r;
   int val_egal=0;
   int val_egal1=0;
   int val_egal100=0;


int main(void)
{

verif(lotowin,lotojoueur);
verif_random(lotowinrandom,lotojoueur);
//verif_random100(lotowinrandom,lotojoueur);
	
    return 0;
}


void verif_random100 (unsigned char lotowinrandom[6],unsigned char lotojoueur[6])
{
	initialiserTirage();
   for (i=0 ; i<100; i++){
   		for (r=0 ; r<6; r++){
			lotojoueur[r];
			
	   		for (b=0 ; b<6; b++){
			rendu =  tirerNumero ();			 // appel de fonction pas toucher NB 
	    	lotowinrandom[b] = rendu ;
				if(lotowinrandom[b]==lotojoueur[r])
		   	{
		    val_egal100 = val_egal100 + 1;
		    	}
			}
        }
    }
}

void verif_random (unsigned char lotowinrandom[6],unsigned char lotojoueur[6])
{
	initialiserTirage(); 
for (i=0 ; i<6; i++){	
		lotojoueur[i];
	 for(b=0; b<6; b++){
	rendu =  tirerNumero ();			 // appel de fonction pas toucher NB 
	lotowinrandom[b] = rendu ;
		if(lotowinrandom[b]==lotojoueur[i]) {
		 val_egal1 = val_egal1 + 1; 	
	}
	 }
	
}
}



void verif ( unsigned char lotowin[6],unsigned char lotojoueur[6])
{
  for (i=0 ; i<6; i++){
	  lotojoueur[i];
	  
  for(b=0; b<6; b++){
	  lotowin[b];
		  if(lotowin[b]==lotojoueur[i])
		  {
		    val_egal = val_egal + 1;
		  }
  }
	  
	  
  }
}
