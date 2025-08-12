// Write application which accept file name from user and open that file in read mode.
// Input : Demo.txt
// Output : File opened successfully.

#include<stdlib.h>
#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>

int main()
{
    char fName[20] = {'\0'};
    int fd = 0;

    printf("Enter File Name to open  : \n");
    scanf("%s",fName);

    fd = open(fName,O_RDONLY);

    if(fd == -1)
    {
        printf("Unable to open file");
        return -1;
    }
    printf("File is Successfylly opend with fd %d\n",fd);

    close(fd);

    return 0;
}
