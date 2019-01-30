#include<stdio.h>
#include<conio.h>

#include<stdlib.h>
main()
{
   char str_write[]="Low level ";
   char filename []="example.txt",O_WRONLY,O_CREATE,O_TRUNC;
   int filedes,n;
   // open the file and truncate if it exist.
   filedes=open(filename,O_WRONLY | O_CREATE | O_TRUNC,0);
   // write 10 byte of data
   write(filedes,(char *)str_write,10);
   close(filedes);

}
