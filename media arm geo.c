#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{

    int a,b,c,d,ma;
    float mg;

    printf("Introduceti patru numere naturale pentru a afla media aritmetica si geometrica a acestora:\n");

    printf("Introduceti primul numar:\n");
    scanf("%d",&a);

    printf("Introduceti al doilea numar:\n");
    scanf("%d",&b);

    printf("Introduceti al treilea numar:\n");
    scanf("%d",&c);

    printf("Introduceti al patrulea numar:\n");
    scanf("%d",&d);

    ma = (a+b+c+d)/4;
    mg = sqrt(a*b*c*d);
    printf("Media aritmetica a numerelor introduse este %d, iar cea geometrica este %f",ma,mg);


    return 0;