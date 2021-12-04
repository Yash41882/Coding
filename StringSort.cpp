#include<stdio.h>
#include<stdlib.h>
#include<bits/stdc++.h>

void bubbleSort(char arr[5][25], int size)
{
    char temp[100];
  
    for (int j=0; j<size-1; j++)
    {
        for (int i=j+1; i<size; i++)
        {
            if (strcmp(arr[j], arr[i]) > 0)
            {
                strcpy(temp, arr[j]);
                strcpy(arr[j], arr[i]);
                strcpy(arr[i], temp);
            }
        }
    }
}

char cNames[5][25];

int main()
{
  int iSelect,iCount=0,iFlag=0;
  do
  {
    printf("\nWelcome \n 1) Enter your Name = \n 2)Display the list = \n 3)Exit\n \nSelect your Choice = ");
    scanf("%d",&iSelect);
    switch(iSelect)
    {
      case 1: 
      printf("\nEnter your Name : ");
      scanf("%s",cNames[iCount]);
      iCount++;
      printf("\nyour name was added");
      break;

      case 2: printf("\n***Names List***\n");
      for(int i=0; i<iCount; i++)
      {
        printf("%s\n",cNames[i]);
      }
      break;

      case 3: iFlag=1;
      break;

      default: printf("\nEnter correct choice = ");
    }
  } while (iFlag != 1);

  int size =  sizeof(cNames)/sizeof(cNames[0]);
  bubbleSort(cNames,size);
  printf("\n***Sorted Names List***\n");
  for(int i=0; i<iCount; i++)
  {
    printf("%s\n",cNames[i]);
  }

  return 0;
  
}
