// Write application which accept file name from user and read all data from that file
// and display contents on screen.
// Input : Demo.txt
// Output : Display all data of file.

#include<stdlib.h>
#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>

int main()
{
    char fName[20] = {'\0'};
    int fd = 0,iRet = 0;
    char Buffer[1024] = {'\0'};

    printf("Enter File Name to open  : \n");
    scanf("%s",fName);

    fd = open(fName,O_RDONLY);

    if(fd == -1)
    {
        printf("Unable to open file");
        return -1;
    }
    
    while((iRet = read(fd,Buffer,sizeof(Buffer))) != 0)
    {
        printf("%s",Buffer);
    }
    printf("\n");
    close(fd);

    return 0;
}