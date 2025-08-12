// Write application which accept file name from user and create that file.
// Input : Demo.txt
// Output : File created successfully.

#include<stdlib.h>
#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>

int main()
{
    char fName[20] = {'\0'};
    int fd = 0;
    
    printf("Enter file Name to create file : \n");
    scanf("%s",fName);

    fd = creat(fName,0777);
    if(fd == -1)
    {
        printf("Unable to create the file\n");
        return -1;
    }

    printf("File is successfully created with fd %d\n",fd);

}