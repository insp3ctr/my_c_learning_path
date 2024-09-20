#include <stdio.h>

#define PI 3.14159F

int main()
{
    double r;
    float umfang;
    float flaeche;


    printf("Radius des Kreises: ");
    scanf("%lf", &r);

    if (r > 0) {
        umfang = (2 * PI) * r;
        flaeche = PI * (r * r);

        printf("\nFlaeche: %lf", flaeche);
        printf("\nUmfang: %lf", umfang);
    }


    return 0;
}
