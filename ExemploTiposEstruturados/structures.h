/* 
 * File:   structures.h
 * Author: OAO
 */

#ifndef STRUCTURES_H
#define STRUCTURES_H

#include "enumerations.h"
#include "utils.h"

#define MONTHS 12

enum motor_types { combustion, electric };

typedef enum motor_types Motor_types;

typedef struct {
    float qty, price;
    int kms;
} Fills;

struct car {
    int year, power, cc;
    char *plate;
    Motor_types motor;
    bool automatic;
    Fills fill[MONTHS];
};
typedef struct car Car;


#endif /* STRUCTURES_H */
