#include<stdio.h>//gedit and kedit in linux
#include<unistd.h>
#include<fcntl.h>

int main()
{
    int fd = 0;
    char fName[20] = {'\0'};
    
    printf("Enter file name to create : \n");
    scanf("%s",fName);

    fd = creat(fName,0777);
    if(fd == -1)
    {
        printf("Unable to create file ");
    }
    printf("File is succesfully create with fd %d\n",fd);
    return 0;
}