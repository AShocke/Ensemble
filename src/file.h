#ifndef FILE_H
#define FILE_H

/* Class with useful file utilities */
#include <iostream>
#include <fstream>

class file {
 private:
    char* save_directory;
    char* curr_file;
    std::fstream fs;
 public:
    void load_file(char* filename);
    void save_file();

};
#endif
