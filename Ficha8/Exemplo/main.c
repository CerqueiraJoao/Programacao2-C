#include <stdio.h>
#include <stdlib.h>

#include "utils.h"

#define MAX_STUDENTS 5

typedef struct {
    char name[25];
    int number;
} Student;

static int search(Student students[], int counter, int number) {
    int i = 0;
    for(; i < counter; ++i) {
        if (students[i].number == number) return i;
    }
    return -1;
}

static void read(Student students[], int pos) {
    puts("insert student number: ");
    scanf("%d", &students[pos].number);
    clean_buffer();    
    puts("insert student name: ");    
    get_user_input(students[pos].name, 25);
}

static void insert(Student students[], int *counter) {
    function_header("Insert");
    if (*counter < MAX_STUDENTS) {
        read(students, *counter);
        (*counter)++;
    } else {
        puts("No more students can be inserted");
    }
}

static void delete(Student students[], int *counter) {
    function_header("Delete");
    if (*counter < MAX_STUDENTS) {
        int student_number, pos;
        puts("student number to delete: ");
        scanf("%d", &student_number);
        pos = search(students, *counter, student_number);
        if (pos != -1) {
            for (; pos < *counter; ++pos) {
                students[pos] = students[pos + 1];
            }
            (*counter)--;
        } else {
            puts("student does not exist");
        }
    } else {
        puts("empty database");
    }
}

static void update(Student students[], int counter) {
    function_header("Update");
    int student_number, pos;
    puts("student number to update: ");
    scanf("%d", &student_number);
    pos = search(students, counter, student_number);
    if (pos != -1) {
        read(students, pos);
    } else {
        puts("student does not exist");
    }
}

static void list(Student students[], int counter) {
    function_header("List");
    int i = 0;
    for (; i  < counter; ++i) {
        Student s = students[i];
        printf("\nstudent %d \t number: %d name: %s", i, s.number, s.name);
    }
    printf("\nnumber of students: %d", counter);
}

static void get_option(int value, Student students[], int *counter) {
    switch(value) {
        case 1: insert(students, counter); break;
        case 2: delete(students, counter); break;
        case 3: update(students, *counter); break;
        case 4: list(students, *counter); break;        
    }
}

static void Menu(){
    header("Structures");
    puts("1. Insert"); 
    puts("2. Remove"); 
    puts("3. Update"); 
    puts("4. List"); 
    puts("0. Back");
    line();
}

int main() {    
    int counter = 0;
    Student students[MAX_STUDENTS];    
    do {        
        Menu();
        int option = get_int(0, 4, "Option: ");        
        if (!option) { break; }        
        get_option(option, students, &counter);        
    } while (1);
}