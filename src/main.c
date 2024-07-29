#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "library.h"

void print_menu() {
  printf("Library Management System\n");
  printf("1. Add Book\n");
  printf("2. List Books\n");
  printf("3. Add User\n");
  printf("4. List Users\n");
  printf("5. Check Out Book\n");
  printf("6. Return Book\n");
  printf("7. Exit\n");
}

int main() {
  Book *books = NULL;
  int num_books = 0;
  User *users = NULL;
  int num_users = 0;

  load_books(&books, &num_books);
  load_users(&users, &num_users);

  int choice;
  while (1) {
    print_menu();
    scanf("%d", &choice);
    if (choice == 7) break;

    int id;
    Book new_book;
    User new_user;

    switch (choice) {
      case 1:
        printf("Enter book ID: ");
        scanf("%d", &new_book.id);
        printf("Enter book title: ");
        scanf("%s", new_book.title);
        printf("Enter book author: ");
        scanf("%s", new_book.author);
        new_book.is_checked_out = 0;
        add_book(&books, &num_books, new_book);
        save_books(books, num_books);
        break;
      case 2:
        list_books(books, num_books);
        break;
      case 3:
        printf("Enter user ID: ");
        scanf("%d", &new_user.id);
        printf("Enter user name: ");
        scanf("%s", new_user.name);
        add_user(&users, &num_users, new_user);
        save_users(users, num_users);
        break;  
      case 4:
        list_users(users, num_users);
        break;
      case 5:
        printf("Enter book ID to check out: ");
        scanf("%d", &id);
        check_out_book(books, num_books, id);
        save_books(books, num_books);
        break;
      case 6:
        printf("Enter book ID to return: ");
        scanf("%d", &id);
        return_book(books, num_books, id);
        save_books(books, num_books);
        break;
      default:
        printf("Invalid choice\n");
    }
  }

  free(books);
  free(users);
  return 0;
}