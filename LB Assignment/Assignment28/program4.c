// Write application which accept file name from user and display size of file.
// Input : Demo.txt
// Output : File size is 56 bytes

#include<stdlib.h>
#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>

int main()
{
    char fName[20] = {'\0'};
    int fd = 0,iRet = 0,iSum = 0;
    char Buffer[1024] = {'\0'};

    printf("Enter File Name to open  : \n");
    scanf("%s",fName);

    fd = open(fName,O_RDONLY);

    if(fd == -1)
    {
        printf("Unable to open file");
        return -1;
    }
    
    while((iRet = read(fd,Buffer,1024)) != 0)
    {
        iSum += iRet;
    }
    printf("File Size is %d\n",iSum);
    close(fd);

    return 0;
}