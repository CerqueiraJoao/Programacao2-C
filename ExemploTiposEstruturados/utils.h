#ifndef UTILS_H
#define UTILS_H

typedef enum{FALSE=0, TRUE=1} bool;

int menu_counter_inc();

int menu_counter_print();

int clean_buffer();

int get_int(int , int , char *);

int get_user_input(char * , int );

void header(char *);

void line();

void function_header(char *);

#endif /* UTILS_H */