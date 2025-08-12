#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include<string.h>

int main()
{
    int fd = 0,iRet = 0;
    char Fname[20] = {'\0'};
    char Buffer[10] = {'\0'};

    printf("Enter the file name that you wnat to open : \n");
    scanf("%s",Fname);

    fd = open(Fname,O_RDONLY);
    if(fd == -1)
    {
        printf("Unable to open file\n");
    }
    else
    {
        while((iRet = read(fd,Buffer,10)) != 0)
        {
            printf("%s",Buffer);
        }
        close(fd);
    }
    return 0;
}