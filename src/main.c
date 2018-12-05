//  Copyright (c) 2018 Antoine Tran Tan
//

#include <ansi_c.h>
#include "my_header.h"

int main(void)
{  
char phrase[99] = "je mappelle Americo Lopes et j'ai 19 ans";
unsigned int age;
char prenom [99];
char nom [99]; 


	printf("inscrire le prenom");
	scanf("%s",prenom );
	
	printf("inscrire le nom");
	scanf("%s",nom );
	
	printf("age");
	scanf("%d",&age );
	
	
	sprintf(phrase,"je mappelle %s %s et j'ai %d ans", prenom,nom,age);
	sscanf(phrase,"%*s%*s%s%s%*s%*s%d%*s",prenom,nom,&age);
	return 0; 
}
