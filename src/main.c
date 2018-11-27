//  Copyright (c) 2018 Antoine Tran Tan
//

#include "my_header.h"
#include "TP_lib_suite.h"
		unsigned char lotowin[6]={11,34,7,12,31,5};
		unsigned char lotojoueur[6]={5,34,27,2,31,3};
void verif (unsigned char lotowin[6],unsigned char lotojoueur[6]);

   int i,n;
   int val_egal=0;


int main(void)
{

verif(lotowin,lotojoueur);
	
    return 0;
}


void verif ( unsigned char lotowin[6],unsigned char lotojoueur[6])
{
  for (i=0 ; i<6; i++){
	  
  for(n=0; n<6; n++){
		  if(lotowin[i]==lotojoueur[n])
		  {
		    val_egal = val_egal + 1;
		  }
  }
	  
	  
  }
}
