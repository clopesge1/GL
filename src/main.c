//  Copyright (c) 2018 Antoine Tran Tan
//

#include <ansi_c.h>
#include "my_header.h"
#include "TP_lib.h"

short int LancerDe (void);
			  unsigned char score=0;
			  short resultat=0;
			  
void main (void)
{
	  	srand(time(NULL));
		 while(resultat!=1)
		{
		resultat = LancerDe();
		if(resultat==4)
		{
			score=score+resultat;
		}
		
		else if(resultat==6)
		{
			score=score+resultat;
		}
		
		else if(resultat==2)
		{
			score=score+resultat;
		}
		
		else if(resultat==3)
		{
			score = score*2;
		}
		
		else if(score==5)
		{
			score = score-2;
		}
		else {}
		
		
		 
		}

          printf ("score final :%d",score);
		  score= score+0;

}
