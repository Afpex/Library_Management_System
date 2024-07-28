#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "library.h"

void add_book(Book **books, int *num_books, Book new_book) {
  *books = realloc(*books, (*num_books + 1) * sizeof(Book));
  (*books)[*num_books] = new_book;
  (*num_books)++;
}

void list_books(Book *books, int num_books) {
  for (int i = 0; i < num_books; i++) {
    printf("ID: %d, Title: %s, Author: %s, Checked Out: %d\n",
          books[i].id, books[i].title, books[i].author, books[i].is_checked_out);
  }
}

void add_user(User **users, int *num_users, User new_user) {
  *users = realloc(*users, (*num_users + 1) * sizeof(User));
  (*users)[*num_users] = new_user;
  (*num_users)++;
}

void list_users(User *users, int num_users) {
  for (int i = 0; i < num_users; i++) {
    printf("ID: %d, Name: %s\n", users[i].id, users[i].name);
  }
}

void check_out_book(Book *books, int num_books, int book_id) {
  for (int i = 0; i < num_books; i++) {
    if (books[i].id == book_id) {
        books[i].is_checked_out = 1;
        return;
    }
  }
}

void return_book(Book *books, int num_books, int book_id) {
  for (int i = 0; i < num_books; i++) {
    if (books[i].id == book_id) {
        books[i].is_checked_out = 0;
        return;
    }
  }
}