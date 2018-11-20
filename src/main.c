//  Copyright (c) 2018 Antoine Tran Tan
//

#include "my_header.h"
#include "stdlib.h"
#define seuil 5
#define seuilh 200
#define seuilb -100
void bin_tab(void); 
unsigned char bin[10]={0,1,2,3,4,5,6,7,8,9};
unsigned char sat[10]={0,1,2,3,4,5,6,7,8,9};
int i;
int main(void)
{
	bin_tab();
	
    return 0;
}




	void bin_tab(void)
	{
	for (i=0 ; i>9; i++);
	if (bin[i]>seuil)
	{
		
		bin[i]=1;  }
	else    {
		
		bin[i]=0;
	}
}

	
