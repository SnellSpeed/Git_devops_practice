/*
#include<stdio.h>
#include<string.h>

int main()
{
    char str[500];
    int i,j,len=0;

    printf("\nGive a Word to start: ");
    //scanf("%s",str); // to read only word will not work with spaces in between words
    gets(str); //to read a sentence as a string input
    len= strlen(str);

    printf("\nGiven Word is: %s",str);

    printf("\nPrinting the Word below in the pattern: \n");

    for(i=0;i<len;i++)
    {
        for(j=0;j<=i;j++)
        {
            printf("%c",str[j]);
        }
        printf("\n");
    }
    return 0;
}
*/
/*
#include <stdio.h>
int main()
{
    char name[20];
    printf("Enter name: ");
    scanf("%s", name);
    printf("Your name is %s.", name);
    return 0;
}
*/
