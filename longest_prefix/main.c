#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/*
    hello : hello,hell,hel,he,ello,ell,el,llo,ll,lo.
    hell: hell, hel,he,ell,el,ll.
    rgeinghellgeroguhe : ....,hell,hel,he,ell,el,ll,.....
*/

typedef struct L 
{
    char* string;
    struct L* next;
}StringList;

StringList* createStringList(char* string) {
    StringList* list = (StringList*)malloc(sizeof(StringList));
    list->string = string;
    list->next = NULL;
    return ((StringList*)list);
}

StringList* addString(StringList* list, char* string) {
    StringList* current = list;
    if (current == NULL) 
    {
        return createStringList(string);
    }
    else
    {
        while (current->next != NULL)
        {
            current = current->next;
        }
        current->next = createStringList(string);
        return ((StringList*)list);
    }
}


void printStringList(StringList* list) {
    StringList* current = list;
    while (current != NULL) {
        printf("%s\t", current->string);
        current = current->next;
    }
}

void freeStringList(StringList* list) {
    StringList* current = list;
    while (current != NULL) {
        StringList* next = current->next;
        free(current);
        current = next;
    }
}
void longest_prefix(StringList* list) 
{
    StringList* current = list;
    char* prefix = current->string;
    current = current->next;
    while (current != NULL) {
        char* string = current->string;
        char* new_prefix = (char*)malloc(100);
        int i = 0;
        while (prefix[i] == string[i] && prefix[i] != '\0' && string[i] != '\0') {
            new_prefix[i] = prefix[i];
            i++;
        }
        new_prefix[i] = '\0';
        free(prefix);
        prefix = new_prefix;
        current = current->next;
    }
    printf("\nThe longest prefix is: %s\n", prefix);
}








int main()
{
    StringList* list = NULL;
    do{
        char* string = (char*)malloc(100);
        printf("Enter a string: ");
        scanf("%s", string);
        if (strcmp(string, "exit") == 0) {
            free(string);
            break;
        }
        list = addString(list, string);
    }while(1);
    longest_prefix(list);

    return 0;
}