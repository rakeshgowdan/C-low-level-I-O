#include<stdio.h>
#include<conio.h>
main()
{
   char str_write[]="abcdef";
   int str_read[10];
   char filename[]="D:\\file.txt",O_RDWR,O_CREATE,O_TRUNC;
   int filedes;
   //open the file, Truncate if it exists.
   filedes=open(filename, O_RDWR | O_CREATE | O_TRUNC);
   //write 5 bytes of data
   write (filedes, (char *)str_write,10);
   //seek the beginning of the file
   lseek(filedes,(long) str_read,5);
   //Terminate the data we have read with a null character
   str_read[5]='\o';
   printf("The string is =%s.\n",str_read);
   close(filedes);
   return 0;
}
