// Write application which accept file name from user and one string from user. Write
// that string at the end of file.
// Input : Demo.txt
// Hello World

// Output : Write Hello World at the end of Demo.txt file


#include<stdlib.h>
#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>

#define BLOCK_SIZE 1024

int main()
{
    char fName[20] = {'\0'};
    int fd = 0,iRet = 0,iSum = 0;
    char Buffer[BLOCK_SIZE] = {'\0'};

    printf("Enter File Name to open  : \n");
    scanf("%s",fName);

    printf("Enter Data we want write into file : \n");
    scanf(" %[^'\n']s",Buffer);

    fd = open(fName,O_WRONLY | O_APPEND);

    if(fd == -1)
    {
        printf("Unable to open file");
        return -1;
    }
    iRet = write(fd,Buffer,BLOCK_SIZE);

    if(iRet == -1)
    {
        printf("Unable to write into file\n");
        return 1;
    }
    printf("Successfully wrote %d\n",iRet);
    close(fd);

    return 0;
}