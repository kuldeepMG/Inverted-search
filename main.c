#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "val.h"

int main(int argc, char *argv[])
{
    file_node *f_head = NULL;     
    hash_t hash_table[26];        

    //Initialize hash table 
    for (int i = 0; i < 26; i++)
    {
        hash_table[i].index = i;
        hash_table[i].link = NULL;
    }

    printf("----------------------------------------------------\n");
    printf("         INVERTED SEARCH PROJECT         \n");
    printf("----------------------------------------------------\n");

    //Step 1: Validate input file/
    if (FILE_validation(argc, argv, &f_head) == FAILURE)
    {
        printf("Error: No valid files. Exiting.\n");
        return FAILURE;
    }

    int choice;
    char word[30];
    char save_file[20];

    while (1)
    {
        printf("\n--------------------- MENU -------------------------\n");
        printf("1. Create Database\n");
        printf("2. Display Database\n");
        printf("3. Search Word\n");
        printf("4. Save Database to File\n");
        printf("5. Update Database (from file)\n");
        printf("6. Exit\n");
        printf("----------------------------------------------------\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                if (create_database(f_head, hash_table) == SUCCESS)
                    printf("Database created successfully.\n");
                else
                    printf("Error: Could not create database.\n");
                break;

            case 2:
                display_database(hash_table);
                break;

            case 3:
                printf("Enter the word to search: ");
                scanf("%s", word);
                int index = get_index(word[0]);
                if (search_word(hash_table, word,index) == FAILURE)
                    printf("Word '%s' not found in database.\n", word);
                break;

            case 4:
                printf("Enter backup filename: ");
                scanf("%s", save_file);

                if (save_database(hash_table, save_file) == SUCCESS)
                    printf("Database saved successfully into %s\n", save_file);
                else
                    printf("Error: Could not save database.\n");
                break;

            case 5:
                printf("Enter backup file to load: ");
                scanf("%s", save_file);

                if (update_database(hash_table, save_file) == SUCCESS)
                    printf("Database updated successfully from %s\n", save_file);
                else
                    printf("Error: Could not update database.\n");
                break;

            case 6:
                printf("Exiting program.\n");
                return SUCCESS;

            default:
                printf("Invalid option. Enter again.\n");
        }
    }

    return SUCCESS;
}
