#include <stdio.h>

/* Schleifen: Zahlen zeilenweise ausgeben 
1. 1 bis 100
2. 100 bis 1
3. 0, 2, 4, 6, ... 100
4. 20, 18, 16, ... -16, -18, -20
5. 1, 2, 4, 8, 16, ... 256
6. 1, 1, 2, 3, 5, 8, 13, 21, 34, ... (?)
7. Zahlen von 0 bis 100 aufsumnieren und Ergebnis ausgeben
8. Zahlen von x bis y aufsummieren und Ergebnis ausgeben. x und y werden vom Benutzer eingelesen.
*/

int main (void)
{
  int schleife;
  int aufgabe;
  int a;
  int b= 1;
  int c= 1;
  int nZ= 1;
  int x;
  int y;
  int z = 0;
  
  printf("Welche Schleifenart wollen Sie haben? \r\n");
  printf("[1] While-Schleife\r\n[2] Do-While-Schleife \r\n[3] For-Schleife\r\n");
  while (schleife < 1 || schleife > 3)
  scanf("%d",&schleife);
  
  switch (schleife)
  {
    case 1:
      printf("Welche Aufgabe wollen Sie aufrufen? \r\n");
      printf("Sie haben die Auswahl zwischen Aufgabe 1 bis Aufgabe 8\r\n");
      while ( aufgabe < 1 || aufgabe > 8)
        scanf("%d",&aufgabe);
      
      switch (aufgabe)
      {
        case 1:
          a=1;
          while (a <= 100)
          {
            printf("%d \r\n",a);
            a++;
          }
        break;
        
        case 2:
          a=100;
          while (a>=1)
          {
            printf("%d \r\n",a);
            a--;
          }
        break;
        
        case 3:
          a=0;
          while (a <= 100)
          {
            printf("%d\r\n",a);
            a+=2;
          }
        break;
        
        case 4:
          a=20;
          while (a>=-20)
          {
            printf("%d \r\n",a);
            a-=2;
          }
        break;
        
        case 5:
          a=1;
          while (a <= 256)
          {
            printf("%d\r\n",a);
            a*=2;
          }
        break;
        
        case 6:
          a= 0;
          while (a <= 10)
          {
            printf("%d \r\n", b);
            nZ = b + c ;
            b = c;
            c = nZ;
            a++;
          }
        break;
        
        case 7:
          a=0;
          b=0;
          c=0;
          while (c<=100)
          {
            b=b+a;
            a++;
            c++;
          }
            printf("%d \r\n",b);
        break;
      }
    break;
    
    case 3:
    printf("Welche Aufgabe wollen Sie aufrufen? \r\n");
    printf("Sie haben die Auswahl zwischen Aufgabe 1 bis Aufgabe 8\r\n");
    while ( aufgabe < 1 || aufgabe > 8)
    {
      scanf("%d",&aufgabe);  
    }
    
    switch (aufgabe)
    {
      case 1:
        for (a=1;a <= 100; a++)
          printf("\r\n%d", a);
      break;
      
      case 2:
        for (a=100; a>=1; a--)
          printf("\r\n %d", a);
      break;
      
      case 3:
        for (a=0;a <= 100;a= a+2)
          printf("\r\n %d", a);
      break;
      
      case 4:
        for (a=20;a >= -20; a= a-2)
          printf("\r\n %d",a);
      break;
      
      case 5:
        for (a=1; a<=256; a=a*2)
        {
          printf("\r\n %d", a);
        }
      break;
      
      case 6:
        for (a=0; a<=10;a++)
        {
          printf("\r\n %d", b);
          nZ = b + c ;
          b = c;
          c = nZ;
        }
      break;
      
      case 7:
        b= 0;
        for (a=0;a <= 100; a++)
        {
          b=b+a;		
        }
          printf("\r\n %d", b);
      break;
      
      case 8:
        printf("Geben Sie an wie gross der gewuenschte Zahlenbereich summiert werden soll\r\n");
        printf("\r\n x:");
        scanf("%d",&x);
        printf("\r\n y:");
        scanf("%d",&y);
        
        if (x < y)
        {
        for (x;x <= y;x++)
        {
          z=z+x;
        }
          
          printf("\r\n Summe:%d \r\n",z);
        }
        else if (x > y)
        {
        for (y;y <= x;y++)
        {
          z=z+y;
        }
          
          printf("\r\n Summe:%d \r\n",z);
        }
        else if (x == y)
        {
          printf("Summe: %d \r\n",x);
        }
      break;
    }
    break;
  }

  return 0;
} 
