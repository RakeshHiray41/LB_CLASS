#include<stdio.h>//gedit and kedit in linux
#include<unistd.h>
#include<fcntl.h>

int main()
{
    int fd = 0;
    char fName[20] = {'\0'};
    
    printf("Enter file name to create : ");
    scanf("%s",fName);

    fd = creat(fName,0777);

    return 0;
}