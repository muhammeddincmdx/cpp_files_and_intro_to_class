#include <fstream>
using std::string;
using Mode = std::ios_base::openmode;


//ifstream: for input from file
std::ifstream f_in(string &file_name, Mode mode);

//ofstream: for output to file
std::ofstream f_out(string &file_name, Mode mode);

//strea: for input and output to file
std::fstream f_in_out(string &file_name, Mode mode);