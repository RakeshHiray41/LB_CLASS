// Write a program which accepts file name from user and count number of
// white spaces from that file.
// Input : Demo.txt
// Output : Number of white spaces are 13

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>


int CountWhite(char *fName)
{

    int fd = 0,iRet = 0,iCnt = 0,iWhiteCount = 0;
    char Buffer[1024] = {'\0'};

    fd = open(fName,O_RDONLY);
    
    if(fd == -1)
    {
        printf("Unable to  open file\n");
        return -1;
    }

    while((iRet = read(fd,Buffer,1024)) != 0)
    {
        for(iCnt = 0;iCnt < iRet ;iCnt++)
           {
                if(Buffer[iCnt] ==' ')
                {
                    iWhiteCount++;
                }
           }
          
    }

    return iWhiteCount;


}
int main()
{
    char FileName[30];
    int iRet = 0;

    printf("Enter file name :\n");
    scanf("%s",FileName);

    iRet = CountWhite(FileName);

    printf("Number of white space are %d\n",iRet);

    return 0;
}