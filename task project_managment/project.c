#include "project.h"

void readFile()
{
    FILE *fp = NULL;
    fp = fopen("projectData.txt", "r");
    if (fp == NULL)
    {
        perror("Unable to open the file");
        exit(1);
    }
    // place for 50 projects

    int i = 0;
    while (fscanf(fp, FORMAT_PROJECT_IN, &allProjects[i].name, &allProjects[i].object, &allProjects[i].time, &allProjects[i].depending) != EOF)
    {
        i++;
    }

    numberOfProjects = i;
    fclose(fp);
}
void startMenu(){
    
    printf("\n1. Work with data\n");
    printf("2. Exit\n");
    printf("\nPlease enter your Choice: ");
    int ch;
    fflush(stdin);
    scanf("%d", &ch);
    while(ch!= 2)
    {
        if(ch == 1){
           menu();
        }
        else if(ch != 2 && ch != 1){
            printf("\nWrong choise please try again\n");
            startMenu();
        }
    }
    exit(0);
}
void menu()
{
    int choice;

    while (1)
    {

        printf("\n==================Project Management System=============\n\n");

        printf("1. Display All\n\n");
        printf("2. Add a Project\n\n");
        printf("3. Search\n\n");
        printf("4. Modify\n\n");
        printf("5. Delete\n\n");
        printf("6. Check date to start a Project\n\n");

        printf("\n/ just for system check / 7. Display downloaded data from file\n\n");

        printf("========================================================\n");

        printf("\nPlease enter your Choice: ");
        fflush(stdin);
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printFile();
            startMenu();
            break;

        case 2:
            insertProjectInFile();
            startMenu();
            break;

        case 3:
            search();
            startMenu();
            break;

        case 4:
            changeProject();
            startMenu();
            break;

        case 5:
            dellProject();
            break;

        case 6:
            dateForProject();
            startMenu();
            break;

        case 7:
            printArrayProjects();
            startMenu();
            break;

        }
        startMenu();
    }

}

void printFile()
{
    FILE *fp = NULL;
    fp = fopen("projectData.txt", "r");
    if (fp == NULL)
    {
        printf("Cannot open file \n");
        exit(0);
    }
    int c;
    // Read contents from file
    c = fgetc(fp);
    printf("\n");
    while (c != EOF)
    {
        printf("%c", c);
        c = fgetc(fp);
    }

    fclose(fp);
}

project_t *insert()
{

    project_t *searched = malloc(sizeof(project_t));
    if (!searched)
    {
        perror("no place available");
        exit(1);
    }
    printf("\nEnter project name: ");
    fflush(stdin);
    gets(searched->name);
    printf("\nEnter object of the project: ");
    fflush(stdin);
    gets(searched->object);
    printf("\nEnter time for the project: ");
    fflush(stdin);
    scanf(" %d", &searched->time);
    printf("\nEnter name of project it depends on if NO depending please write 'none': ");
    fflush(stdin);
    gets(searched->depending);

    int flag = 0;
    for (int k = 0; k <= numberOfProjects; k++)
    {
        if (strcmp(allProjects[k].name, searched->depending) == 0) // check if the depending exists
        {
            flag = 1;
        }
    }
    if (strcmp(searched->depending, "none") == 0){ // if no deppending
        flag = 1;
    }
    if (flag == 0)
    {
        printf("\nThe depending file '%s' do NOT exists, keep in mind you should enter it also: ", searched->depending);
    }
    return searched;
}

void insertProjectInFile()
{
    FILE *fp = NULL;
    fp = fopen("projectData.txt", "a");
    if (fp == NULL)
    {
        perror("Unable to open the file");
        exit(1);
    }
    project_t *project = insert();
    fprintf(fp, FORMAT_PROJECT_OUT, project->name, project->object, project->time, project->depending);

    fclose(fp);
    readFile(); // download new data in array with projects
}

int search() // returns place of serched element in the array stored from file
{
    //  project_t searched;
    int isFound = 0;
    char searchedFile[100];
    printf("\nEnter file you want to use: ");
    fflush(stdin);
    scanf("%[^\n]", searchedFile);
    int k;
    for (k = 0; k <= numberOfProjects; k++)
    {
        if (strcmp(allProjects[k].name, searchedFile) == 0)
        {
            // prints the data of the project serched
            printf("\n");
            printf(FORMAT_PROJECT_OUT, allProjects[k].name, allProjects[k].object, allProjects[k].time, allProjects[k].depending);
            isFound = 1;

            return k;
        }
    }
    if (isFound == 0)
    {
        printf("Project does not exist. Try again.\n");
        return search();
    }
}

void changeProject()
{
    int i = search(); // returns searched project place in array and prints the info in the project

    int choice = 0;
    while (choice != 5)
    {
        printf("\nChose what to change\nFor name press: 1\nFor oject press: 2\nFor time press: 3\nFor depending press: 4\nTo exit press: 5\n");
        scanf(" %d", &choice);
        switch (choice)
        {
        case 1:
            printf("\nEnter new name: ");
            fflush(stdin);
            gets(allProjects[i].name);
            break;
        case 2:
            printf("\nEnter new object: ");
            fflush(stdin);
            gets(allProjects[i].object);
            break;
        case 3:
            printf("\nEnter new time: ");
            fflush(stdin);
            scanf("%d", &allProjects[i].time);
            break;
        case 4:
            printf("\nEnter what to change in dependings\nPress 1 to delete\nPress 2 to change name\n");
            int depChoice;
            fflush(stdin);
            scanf("%d", &depChoice);
            if (depChoice == 1)
            {
                strcpy(allProjects[i].depending, "none");
            }
            if (depChoice == 2)
            {
                printf("\nEnter new deppending: ");
                fflush(stdin);
                gets(allProjects[i].depending);
                int flag = 0;
                for (int k = 0; k <= numberOfProjects; k++)
                {
                    if (strcmp(allProjects[k].name, allProjects[i].depending) == 0) // check if the depending exists
                    {
                        flag = 1;
                    }
                }

                if (strcmp(allProjects[i].depending, "none") == 0){ // if no deppending
                    flag = 1;
                }
                
                if (flag == 0)
                {
                    printf("\nThe depending file '%s' do NOT exists, keep in mind you should enter it also: ", allProjects[i].depending);
                }
            }
            break;
        case 5:
            // print changed info
            printf("\nHere is your changed project:\n\n");
            printf(FORMAT_PROJECT_OUT, allProjects[i].name, allProjects[i].object, allProjects[i].time, allProjects[i].depending);
            break;

        default:
            printf("\nWrong choise please try again.");
            break;
        }
    }
    printf("Do you want to save it to file?\nFor ''YES' press: 1\nFor 'NO' press 2\n");
    int save;
    fflush(stdin);
    scanf("%d", &save);
    if (save == 1)
    {
        FILE *fp = NULL;
        fp = fopen("projectData.txt", "w"); // deletes the data from file
        if (fp == NULL)
        {
            perror("Unable to open the file");
            exit(1);
        }
        for (int j = 0; j < numberOfProjects; j++)
        { // enters new array with the changed ellement in the file
            fprintf(fp, FORMAT_PROJECT_OUT, allProjects[j].name, allProjects[j].object, allProjects[j].time, allProjects[j].depending);
        }
        fclose(fp);
    }
}

void dellProject()
{
    int possition = search(); // returns searched project place in array and prints the info in the project
    printf("Do you want to delete it from file?\nFor ''YES' press: 1\nFor 'NO' press 2\n");
    int dell;
    scanf("%d", &dell);
    if (dell == 1)
    {
        for (int n = possition; n < numberOfProjects; n++)
        {
            allProjects[n] = allProjects[n + 1]; // remove the element from the array
        }
        numberOfProjects -= 1; // number of elements in array are -1
        FILE *fp = NULL;
        fp = fopen("projectData.txt", "w"); // delete the old data from file
        if (fp == NULL)
        {
            perror("Unable to open the file");
            exit(1);
        }
        for (int j = 0; j < numberOfProjects; j++)
        { // enters the array with the deleted element in the file
            fprintf(fp, FORMAT_PROJECT_OUT, allProjects[j].name, allProjects[j].object, allProjects[j].time, allProjects[j].depending);
        }
        fclose(fp);
        printFile(); // print the file
    }
}

date_t *validationDate()
{
    date_t *date = malloc(sizeof(date_t));
    if (!date)
    {
        perror("no place available");
        exit(1);
    }
    int isFalid = 0;
    printf("Enter date (DD/MM/YYYY format): ");
    scanf("%d/%d/%d", &date->day, &date->month, &date->year);
    //check year
    if (date->year >= 1900 && date->year <= 9999)
    {
        //check month
        if (date->month >= 1 && date->month <= 12)
        {
            //check days
            if ((date->day >= 1 && date->day <= 31) && (date->month == 1 || date->month == 3 || date->month == 5 || date->month == 7 || date->month == 8 || date->month == 10 || date->month == 12))
                isFalid = 1;
            else if ((date->day >= 1 && date->day <= 30) && (date->month == 4 || date->month == 6 || date->month == 9 || date->month == 11))
                isFalid = 1;
            else if ((date->day >= 1 && date->day <= 28) && (date->month == 2))
                isFalid = 1;
            else if (date->day == 29 && date->month == 2 && (date->year % 400 == 0 || (date->year % 4 == 0 && date->year % 100 != 0)))
                isFalid = 1;
            else
            {
                printf("Day is invalid. Try again\n");
                free(date);
                return validationDate();
            }
        }
        else
        {
            printf("Month is not valid. Try again\n");
            free(date);
            return validationDate();
        }
    }
    else
    {
        printf("Year is not valid. Try again\n");
        free(date);
        return validationDate();
    }
    if (isFalid)
    {
        return date;
    }
}

void dateForProject(){
    date_t *projectdate = validationDate();
    int daysToAdd = 0;
    int num = search(); // position in array of searched project and prints it
    
    printf("\nThe start date for the project '%s' is: %d/%.2d/%d", allProjects[num].name, projectdate->day, projectdate->month, projectdate->year);
    printf("\nBefore you can start this project you must ensure the next projects is completed: ");
    char deppName[100];
    strcpy(deppName, allProjects[num].depending);  // take deppending project name
    int isFound = 0;
    int k;
    if(strcmp(deppName,"none") != 0){ // there is deppending
    
        for (k = 0; k <= numberOfProjects; k++) // check all projects for this name
        {   
        
            if (strcmp(allProjects[k].name, deppName) == 0) // if there is such project
            {   
             // print name of the deppending project 
                printf("\n%s", allProjects[k].name);
                daysToAdd += allProjects[k].time; // add days of its completishion
                strcpy(deppName, allProjects[k].depending); // the depp of this project is now the name to be checked
                isFound = 1;
                k=-1; // check again all projects
            }
        }
        if(isFound == 0){
            printf("\n\nThe project '%s' is not created.", deppName);
        }
    }
    else{
         printf("\n\nThe project '%s' has no deppending project.", allProjects[num].name);
    }
    
    printf("\n\nMinimum Days needed before start of the project: %d", daysToAdd);
    projectdate->day += daysToAdd;
    if ((projectdate->day > 31) && (projectdate->month == 1 || projectdate->month == 3 || projectdate->month == 5 || projectdate->month == 7 || projectdate->month == 8 || projectdate->month == 10 || projectdate->month == 12)){
        projectdate->month ++;
        if(projectdate->month >12){
            projectdate->year++;
            projectdate->month -=12;
        }
        projectdate->day -= 31;
    }
    else if ((projectdate->day> 30) && (projectdate->month == 4 || projectdate->month == 6 || projectdate->month == 9 || projectdate->month == 11)){
        projectdate->month ++;
        if(projectdate->month >12){
            projectdate->year++;
            projectdate->month -=12;
        }
        projectdate->day -=30;
    }
    else if ((projectdate->day> 28) && (projectdate->month == 2)){
        projectdate->month ++;
        projectdate->day -=28;
    }
    else if (projectdate->day > 29 && projectdate->month == 2 && (projectdate->year % 400 == 0 || (projectdate->year % 4 == 0 && projectdate->year % 100 != 0))){
        projectdate->month ++;
        daysToAdd -=29;
    }
        
    printf("\n\nEarliest  Start date for the project is: %d/%.2d/%d", projectdate->day, projectdate->month, projectdate->year);

}

void printArrayProjects()
{
    /*print projects downloaded */
    for (int j = 0; j < numberOfProjects; j++)
    {
        printf("\n%s\n%s\n%d\n%s\n", allProjects[j].name, allProjects[j].object, allProjects[j].time, allProjects[j].depending);
    }
}