#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include<string.h>

int main()
{
    int fd = 0,iRet = 0;
    char Fname[20] = {'\0'};
    char Buffer[50] = {'\0'};

    printf("Enter the file name that you wnat to open : \n");
    scanf("%s",Fname);

    fd = open(Fname,O_RDONLY);
    if(fd == -1)
    {
        printf("Unable to open file\n");
    }
    else
    {
        iRet = read(fd,Buffer,11);
        printf("%d bytes gets read Successfully\n",iRet);
        printf("Data from file : %s\n",Buffer);

        iRet = read(fd,Buffer,20);
        printf("%d bytes gets read Successfully\n",iRet);
        printf("Data from file : %s\n",Buffer);
        
        close(fd);
    }
    return 0;
}