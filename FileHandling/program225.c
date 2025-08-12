#include<stdio.h>//gedit and kedit in linux
#include<unistd.h>
#include<fcntl.h>

int main()
{
    int fd = 0;

    fd = creat("Demo.txt",0777);

    return 0;
}