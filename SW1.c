//TO CHECK IF VOWEL OR CONSONANT
#include <stdio.h>
void main()
{
    char ch;
    printf("enter the alphabet ");
    scanf("%c",&ch);
    switch(ch)
    {
    case 'a' :printf("vowel");break;
    case 'A' :printf("vowel");break;
    case 'E' :printf("vowel");break;
    case 'e' :printf("vowel");break;
    case 'i' :printf("vowel");break;
    case 'I' :printf("vowel");break;
    case 'o' :printf("vowel");break;
    case 'O' :printf("vowel");break;
    case 'u' :printf("vowel");break;
    case 'U' :printf("vowel");break;
    default :printf("consonant");
    }
}
