/*
This file containe information and usecases about pointers in C language.
*/

#include <stdio.h>

int main(){

    /*Simple calculation about the volume of a room...*/
    double room_height = 2.5;
    int room_lenght = 10;
    int room_width = 5;
    double room_volume = 0;
    room_volume = room_height * room_lenght * room_width;
    printf("Room volume: %.1lf\n\n", room_volume);
    /*------------------------------------------*/

    /*Check the memory adress of the variables...*/
    double *room_height_p = &room_height;
    int *room_lenght_p = &room_lenght;
    int *room_width_p = &room_width;
    double *room_volume_p = &room_volume;
    printf("Memory adress of the room_height variable: %p\n", room_height_p);
    printf("Memory adress of the room_lenght variable: %p\n", room_lenght_p);
    printf("Memory adress of the room_width variable: %p\n", room_width_p);
    printf("Memory adress of the room_volume variable: %p\n\n", room_volume_p);
    /*------------------------------------------*/

    /*Check the memory adress of the variables...*/
    printf("Value on the %p memory adress: %.1lf\n", room_height_p, *room_height_p);
    printf("Value on the %p memory adress: %d\n", room_lenght_p, *room_lenght_p);
    printf("Value on the %p memory adress: %d\n", room_width_p, *room_width_p);
    printf("Value on the %p memory adress: %.1lf\n\n", room_volume_p, *room_volume_p);
    /*------------------------------------------*/

    /*Check the memory adress of the pointer...*/
    printf("Memory adress of the pointer: %p\n", &room_height_p);
    printf("Memory adress of the pointer: %p\n", &room_lenght_p);
    printf("Memory adress of the pointer: %p\n", &room_width_p);
    printf("Memory adress of the pointer: %p\n\n", &room_volume_p);
    /*------------------------------------------*/

    /*An example for double pointer...*/
    double **room_height_pp = &room_height_p;
    printf("Value on the %p memory adress: %.1lf\n", room_height_pp, **room_height_pp);
    /*------------------------------------------*/

    return 0;

}