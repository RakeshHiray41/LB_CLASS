
#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<string.h>
#include<iostream>
using namespace std;

int main()
{
  char str[80] = {'\0'};
 int iCount = 0;
 char Command[4] [80];

  cout<<"---------------------------------------------------------------------------------------\n";
  cout<<"------------------------ Marvellous CVSF Started Successfully -------------------------\n";
  cout<<"---------------------------------------------------------------------------------------\n";

 
    printf("\n Marvellous CVFS > ");

    fgets(str,sizeof(str),stdin);
    iCount = sscanf(str,"%s %s %s %s",Command[0],Command[1],Command[2],Command[3]);
    printf("Number of tokan are : %d\n",iCount);


    printf("Tokan no 1 : %s\n", Command[0]);
    printf("Tokan no 2 : %s\n", Command[1]);
    printf("Tokan no 3 : %s\n", Command[2]);
    printf("Tokan no 4 : %s\n", Command[3]);


  return 0;
} //End of main
