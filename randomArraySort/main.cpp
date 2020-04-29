#include <stdio.h> // 6 Zufallszahlen von 1 bis 49
#include <time.h>
#include <stdlib.h>

void sort (int *from,int *to)
{
  if (*from > *to)
  {
    int temp = *from;
    *from = *to;
    *to = temp;
  }
}

void arraySort(int *array,int numberCount)
{
    for(int j=0;j<numberCount;j++)
    {
        for(int i=1;i<numberCount;i++)
        {
            if (array[i]<array[i-1])
            {
                int temp;
                temp=array[i-1];
                array[i-1]=array[i];
                array[i]=temp;
            }
        }
    }
}

int getRandomBetween(int from,int to)
{
  sort(&from,&to);
  int random = (( int ) rand() % to) + from;
  return random;
}

int main()
{
    int numberCount = 6;
    int numbers[numberCount];
    int numberPool[49];

    for (int i= 0;i < 49;i++)
    {
      numberPool[i] = i+1;
    }
    
    int numberRange = 49;
    for (int i= 0;i<numberCount ;i++)
    {
      numbers[i] = getRandomBetween(1,numberRange);
      numberRange--;
    }
    for (int i=0;i<numberCount;i++)
    {
        printf("\r\nZahl %d= %2.d ",i+1,numbers[i]);
    }

    arraySort(numbers,numberCount);

    printf("\r\n\r\nNACH DER SORTIERUNG\r\n-------------------------------------------------------------");

    for (int i=0;i<numberCount;i++)
    {
        printf("\r\nZahl %d: %2.d",i+1,numbers[i]);
    }
    printf("\r\n");

    return 0;
}
