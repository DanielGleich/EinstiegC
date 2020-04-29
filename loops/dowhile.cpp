#include <stdio.h>

int main()
{
  int schleife;
  
  printf("Welche Schleife wollen Sie benutzen? \r\n [1]Do-While-Schleife \r\n [2]While-Scheife\r\n");
  while (schleife < 1 || schleife > 2 )
  scanf("%d",&schleife);
  
  switch (schleife)
  {
		case 1:
				int i;
				int zahl;
    
				i = 0;
				zahl = 0;
				do
				{
					zahl = zahl+i;
					i++;
				}
				while (i<=100);
				printf("%d \r\n",zahl);
				break;
  
		case 2:
  
				int x;
				int y;
				int z;
    
				printf("Geben Sie Ihren gewuenschten Zahlenbereich ein (Ganze Zahlen):");
				scanf("%d",&x);
				printf("\r\n");
				scanf("%d",&y);
				printf("\r\n");
    
				if (x<y)
				{
				z=x;
				while(x<y)
					{
						x++;
						z=z+x;
					}
				printf("Summe: %d \r\n",z);
				}
    
				if (y<x)
				{
				z=y;
				while(y<x)
					{
						y++;
						z=z+y;
					}
				printf("Summe: %d \r\n",z);
				}
				break;
  }
    
   return 0;
}