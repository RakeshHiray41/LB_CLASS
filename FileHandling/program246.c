#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include<string.h>

#define BUFFER_SIZE 1024
int main()
{
    int fd = 0,iRet = 0,iCnt = 0,iCount = 0;
    char Fname[20] = {'\0'};
    char Buffer[BUFFER_SIZE] = {'\0'};

    printf("Enter the file name that you wnat to open : \n");
    scanf("%s",Fname);

    fd = open(Fname,O_RDONLY);
    if(fd == -1)
    {
        printf("Unable to open file\n");
    }
    else
    {
        printf("File is successfully opened with fd : %d\n",fd);
        while((iRet = read(fd,Buffer,BUFFER_SIZE)) != 0)
        {
           
           //memset(Buffer,'\0',BUFFER_SIZE);
           
           for(iCnt = 0;iCnt < iRet ;iCnt++)
           {
                
                    printf("%c\n",Buffer[iCnt]);
                  
           }
           printf("file size are : %d\n",iCount);

        }
        
        close(fd);
    }
    return 0;
}

// os by tanin bum