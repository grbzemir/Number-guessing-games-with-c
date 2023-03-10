#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

int main ()
{
    int oyuncu1;
    int oyuncu2;

    int emir;
    int bilge;

    printf("iki oyuncu sirayla aklinizdaki sayiyi giriniz: \n");
    printf("birinci oyunucu: (bilgeye gösterme :) \n");
    scanf("%d",&oyuncu1);
    
    system("color 0a");
    system("cls");

    printf("ikinci oyuncu: (emire gösterme :) \n");
    scanf("%d",&oyuncu2);
    system("cls");

    while(1)
    {
    printf("ikinci oyuncu tahmini ne sence: \n");
    scanf("%d",&emir);

    if(emir>oyuncu1)
    {
        printf("ikinci oyuncu daha kücük tutmus \n");
    }
    else if(emir<oyuncu2)
    {
        printf("ikinci oyuncu daha büyük tutmus \n");
    }
    else
    {
        printf("ikinci oyuncu bildi \n");
        break;
    }
    printf("Birinci oyuncu tahmini ne sence: \n");
    scanf("%d",&bilge);
    
    if(bilge>oyuncu1)
    {
        printf("Birinci oyuncu daha kücük tutmus \n");
    }
    else if (bilge<oyuncu1)
    {
        printf("Birinci oyuncu daha büyük tutmus \n");
    }
    else
    {
        printf("Birinci oyuncu bildi \n");
        break;
    }
    }
    

    return 0;
}   