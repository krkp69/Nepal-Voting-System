/*
Author: Kusmakhar Pathak
college Name: Sunway International Business School
University: Infrastructure University Kuala Lumpur (IUKL)
Project on Voting System
Date: 2019/02/23
github: https://github.com/krkp69/
Linkedin: https://www.linkedin.com/in/kusmakhar-pathak-7620ab152/
facebook: https://facebook.com/krkp69/
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define BUFFER_SIZE 1000

/* Function declarations */
int indexOf(FILE *fptr, const char *word, int *line, int *col);
void voters_id();
void menu();
void communist();
void prajatantra();
void sadbhawana();
void rastriya_janata();
void forum();
void naya_shakti();
void confirmation();
void vote_count();
void more();

void voters_id(){
    FILE *fptr;
    char path[100];
    char word[50];
    int line, col;
    /* Input file path */
    /* Input word to search in file */
    printf("\n\n\t\tEnter Voters ID: ");
    scanf("%s", word);
    /* Try to open file */
    fptr = fopen("voters/voters_ID.csv", "r");

    /* Exit if file not opened successfully */
    if (fptr == NULL)
    {
        printf("\n\n\t\tUnable to open file.\n");
        printf("\t\tPlease check you have read/write previleges.\n");
        exit(EXIT_FAILURE);
    }
    // Find index of word in fptr
    indexOf(fptr, word, &line, &col);
      if (line != -1){
        system("cls");
        menu();
        //printf("'%s' found at line: %d", word, line + 1);
      }
    else{
      system("cls");
      printf("\n\n\t\t'%s' Voters ID does not exists.", word);
      voters_id();

    }
    // Close file
    fclose(fptr);

    //return 0;
}
/**
 * Finds, first index of a ID in given file. First index is represented
 * using line and column.
 */
int indexOf(FILE *fptr, const char *id, int *line, int *col){
  char str[BUFFER_SIZE];
  char *pos;

  *line = -1;
  *col  = -1;

  while ((fgets(str, BUFFER_SIZE, fptr)) != NULL)
  {
      *line += 1;
      // Find first occurrence of word in str
      pos = strstr(str, id);
      if (pos != NULL)
      {
          // First index of word in str is
          // Memory address of pos - memory
          // address of str.
          *col = (pos - str);
          break;
      }
  }
  // If word is not found then set line to -1
  if (*col == -1)
      *line = -1;

  return *col;
}


void vote_count() {
  int choose;
  printf("\n\n\t\t**********Welcome to Voting System**********\n\n\n");
  printf("\t\t***************Candidate List***************\n\n");
  printf("\t\t1.\tCommunist Party of Nepal\n");
  printf("\t\t2.\tRastriya Prajatantra\n");
  printf("\t\t3.\tNepal Sadbhawana\n");
  printf("\t\t4.\tRastriya Janata\n");
  printf("\t\t5.\tSanghiya Samajbadi Forum\n");
  printf("\t\t6.\tNaya Shakti\n");
  printf("\n\t\t********************************************\n");
  printf("\t\tChoose Candidate ========>\t");
  scanf("\t\t\t%d",&choose);

  switch (choose) {
    case 1: {
      system("cls");
      FILE * file;
      char ch;
      int vote, total_vote;

      file = fopen("party/Communist Party of Nepal.txt", "r");
      /* Check if file opened successfully */
      if (file == NULL)
      {
        system("cls");
        printf("\n\n\t\tUnable to open file.\n");
        printf("\t\tPlease check if file exists and you have read privilege.\n\n\n");
        exit(EXIT_FAILURE);
      }
      /*
       * Logic to count characters, words and lines.
       */
      vote =  total_vote = 0;
      while ((ch = fgetc(file)) != EOF)
      {
          vote++;
          /* Check new line */
          if (ch == '\n' || ch == '\0')
              total_vote++;
          /* Check words */
      }
      /* Increment words and lines for last word */
      if (vote > 0)
      {
          // words++;
          total_vote++;
      }
      /* Print file statistics */
      printf("\n\n");
      printf("\t\tTotal Vote      = %d\n\n\n\n", total_vote);
        /* Close files to release resources */
      fclose(file);
      break;
    }
    case 2: {
      system("cls");
      FILE * file;
      char ch;
      int vote, total_vote;

      file = fopen("party/Rastriya Prajatantra.txt", "r");
      /* Check if file opened successfully */
      if (file == NULL)
      {
        system("cls");
        printf("\n\n\t\tUnable to open file.\n");
        printf("\t\tPlease check if file exists and you have read privilege.\n\n\n");
        exit(EXIT_FAILURE);
      }
      /*
       * Logic to count characters, words and lines.
       */
      vote =  total_vote = 0;
      while ((ch = fgetc(file)) != EOF)
      {
          vote++;
          /* Check new line */
          if (ch == '\n' || ch == '\0')
              total_vote++;
          /* Check words */
      }
      /* Increment words and lines for last word */
      if (vote > 0)
      {
          // words++;
          total_vote++;
      }
      /* Print file statistics */
      printf("\n\n");
      printf("\t\tTotal Vote      = %d\n\n\n\n", total_vote);
        /* Close files to release resources */
      fclose(file);
      break;
    }
    case 3: {
      system("cls");
      FILE * file;
      char ch;
      int vote, total_vote;

      file = fopen("party/Nepal Sadbhawana.txt", "r");
      /* Check if file opened successfully */
      if (file == NULL)
      {
        system("cls");
        printf("\n\n\t\tUnable to open file.\n");
        printf("\t\tPlease check if file exists and you have read privilege.\n\n\n");
        exit(EXIT_FAILURE);
      }
      /*
       * Logic to count characters, words and lines.
       */
      vote =  total_vote = 0;
      while ((ch = fgetc(file)) != EOF)
      {
          vote++;
          /* Check new line */
          if (ch == '\n' || ch == '\0')
              total_vote++;
          /* Check words */
      }
      /* Increment words and lines for last word */
      if (vote > 0)
      {
          // words++;
          total_vote++;
      }
      /* Print file statistics */
      printf("\n\n");
      printf("\t\tTotal Vote      = %d\n\n\n\n", total_vote);
        /* Close files to release resources */
      fclose(file);
      break;
    }
    case 4: {
      system("cls");
      FILE * file;
      char ch;
      int vote, total_vote;

      file = fopen("party/Rastriya Janata.txt", "r");
      /* Check if file opened successfully */
      if (file == NULL)
      {
        system("cls");
        printf("\n\n\t\tUnable to open file.\n");
        printf("\t\tPlease check if file exists and you have read privilege.\n\n\n");
        exit(EXIT_FAILURE);
      }
      /*
       * Logic to count characters, words and lines.
       */
      vote =  total_vote = 0;
      while ((ch = fgetc(file)) != EOF)
      {
          vote++;
          /* Check new line */
          if (ch == '\n' || ch == '\0')
              total_vote++;
          /* Check words */
      }
      /* Increment words and lines for last word */
      if (vote > 0)
      {
          // words++;
          total_vote++;
      }
      /* Print file statistics */
      printf("\n\n");
      printf("\t\tTotal Vote      = %d\n\n\n\n", total_vote);
        /* Close files to release resources */
      fclose(file);
      break;
    }
    case 5: {
      system("cls");
      printf("\n\n");
      FILE * file;
      char ch;
      int vote, total_vote;

      file = fopen("party/Sanghiya Samajbadi Forum.txt", "r");
      /* Check if file opened successfully */
      if (file == NULL)
      {
        system("cls");
        printf("\n\n\t\tUnable to open file.\n");
        printf("\t\tPlease check if file exists and you have read privilege.\n\n\n");
        exit(EXIT_FAILURE);
      }
      /*
       * Logic to count characters, words and lines.
       */
      vote =  total_vote = 0;
      while ((ch = fgetc(file)) != EOF)
      {
          vote++;
          /* Check new line */
          if (ch == '\n' || ch == '\0')
              total_vote++;
          /* Check words */
      }
      /* Increment words and lines for last word */
      if (vote > 0)
      {
          // words++;
          total_vote++;
      }
      /* Print file statistics */
      printf("\n\n");
      printf("\t\tTotal Vote      = %d\n\n\n\n", total_vote);
        /* Close files to release resources */
      fclose(file);
      break;
    }
    case 6: {
      system("cls");
      printf("\n\n");
      FILE * file;
      char ch;
      int vote, total_vote;

      file = fopen("party/Naya Shakti.txt", "r");
      /* Check if file opened successfully */
      if (file == NULL)
      {
        system("cls");
        printf("\n\n\t\tUnable to open file.\n");
        printf("\t\tPlease check if file exists and you have read privilege.\n\n\n");
        exit(EXIT_FAILURE);
      }
      /*
       * Logic to count characters, words and lines.
       */
      vote =  total_vote = 0;
      while ((ch = fgetc(file)) != EOF)
      {
          vote++;
          /* Check new line */
          if (ch == '\n' || ch == '\0')
              total_vote++;
          /* Check words */
      }
      /* Increment words and lines for last word */
      if (vote > 0)
      {
          // words++;
          total_vote++;
      }
      /* Print file statistics */
      printf("\n\n");
      printf("\t\tTotal Vote      = %d\n\n\n\n", total_vote);
        /* Close files to release resources */
      fclose(file);
      break;
    }
    default: {
      system("cls");
      menu();
      break;
    }
  }

}

void communist(){
  printf("\n\n\t\t\t**Thank You**\n\n");
  printf("\t\tYour are choosing 'Communist Party of Nepal'\n\n");
  FILE * file;
  char ch;
  printf("\t\tAre you sure you want to vote to this Candidate\n\n\t\tYes 'Y' & NO 'N'\n");
  scanf("\t\t%s",&ch);
  if (ch == 'y' || ch == 'Y') {
    /* code */
    file = fopen("party/Communist Party of Nepal.txt", "a");
    /* Check if file opened successfully */
    if (file == NULL)
    {
      system("cls");
      printf("\n\n\t\tUnable to open file.\n");
      printf("\t\tPlease check if file exists and you have read privilege.\n\n\n");
      exit(EXIT_FAILURE);
    }
    fprintf(file,"\n1");
    fclose(file);
    system("cls");
    printf("\n\n\t\tThank you for voting Communist Party of Nepal\n");
    more();
  }
  else{
    system("cls");
    printf("\n\n\t\tThank you!!!\n");
    exit(EXIT_FAILURE);
  }
}
void prajatantra(){
  FILE * file;
  char ch;
  printf("\n\n\t\t\t**Thank You**\n\n");
  printf("\t\tYour are choosing 'Rastriya Prajatantra'\n\n");
  printf("\n\t\tAre you sure you want to vote to this Candidate\n\n\t\tYes 'Y' & NO 'N'\n");
  scanf("\t\t%s",&ch);
  if (ch == 'y' || ch == 'Y') {
    /* code */
    file = fopen("party/Rastriya Prajatantra.txt", "a");
    /* Check if file opened successfully */
    if (file == NULL)
    {
      system("cls");
      printf("\n\n\t\tUnable to open file.\n");
      printf("\t\tPlease check if file exists and you have read privilege.\n\n\n");
      exit(EXIT_FAILURE);
    }
    fprintf(file,"\n1");
    fclose(file);
    system("cls");
    printf("\n\n\t\tThank you for voting Rastriya Prajatantra\n");
    more();
  }
  else{
    system("cls");
    printf("\n\n\t\tThank you!!!\n");
    exit(EXIT_FAILURE);
  }
}
void sadbhawana(){
  FILE * file;
  char ch;
  printf("\n\n\t\t\t**Thank You**\n\n");
  printf("\t\tYour are choosing 'Nepal Sadbhawana'\n");
  printf("\t\tAre you sure you want to vote to this Candidate\nYes 'Y' & NO 'N'\n");
  scanf("\t\t%s",&ch);
  if (ch == 'y' || ch == 'Y') {
    /* code */
    file = fopen("party/Nepal Sadbhawana.txt", "a");
    /* Check if file opened successfully */
    if (file == NULL)
    {
      system("cls");
      printf("\n\n\t\tUnable to open file.\n");
      printf("\t\tPlease check if file exists and you have read privilege.\n\n\n");
      exit(EXIT_FAILURE);
    }
    fprintf(file,"\n1");
    fclose(file);
    system("cls");
    printf("\n\n\t\tThank you for voting Nepal Sadbhawana\n");
    more();
  }
  else{
    system("cls");
    printf("\n\n\t\tThank you!!!\n");
    exit(EXIT_FAILURE);
  }
}
void rastriya_janata(){
  FILE * file;
  char ch;
  printf("\n\n\t\t\t**Thank You**\n\n");
  printf("\t\tYour are choosing 'Rastriya Janata'\n\n");
  printf("\t\tAre you sure you want to vote to this Candidate\n\n\t\tYes 'Y' & NO 'N'\n");
  scanf("\t\t%s",&ch);
  if (ch == 'y' || ch == 'Y') {
    /* code */
    file = fopen("party/Rastriya Janata.txt", "a");
    /* Check if file opened successfully */
    if (file == NULL)
    {
      system("cls");
      printf("\n\n\t\tUnable to open file.\n");
      printf("\t\tPlease check if file exists and you have read privilege.\n\n\n");
      exit(EXIT_FAILURE);
    }
    fprintf(file,"\n1");
    fclose(file);
    system("cls");
    printf("\n\n\t\tThank you for voting Rastriya Janata\n");
    more();
  }
  else{
    system("cls");
    printf("\n\n\t\tThank you!!!\n\n\n");
    exit(EXIT_FAILURE);
  }
}
void forum(){
  FILE * file;
  char ch;
  printf("\n\n\t\t\t**Thank You**\n\n");
  printf("\t\tYour are choosing 'Sanghiya Samajbadi Forum'\n\n");
  printf("\t\tAre you sure you want to vote to this Candidate\n\n\t\tYes 'Y' & NO 'N'\n");
  scanf("\t\t%s",&ch);
  if (ch == 'y' || ch == 'Y') {
    /* code */
    file = fopen("party/Sanghiya Samajbadi Forum.txt", "a");
    /* Check if file opened successfully */
    if (file == NULL)
    {
        system("cls");
        printf("\n\n\t\tUnable to open file.\n");
        printf("\t\tPlease check if file exists and you have read privilege.\n\n\n");
        exit(EXIT_FAILURE);
    }
    fprintf(file,"\n1");
    fclose(file);
    system("cls");
    printf("\n\n\t\tThank you for voting Sanghiya Samajbadi Forum\n");
    more();
  }
  else{
    system("cls");
    printf("\n\n\t\tThank you!!!\n\n\n");
    exit(EXIT_FAILURE);
  }
}
void naya_shakti(){
  FILE * file;
  char ch;
  printf("\n\n\t\t\t**Thank You**\n\n");
  printf("\t\tYour are choosing 'Naya Shakti'\n\n");
  printf("\t\tAre you sure you want to vote to this Candidate\n\n\t\tYes 'Y' & NO 'N'\n");
  scanf("\t\t%s",&ch);
  if (ch == 'y' || ch == 'Y') {
    /* code */
    file = fopen("party/Naya Shakti.txt", "a");
    /* Check if file opened successfully */
    if (file == NULL)
    {
        system("cls");
        printf("\n\n\t\tUnable to open file.\n");
        printf("\t\tPlease check if file exists and you have read privilege.\n\n\n");
        exit(EXIT_FAILURE);
    }
    fprintf(file,"\n1");
    fclose(file);
    system("cls");
    printf("\n\n\t\tThank you for voting Naya Shakti\n");
    more();
  }
  else{
    system("cls");
    printf("\n\n\t\tThank you!!!\n\n\n");
    exit(EXIT_FAILURE);
  }
}


void menu() {
  int choose;
  printf("\n\n\t\t**********Welcome to Voting System**********\n\n\n");
  printf("\t\t***************Candidate List***************\n\n");
  printf("\t\t1.\tCommunist Party of Nepal\n");
  printf("\t\t2.\tRastriya Prajatantra\n");
  printf("\t\t3.\tNepal Sadbhawana\n");
  printf("\t\t4.\tRastriya Janata\n");
  printf("\t\t5.\tSanghiya Samajbadi Forum\n");
  printf("\t\t6.\tNaya Shakti\n");
  printf("\n\t\t********************************************\n");
  printf("\t\t7.\tCount vote\n");
  printf("\n\n");
  printf("\t\tChoose Candidate ========>\t");
  scanf("\t\t\t%d",&choose);

  switch (choose) {
    case 1: {
      system("cls");
      printf("\n\n");
      communist();
      break;
    }
    case 2: {
      system("cls");
      printf("\n\n");
      prajatantra();
      break;
    }
    case 3: {
      system("cls");
      printf("\n\n");
      sadbhawana();
      break;
    }
    case 4: {
      system("cls");
      printf("\n\n");
      rastriya_janata();
      break;
    }
    case 5: {
      system("cls");
      printf("\n\n");
      forum();
      break;
    }
    case 6: {
      system("cls");
      printf("\n\n");
      naya_shakti();
      break;
    }
    case 7:{
      system("cls");
      vote_count();
      break;
    }
    default: {
      system("cls");
      menu();
      break;
    }
  }
}
void more(){
  char ch;
  printf("\t\tMore Voters Yes 'y' or No 'n'\n");
  scanf("\t\t%s",&ch);
  if(ch == 'y' || ch == 'Y')
  {
    system("cls");
    voters_id();
  }
  else if(ch == 'n' || ch == 'N'){
    printf("\n\n\t\tThank you\n\n\n");
    exit(EXIT_FAILURE);
  }
  else{
    system("cls");
    more();
  }
}

int main(int argc, char const *argv[]) {
  /* code */
  //vote();
  //vote_count();
  voters_id();
  //menu();
  return 0;
}
