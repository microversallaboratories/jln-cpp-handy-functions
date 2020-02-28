//JLNChkUtils.h - header/interface file

//Use header guards
#ifndef JLNCHKUTILS_H
#define JLNCHKUTILS_H

//INCLUDE LIBRARIES
#include <iostream>
#include <string>
#include <cstdlib>
#include <fstream>
#include <cmath>

using namespace std;

//FUNCTION PROTOTYPES
bool check_range(int, int, int);
bool is_capital(char);
bool is_even(int);
bool is_odd(int);
int equality_test(int, int);
bool float_is_equal(int, int, int);
bool is_int(string);
bool numbers_present(string);
bool letters_present(string);
bool contains_sub_string(string, string);
int word_count(string);
string to_upper(string);
string to_lower(string);
int get_int(string);
void check_if_n_args_fatal(int, int);
int ensure_0or1_int(string);
int ensure_1or2_int(string);
int ensureInRangeInt(int, int, string);
int cin_to_int();
bool another_time(string);
float retFloatBetween(float, float);
int retIntBetween(int, int);

#endif
