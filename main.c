#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float const g = 9.81;
    float v, a, t, vs, ar;
    float w, h;
    char c;

    printf("-------------------------------------------------\n");
    printf("|             Baseball simulation               |\n");
    printf("|        Made by Matteo Pirchner-Gratz          |\n");
    printf("-------------------------------------------------\n\n");


    start:

    printf("Speed [km/h]: ");
    scanf("%f", &v);
    printf("Angle [degrees]: ");
    scanf("%f", &a);
    printf("Time [sec]: ");
    scanf("%f", &t);

    printf("\nYou entered:\n");
    printf("Speed: %.2f km/h\nAngle: %.2f degrees\nTime: %.2f sec\n\n", v, a, t);

    fflush(stdin);


    ask:

    printf("Is that right (y/n)? ");
    scanf("%c", &c);

    fflush(stdin);

    if(c == 'y'){
        vs = v / 3,6;
        ar = a * M_PI / 180;
        h = vs * t * sin(ar) - (t * t * g / 2);

        if(h > 0){
            w = vs * t * cos(ar);
            printf("\nThe Ball flew %.2f meters.", w);
            if(h > 0){
                printf("\nThe Ball's height is %.2f meters.\n\n", h);
            }
            else{
                printf("\nThe Ball is already on the ground.\n\n");
            }

            if(w > 76){
                printf("\n!!! HOMERUN !!! HOMERUN !!! HOMERUN !!!! HOMERUN !!! HOMERUN !!! \n\n");
            }
        }
        else{
            w = vs * (2 * (sin(ar) * vs) / g) * cos(ar);
            printf("\nThe Ball flew %.2f meters.", w);
            if(h > 0){
                printf("\nThe Ball's height is %.2f meters.\n\n", h);
            }
            else{
                printf("\nThe Ball is already on the ground.\n\n");
            }

            if(w > 76){
                printf("\n!!! HOMERUN !!! HOMERUN !!! HOMERUN !!!! HOMERUN !!! HOMERUN !!! \n\n");
            }
        }

    }
    else if(c == 'Y'){
        vs = v / 3,6;
        ar = a * M_PI / 180;
        h = vs * t * sin(ar) - (t * t * g / 2);

        if(h > 0){
            w = vs * t * cos(ar);
            printf("\nThe Ball flew %.2f meters.", w);
            if(h > 0){
                printf("\nThe Ball's height is %.2f meters.\n\n", h);
            }
            else{
                printf("\nThe Ball is already on the ground.\n\n");
            }

            if(w > 76){
                printf("\n!!! HOMERUN !!! HOMERUN !!! HOMERUN !!!! HOMERUN !!! HOMERUN !!! \n\n");
            }
        }
        else{
            w = vs * (2 * (sin(ar) * vs) / g) * cos(ar);
            printf("\nThe Ball flew %.2f meters.", w);

            if(h > 0){
                printf("\nThe Ball's height is %.2f meters.\n\n", h);
            }
            else{
                printf("\nThe Ball is already on the ground.\n\n");
            }

            if(w > 76){
                printf("\n!!! HOMERUN !!! HOMERUN !!! HOMERUN !!!! HOMERUN !!! HOMERUN !!! \n\n");
            }
        }

    }
    else if(c == 'n'){
        printf("Okay!\n\n");
        goto start;
    }
    else if(c == 'N'){
        printf("Okay!\n\n");
        goto start;
    }
    else{
        printf("\nWrong input!\n\n");
        goto ask;
    }

    getch();
    return 0;
}
