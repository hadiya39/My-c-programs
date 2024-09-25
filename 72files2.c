//program to read a file and store values

#include<stdio.h>
int main()
{
    int x;
    char y[50];
    FILE *p;
    int rollno = 39;
    char name[50] = "Hadiya";
    p= fopen("firstfile.txt","r"); 
    if(p==NULL)
    {
      printf("the file doesnt exist");
    }   
    else
    {
    fscanf(p,"%d %s",&x,&y);
     printf("%d %s",x,y);
      fclose(p);
    }
    return 0;
}
