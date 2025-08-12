#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include<string.h>

#define BUFFER_SIZE 1024
int main()
{
    int fd = 0,iRet = 0,iSum = 0;
    char Fname[20] = {'\0'};
    char Buffer[BUFFER_SIZE] = {'\0'};

    printf("Enter the file name that you wnat to open : \n");
    scanf("%s",Fname);

    fd = open(Fname,O_RDONLY);
    if(fd == -1)
    {
        printf("Unable to open file\n");
    }
    else
    {
        printf("File is successfully opened with fd : %d\n",fd);
        while((iRet = read(fd,Buffer,BUFFER_SIZE)) != 0)
        {
           // printf("%s",Buffer);
           //write(1,Buffer,iRet); 
           //memset(Buffer,'\0',BUFFER_SIZE);
           iSum = iSum + iRet;

        }
        printf("Fize size is : %d\n",iSum);
        close(fd);
    }
    return 0;
}

// os by tanin bum