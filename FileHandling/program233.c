#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include<string.h>

int main()
{
    int fd = 0,iRet = 0;
    char Fname[20] = {'\0'};
    char Buffer[] = "India is my country";

    printf("Enter the file name that you wnat to open : \n");
    scanf("%s",Fname);

    fd = open(Fname,O_RDWR | O_APPEND);
    if(fd == -1)
    {
        printf("Unable to open file\n");
    }
    else
    {
        iRet = write(fd,Buffer,strlen(Buffer));
        printf("%d bytes gets written Successfully\n",iRet);
        
        close(fd);
    }
    return 0;
}