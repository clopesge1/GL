//  Copyright (c) 2018 Antoine Tran Tan
//

#include <ansi_c.h>
#include "my_header.h"
#include "stdlib.h"
#define seuil 5
#define seuilh 200
#define seuilb -100
#define N 10
void bin_tab(void); 
void sat_tab(void);
void dist_tab(void);
void dif2_tab(void);
void miroir_tab(void); 
unsigned char bin[10]={0,1,2,3,4,5,6,7,8,9};
unsigned char sat[10]={0,1,2,3,4,5,6,7,8,9};
unsigned char dist[10]={0,1,2,3,4,5,6,7,8,9};
unsigned char A[7]={0,7,19,3,8,15,11};
unsigned char B[6]={0,1,2,3,4,5,6}; 
unsigned char miroir[N]={0,1,2,3,4,5,6,7,8,9};
int i;
int n;
int inv;
int main(void)
{
	srand(time(NULL));							 
	sat_tab();
	bin_tab();
	dist_tab();
	dif2_tab();
	miroir_tab();
	
    return 0;
}




	void bin_tab(void)
	{
	for (i=0 ; i<10; i++){
	if (bin[i]>seuil)
	{
		
		bin[i]=1;  }
	else    {
		
		bin[i]=0;
	}
	}
}

	void sat_tab(void)
	{
		char val=0;
		for (i=0 ; i<10; i++){
		val = (rand()%400+1)-100;
	if (val > seuilh)
		{ sat[i] = seuilh;
		}
		
				 else if (val < seuilb) 
		{ sat[i] = seuilb;
		}
			 else  {
				 sat[i] = val;
		}
		}
	}
	void dist_tab(void){
	for (i=1; i<10; i++)
	dist[i]= dist[i]-dist[i-1];
	}

void dif2_tab(void)
{
for ( i=6, n=0 ; i>0 ; i--, n++)
    {
	  B[n] = A[i];
    }
	
}

void miroir_tab(void) 
{
 inv=N/2;
 
 	for ( i=0, n=9; i<10 ; i++,n--)
    {
	  if (i>=inv)
	  {
	  miroir[i] = miroir[n];
	  }
				  miroir[i];
    }
	
}
