#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float const G = 9.81;
    float v, a, t;
    float w, h;
    char c;

    printf("-------------------------------------------------\n");
    printf("|         Baseball simulation v.1               |\n");
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
        v = v / 3.6;
        a = a * M_PI / 180;
        h = v * t * sin(a) - (t * t * G / 2);

        if(h > 0){
            w = v * t * cos(a);
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
            w = v * (2 * (sin(a) * v) / G) * cos(a);
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
        v = v / 3.6;
        a = a * M_PI / 180;
        h = v * t * sin(a) - (t * t * G / 2);

        if(h > 0){
            w = v * t * cos(a);
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
            w = v * (2 * (sin(a) * v) / G) * cos(a);
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
