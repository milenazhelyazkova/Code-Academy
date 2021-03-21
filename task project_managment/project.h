#include <stdio.h>
#include <stdlib.h>
#include <string.h>

static const char *FORMAT_PROJECT_OUT = "project name: %s\nobject: %s\ntime: %d\ndepending: %s\n\n";
static const char *FORMAT_PROJECT_IN = "project name: %[^\n]\nobject: %[^\n]\ntime: %d\ndepending: %[^\n]\n\n";

typedef struct project
{
    char name[100];
    char object[200];
    int time;
    char depending[100];
} project_t;

typedef struct date
{
    int day;
    int month;
    int year;
} date_t;

extern int numberOfProjects; // from function readFile is updated
extern project_t allProjects[50];

void startMenu();
void readFile();
void menu();
void printFile();
project_t *insert();
void insertProjectInFile();
int search();
void changeProject();
void dellProject();
date_t *validationDate();
void dateForProject();
void printArrayProjects();