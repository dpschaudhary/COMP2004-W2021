/** read-and-parse.c
 * Submitted by: PS
 * Student #: 000000001
 *
 * This code reads names and roles from a file and builds a list.
 * After the list is built, the list is output.
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct name_list {
  char *name;
  char *role;
  struct name_list *next;
} name_list_t;

int main(int argc, char *argv[]) {
  
  FILE *fp;

  name_list_t *head = NULL;
  name_list_t *tail = NULL;

  if(argc < 2){
    fprintf(stderr, "No filename provided");
    exit(1); /* Only time this is allowed, there are arguments for not checking this */
  }

  if( (fp = fopen(argv[1], "r")) == NULL) {
    fprintf(stderr, "Can't open file %s\n",argv[1]);
  } else {
    char name_l[20];
    char *role_l = NULL;
    role_l = (char *)malloc(20*sizeof(char));
    while( fscanf(fp, "%s %s\n", name_l, role_l) != EOF) {
      /* add to the list */
      if( head == NULL) {
        /* first element */
        head = malloc(sizeof(name_list_t));
        head->name = strdup(name_l);
        head->role = strdup(role_l);
        head->next = NULL;
        tail = head;
      } else {
        /* all subsequent elements */
        name_list_t *temp_node = (name_list_t *)malloc(sizeof(name_list_t));
        temp_node->name = strdup(name_l);
        temp_node->role = strdup(role_l);
        temp_node->next = NULL;
        tail->next = temp_node;
        tail = temp_node;
      }
    }
  }

}
