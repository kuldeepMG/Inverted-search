## Inverted Search Project (Data Structures in C)

The **Inverted Search Project** is a data structure–based application implemented in **C programming** that demonstrates how efficient search mechanisms work internally, similar to search engines and dictionaries. The project focuses on building an **inverted index**, where each word is mapped to the list of files in which it appears.

This system reads multiple text files as input, tokenizes the words, and stores them using **Hash Tables and Linked Lists** to enable fast and optimized searching. Instead of scanning every file for a search query, the inverted index allows direct access to relevant files, significantly improving search performance.

The project is designed with a **modular programming approach**, making use of dynamic memory allocation and file handling techniques. It helps in understanding real-world applications of data structures such as hashing, linked lists, and efficient data organization.

This project was developed as part of a **Data Structures training program**, with the goal of strengthening practical knowledge in C programming and algorithmic problem-solving.

### Key Highlights

* Efficient word-to-file mapping using inverted indexing
* Use of hash tables for fast data access
* Linked lists for dynamic data storage
* File handling and memory management in C
* Modular and scalable code structure

This project serves as a strong foundation for understanding how large-scale text search systems are designed and implemented.

---

## Project Features

* Builds an inverted index mapping words to the files in which they appear
* Supports fast keyword-based searching using hash tables
* Handles multiple text files efficiently
* Uses linked lists for dynamic storage of file and word information
* Modular code structure for easy maintenance and scalability
* Demonstrates efficient file handling and memory management in C

---

## Algorithm / Workflow

1. Read multiple input text files from the command line
2. Tokenize each file into individual words
3. Store words in a hash table based on a hash function
4. Maintain linked lists for each hash index to handle collisions
5. For every word, store the file name and occurrence count
6. On search, compute the hash index and retrieve matching file details instantly

---

## Folder Structure

```
Inverted_Search/
│
├── main.c              # Entry point of the program
├── types.h             # Common data types and macros
├── create.c            # Index creation logic
├── search.c            # Search functionality
├── display.c           # Display indexed data
├── save.c              # Save index to file
├── update.c            # Update index data
├── header.h            # Function declarations
├── sample_files/       # Input text files
└── README.md           # Project documentation
```

---

## How to Compile & Run

### Compile

```bash
gcc main.c create.c search.c display.c save.c update.c -o inverted_search
```

### Run

```bash
./inverted_search file1.txt file2.txt file3.txt
```

---

## Sample Output

```
Enter your choice:
1. Create Database
2. Search Word
3. Display Database
4. Save Database

Enter choice: 2
Enter word to search: data

Word found in:
File: file1.txt | Count: 3
File: file2.txt | Count: 1
```

---

## Future Enhancements

* Support for case-insensitive searching
* Ability to delete words or files from the index
* Store index data permanently using binary files
* Improve performance using balanced trees or advanced hashing
* Add support for large-scale datasets
