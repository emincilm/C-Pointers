#include <stdio.h>
#include <stdlib.h>

void findName(char names[][14], int n, int name[])
{
    char names[14];
    char names[5][14] = {"Alaa", "Emin", "Hasan","Ahmet","Veli"};
    puts("Enter your first name:");
    gets(name);   
    if (findName(names,5,name) == 1)
    {
     puts("Hosgeldiniz");
    }else
    {
        puts("Bye");
    }
    
    
}