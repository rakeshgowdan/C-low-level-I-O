#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
main()
{
   char str_read[100];
   char filename[]="D:\\file.txt",O_RDONLY;
   int filedes;
   filedes=open (filename,O_RDONLY,0);
   read(filedes,(char *)str_read,5);
   str_read[5]='\0';
   printf("the string is=%s.\n",str_read);
   close(filedes);
   return 0;
}
/*Int read (int filedes, char *buffer, int size);

In the preceding syntax:
The first argument is a file descriptor, that is obtained by opening the file.

The second argument is a character array, where the data will be stored during the read operation.

The third argument is the number of bytes to be transferred.*/
