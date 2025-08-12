#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>

int main()
{
    int fd = 0;
    char fName[20] = {'\0'};
    
    printf("Enter file name to open : \n");
    scanf("%s",fName);

    // O_RDONLY
    // O_ERONLY
    // O_RDWR

    fd = open(fName,O_RDWR);
    if(fd == -1)
    {
        printf("Unable to open file \n");
        return -1;
    }
    printf("File is succesfully open with fd %d\n",fd);
    return 0;
}