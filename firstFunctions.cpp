#include <stdio.h>

/*
  Erstellen Sie eine Funktion, welche zwei INTEGER Parameter (min und max) erhält, und die Summe aller Zaheln von min bis max ausgibt. 
  min und max sollen per Benutzereingabe eingelesen und dann an die Funktion übergeben werden

  Erstellen Sie eine Funktion, welche zwei INTEGER Paramater erhält, und den größeren Wert zurückgibt.
  
  */

void sortiere( int &z1, int &z2 )
{
  if ( z1 > z2 ) 
  {
    int temp = z1;
    z1 = z2;
    z2 = temp;
  }
}

int getSmallestNumber( int z1, int z2 )
{
  int kleinZahl;
  
  if (z1 < z2)
  {
    kleinZahl = z1;
  } else 
  {
    kleinZahl = z2;
  }
  
  return kleinZahl;
}

int getBiggestNumber( int z1, int z2 )
{
  int grossZahl;
  
  if (z1 > z2)
  {
    grossZahl = z1;
  } else 
  {
    grossZahl = z2;
  }
  
  return grossZahl;
}

int summiere( int min, int max )
{
  int zahlenstrecke = 0;
  
  sortiere(min,max);
  
  for (;min <= max;min++)
  {
    zahlenstrecke=zahlenstrecke+min;    
  }
  return zahlenstrecke;
}

int main (void)
{
  int wert1, wert2;
  
  printf("Geben Sie den Anfang und das Ende Ihrer gewuenschten Zahlenstrecke an:\r\n");
  printf("Wert 1:");
  scanf("%d",&wert1);
  
  printf("Wert 2:");
  scanf("%d",&wert2);
  
  printf("Ergebnis: %d \r\n", summiere(wert1, wert2));
  printf("Der groessere Wert ist %d \r\n",getBiggestNumber(wert1,wert2));
  return 0;
}
  

  
