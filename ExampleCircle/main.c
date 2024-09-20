#include <stdio.h>

#define PI 3.14159F

int main()
{
    float r;
    float umfang;
    float flaeche;


    printf("Radius des Kreises: ");
    scanf("%f", &r);

    if (r < 0.0f) {

        printf("Wert muss größer als 0 sein!");
        return 1;
    }

    umfang = (2 * PI) * r;
    flaeche = PI * (r * r);

    printf("\nFlaeche: %f", flaeche);
    printf("\nUmfang: %f", umfang);


    return 0;
}
