#include<stdio.h>
#include<conio.h>
void main(){
FILE *fp;
fp=fopen("D:\\program1.txt","w");
fputs("hello c programming",fp);
fclose(fp);
getch();
}
