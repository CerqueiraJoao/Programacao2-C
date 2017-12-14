#include <stdio.h>
#include <string.h>

#include "utils.h"


static int counter = 0;

int menu_counter_inc() { ++counter; }

int menu_counter_print() {
    printf("\nMain menu was accessed: %d times\n", counter);
} 

int clean_buffer() {
    char ch;
    while ((ch = getchar()) != '\n' && ch != EOF);
    return 1; 
}

int get_int(int lower_bound, int upper_bound, char *input) {
    int r; 
    char c;
    do {  
        puts(input);
    } while ( ((scanf("%d%c", &r, &c) != 2 || c!='\n') && clean_buffer()) 
              || r < lower_bound 
              || r > upper_bound
            );
    return r;
}

int get_user_input(char *str, int size) {
    if (fgets(str, size, stdin) != NULL) {
        int temp = strlen(str) - 1;
        if (str[temp] == '\n') { str[temp] = '\0'; }
        else { clean_buffer(); }
        return 1;
    } 
    return 0;
}


void line() {
    puts("-------------------------------");
}

void points() {
    puts("...............................");
}

void header(char *text) {
    puts(""); puts("");
    line();
    puts(text);
    line();
}

void function_header(char *text) {
    puts("");
    puts(text);
    points();
}