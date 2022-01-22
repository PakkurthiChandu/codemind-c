#include<stdio.h>
int main()
{
    char b,A,E,I,O,U,a,e,i,o,u;
    scanf("%c",&b);
    if(b=='A'||b=='E'||b=='I'||b=='O'||b=='U'||b=='a'||b=='e'||b=='i'||b=='o'||b=='u')
    {
        printf("Vowel");
    }
    else
    {
        printf("Consonant");
    }
}