#ifndef LIBRARY_H
#define LIBRARY_H

#include "book.h"
#include "user.h"

//Function prototypes for managing books and users
void add_book(Book **books, int *num_books, Book new_book);
void list_books(Book *books, int num_books);
void edit_book(Book *books, int num_books, int book_id, Book updated_book);
void delete_book(Book **books, int *num_books, int book_id);

void add_user(User **users, int *num_users, User new_user);
void list_users(User *users, int num_users);
void edit_user(User *users, int num_users, int user_id, User updated_user);
void delete_user(User **users, int *num_users, int user_id);

void check_out_book(Book *books, int num_books, int book_id);
void return_book(Book *books, int num_books, int book_id);

void save_books(Book *books, int num_books);
void load_books(Book **books, int *num_books);
void save_users(User *users, int num_users);
void load_users(User **users, int *num_users);

#endif