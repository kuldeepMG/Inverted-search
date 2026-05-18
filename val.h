#ifndef VAL_H
#define VAL_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include<ctype.h>

// Macros for success/failure 
#define SUCCESS 1
#define FAILURE 0


typedef struct sub
{
    char filename[100];
    int word_count;
    struct sub *link;
}sub_node;

typedef struct main
{
    int file_count;
    char word[50];
    sub_node *s_link;
    struct main *m_link;
}main_node;

typedef struct hash
{
    int index;
    main_node *link;
}hash_t;

typedef struct file
{
    char file_name[20];
    struct file *link;
}file_node;


int FILE_validation(int count ,char *argv[],file_node **head);

int Insert_last(file_node **head, char *file_name);

int create_database(file_node *f_head, hash_t hash_table[]);

int get_index(char ch);

int insert_hash(hash_t *hash_table, int index, char *word, char *filename);

int Check_Duplicate_File(file_node **head , char *file_name);

int  display_database(hash_t hash_table[]);

int search_word(hash_t hash_table[], char *word, int index);

int save_database(hash_t hash_table[], char *save_file);

int update_database(hash_t hash_table[], char *load_file);

#endif