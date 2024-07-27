#ifndef LIBRARY_H
#define LIBRARY_H

#include "book.h"
#include "user.h"

//Function prototypes for managing books and users
void add_book(Book **books, int *num_books, Book new_book);
void list_books(Book *books, int num_books);
void add_user(User **users, int *num_users, User new_user);
void list_users(User *users, int num_users);
void check_out_book(Book *books, int num_books, int book_id);
void return_book(Book *books, int num_books, int book_id);

#endif