#include <stdio.h>
#include "list.h"

int main(int argc, char* argv[])
{
  /* we add random words in the list */
  List* new = new_list();
  list_add_tail(list, "bonjour", "hello");
  list_add_tail(list, "salut", "hi");
  list_add(list, 1, "aurevoir", "goodbye");
  list_add_head(list, "vache", "cow");
  list_add(list, 3, "telephone", "phone");
  list_add_tail(list, "jambon", "ham");
  list_add_tail(list, "fromage", "cheese");
  list_add_head(list, "seul", "alone");
  list_add(list, 5, "neveu", "nephew");
  list_add_tail(list, "mur", "wall");
  list_add(list, 2, "lune", "moon");
  list_add_head(list, "salon", "livingroom");
  list_add(list, 12, "chien", "dog");
  list_add_tail(list, "chat", "cat");

  List* copy = list_copy(list);
  delete_list(list);

  /* we let the user tests the list */
  list_menu(copy);

  /* we free the memory */
  delete_list(copy);

  return 0;
}
