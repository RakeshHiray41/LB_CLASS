// Write a program which accepts file name and one count from user and read
// that number of characters from starting position.
// Input : Demo.txt 12
// Output : Display first 12 characters from Demo.txt

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>


void Display(char *fName ,int iNo)
{

    int fd = 0,iRet = 0;
    char Buffer[1024] = {'\0'};

    fd = open(fName,O_RDONLY);
    
    if(fd == -1)
    {
        printf("Unable to  open file\n");
        return ;
    }

    iRet = read(fd,Buffer,iNo);
    
    if(iRet == -1)
    {
        printf("Unable to read file content");
        return;
    }
    
    printf("%s\n",Buffer);  
    
}
int main()
{
    char FileName[30];
    int iValue = 0;
    

    printf("Enter file name :\n");
    scanf("%s",FileName);

    printf("Enter the Number of Characters : \n");
    scanf(" %d",&iValue);

    Display(FileName,iValue);

    
    return 0;
}