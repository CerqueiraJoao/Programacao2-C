/* 
 * File:   structures.c
 * Author: OAO
 */

#include <stdio.h>
#include <stdlib.h>

#include "structures.h"
#include "enumerations.h"
#include "utils.h"

static void print(struct car car_to_print) {
    puts("");
    printf("\nautomatic: %d", car_to_print.automatic);
    printf("\ncc: %d", car_to_print.cc);
    printf("\nmotor: %d", car_to_print.motor);
    printf("\nplate: %s", car_to_print.plate);
    printf("\npower: %d", car_to_print.power);
    printf("\nyear: %d", car_to_print.year);
}

static void struct_() {
    function_header("struct");
    
    struct car temp = { .automatic=FALSE, .cc=0, .motor=combustion, .plate = "", .power=0, .year=0 };
    print(temp);
    
    struct car my_car, cars[5];
    
    my_car.automatic = FALSE;
    my_car.cc = 2000;
    my_car.motor = combustion;
    my_car.plate = "AA-AA-AA";
    my_car.power = 200;
    my_car.year = 2017;
    
    cars[0] = my_car;
    cars[0].year = 1999;
    
    print(my_car);
    print(cars[0]);
    
    puts("");
    if (cars[0].automatic == my_car.automatic) {
        puts("\nsame motor type");
    }    
}

static void print_2(Car car_to_print) {
    puts("");
    printf("\nautomatic: %d", car_to_print.automatic);
    printf("\ncc: %d", car_to_print.cc);
    printf("\nmotor: %d", car_to_print.motor);
    printf("\nplate: %s", car_to_print.plate);
    printf("\npower: %d", car_to_print.power);
    printf("\nyear: %d", car_to_print.year);
    int i=0;
    for (; i < MONTHS; ++i) {
        printf("\ncar_to_print.fill[%d].kms: %d", i, car_to_print.fill[i].kms);
        printf("\ncar_to_print.fill[%d].price: %f", i, car_to_print.fill[i].price);
        printf("\ncar_to_print.fill[%d].qty: %f", i, car_to_print.fill[i].qty);
    }
}

static void typedef_() {
    function_header("typedef");
    
    Car my_car;
    
    my_car.automatic = FALSE;
    my_car.cc = 2000;
    my_car.motor = combustion;
    my_car.plate = "AA-AA-AA";
    my_car.power = 200;
    my_car.year = 2017;
    
    int i=0;
    for (; i < MONTHS; ++i) {
        my_car.fill[i].kms = rand() % 1000; /* random int between 0 and 999 */
        my_car.fill[i].price = (double)rand() / (double)RAND_MAX; /* random double between 0 and 1 */
        my_car.fill[i].qty = (rand() % 10) * ((double)rand() / (double)RAND_MAX);
    }
    
    print_2(my_car);    
}

static void get_option(int value){
    switch(value) {
        case 1: struct_(); break;
        case 2: typedef_(); break;
    }
}

static void Menu(){
    header("Structures");
    puts("1. struct"); 
    puts("2. typedef"); 
    puts("0. Back");
    line();
}

 main() {    
    Menu();
    int option = get_int(0, 2, "Option: ");    
    if (option > 0) { get_option(option); }
}