// Write a program which accepts file name from user and count number of
// small characters from that file.
// Input : Demo.txt
// Output : Number of small characters are 21

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>


int CountSmall(char *fName)
{

    int fd = 0,iRet = 0,iCnt = 0,iSmallCount = 0;
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
                if((Buffer[iCnt] >= 'a')&&(Buffer[iCnt] <= 'z'))
                {
                    iSmallCount++;
                }
           }
          
    }

    return iSmallCount;


}
int main()
{
    char FileName[30];
    int iRet = 0;

    printf("Enter file name :\n");
    scanf("%s",FileName);

    iRet = CountSmall(FileName);

    printf("Number of small character are %d\n",iRet);

    return 0;
}