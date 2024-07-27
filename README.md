Library Management System 📚

Overview

This project is a simple Library Management System implemented in C. It incorporates various fundamental concepts such as structures, dynamic memory allocation, file I/O, and a command-line interface for user interaction. This project is ideal for sharpening software engineering skills and understanding the basics of C programming.

Features
Book and User Management: Add, remove, and list books and users.
Persistent Storage: Save and load library data using file I/O.
Dynamic Memory Management: Efficiently manage collections of books and users.
Command-Line Interface: Interact with the system using a simple CLI.
Modular Codebase: Well-structured code with proper use of header files and multiple source files.
Basic Error Handling: Handle errors and edge cases gracefully.

Project Structure
LibraryManagement/
├── include/
│   ├── book.h
│   ├── user.h
│   ├── library.h
├── src/
│   ├── main.c
│   ├── book.c
│   ├── user.c
│   ├── library.c
├── data/
│   ├── books.txt
│   ├── users.txt
├── Makefile
├── README.md

Getting Started
Prerequisites
  GCC compiler
  VS Code or any other text editor
  Make (optional)

Installation
  Clone the repository
    git clone https://github.com/yourusername/LibraryManagement.git
cd LibraryManagement

Build the project
  make

Run the application
  ./library_management

Usage
  Add a Book: Enter book details like ID, title, and author.
  Add a User: Enter user details like ID and name.
  List Books: View all books in the library.
  List Users: View all users in the library.
  Save and Exit: Save the current state of the library and exit the application.

Code Quality
  Clear and well-commented code
  Meaningful variable and function names
  Proper error handling and input validation
  Modular and maintainable codebase

Contributing
  Contributions are welcome! Please fork the repository and submit a pull request for any improvements or bug fixes.

Acknowledgements
  Inspired by various C programming tutorials and resources.