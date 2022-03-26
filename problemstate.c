#include<stdio.h>
#include<stdlib.h>

void resize(char * x)
{
 x=(char *)realloc(x,1000);

}

int main()
{
 char *ptr;
 ptr= (char *)malloc(1000*1);
 while(1)
    {
        resize(ptr);
        printf("\n done");
    }
}
