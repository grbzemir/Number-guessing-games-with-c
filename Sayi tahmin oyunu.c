#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<stddef.h>

int main () {

printf("SAYİ TAHMİN OYUNUNA HOS GELDİNİZ \n\n");
system("color 0a");

srand(time(NULL));
int rastgelesayi = (rand()%10)+1;
int tahmin;
int kacdefa=0;

printf("lütfen tahmininizi giriniz: \n");
scanf("%d", &tahmin);

while(rastgelesayi != tahmin)
{
 kacdefa++;
  if(tahmin > rastgelesayi)
{
    printf("tahmininizi azaltin lüten \n");
    printf("lütfen tahmininizi giriniz: \n");
    scanf("%d", &tahmin);
}
else if (tahmin < rastgelesayi)
{
    printf("tahmininizi arttirin lütfen \n");
    printf("lütfen tahmininizi giriniz: \n");
    scanf("%d", &tahmin);
}
}
printf("tebrikler %d defa deneyerek sonunda bildiniz \n", kacdefa);

return 0;
}

