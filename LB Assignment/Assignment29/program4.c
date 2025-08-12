// Write a program which accepts file name and one character from user and
// count number of occurrences of that characters from that file.
// Input : Demo.txt ‘M’
// Output : Frequency of M is 7

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>


int CountChar(char *fName ,char ch)
{

    int fd = 0,iRet = 0,iCnt = 0,iCount = 0;
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
                if(Buffer[iCnt] == ch)
                {
                    iCount++;
                }
           }
          
    }

    return iCount;


}
int main()
{
    char FileName[30];
    int iRet = 0;
    char cValue = '\0';

    printf("Enter file name :\n");
    scanf("%s",FileName);

    printf("Enter character: \n");
    scanf(" %c",&cValue);

    iRet = CountChar(FileName,cValue);

    printf("Number of count of character %c are %d\n",cValue,iRet);

    return 0;
}