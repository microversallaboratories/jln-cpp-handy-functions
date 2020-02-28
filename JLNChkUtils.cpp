//JLNChkUtils.cpp - Implementation file

#include "JLNChkUtils.h"

using namespace std;

/******************************************************
 * Function: 
 * Description: 
 * Input: 
 * Pre-condition: 
 * Post-condition: 
 * ****************************************************/

/****************************************************************
 * Function name: check_range
 * Description: Tests if a number is within upper and lower bounds.
 * Parameter(s): lower_bound, upper_bound, test_value
 * Pre-condition(s): All three parameters are ints
 * Post-condition(s): Return true if within bounds, false otherwise.
 * **************************************************************/

bool check_range(int lower_bound, int upper_bound, int test_value){
	if ((test_value <= upper_bound) and (test_value >= lower_bound)) { //If test value is within bounds
		return 1;		//Return true.
	}
	else{
		return 0;		//Return false.
	}
}

/****************************************************************
 * Function name: is_capital
 * Description: Checks if a char is a capital letter.
 * Parameter(s): letter
 * Pre-condition(s): Letter is a char type.
 * Post-condition(s): Return true if letter is a capital, false otherwise.
 * **************************************************************/

bool is_capital(char letter){
	int asciiValueLetter = int(letter);
	if(check_range(65, 90, asciiValueLetter) == 1){		//If letter's ascii value is within that of the capitals, it is a capital letter.
		return 1;
	}
	return 0; 	//else return 0;
}

/****************************************************************
 * Function name: is_even
 * Description: Determines if a number is even or not.
 * Parameter(s): num
 * Pre-condition(s): num is an integer value.
 * Post-condition(s): Return true if it is even, false otherwise.
 * **************************************************************/

bool is_even(int num){
	if (num % 2 == 0){		//If the number's remainder when divided by 2 is 0, 
		return 1;		//Return true.
	}
	else{
		return 0;		//Else return false.
	}
}

/****************************************************************
 * Function name: is_odd
 * Description: Determines if a number is odd or not.
 * Parameter(s): num
 * Pre-condition(s): num is an integer value.
 * Post-condition(s): Return true if it is odd, false otherwise.
 * **************************************************************/

bool is_odd(int num){
	if (num % 2 == 1){		//Opposite idea of "is_even" above.
		return 1;
	}
	else{
		return 0;
	}
}

/****************************************************************
 * Function name: equality_test
 * Description: Tests relative value of two integers, outputs based on num1 - num2.
 * Parameter(s): num1, num2
 * Pre-condition(s): num1, num2 are integers.
 * Post-condition(s): Return -1 if num1 is smaller, return 0 if values are equal, return +1 if num2 is smaller.
 * **************************************************************/

int equality_test(int num1, int num2){
	int test;
	if (num1 < num2){		//If num1 < num2, return -1.
		return -1;
	}
	else if (num1 == num2){		//If num1 == num2, return 0.
		return 0;
	}
	else if (num1 > num2){		//If num1 > num2, return +1.
		return +1;
	}
	else{ 
		cout << "Invalid statement. Try again." <<endl;	//This will never be run with good inputs.
	}
	return 0;			//to appease the compiler
}

/****************************************************************
 * Function name: float_is_equal
 * Description: Checks if two floats are equal within a precision value.
 * Parameter(s): num1, num2, precision
 * Pre-condition(s): All three parameters are floats.
 * Post-condition(s): Returns 1 if equal or within subtraction/addition of precision, returns 0 if outside of this range.
 * **************************************************************/

bool float_is_equal(float num1, float num2, float precision){
	if (num1 == num2){			//If exactly equal, then they're also within precision.
		return 1;
	}
	else if (num1 < num2){			//If within the precision value of each other,
		if ((num1 + precision) > num2){
			return 1;		//Return true.
		}
		else{
			return 0;		//Else return false
		}
	}
	else{
		if ((num1 - precision) > num2){	//Same idea as previous.
			return 1;
		}
		else{
			return 0;
		}
	}
}

/****************************************************************
 * Function name: is_int
 * Description: Checks if a given input is an integer.
 * Parameter(s): num
 * Pre-condition(s): Input is a string
 * Post-condition(s): Return 1 if value is an integer, return 0 if value is not an integer.
 * **************************************************************/

bool is_int(string num){
	bool marker;
	for (int i = 0; i<num.length(); i++){			//For the length of the string,
		char x = num.at(i);				//store a char for that character.
		if ((int(x) >= 48) and (int(x) <= 57)) {	//If within ascii values of 48 and 57,
			marker = 1;				//set marker to 1.
		}
		else{
			return 0;				//Else return 0.
		}
	}
	return marker;	//Return marker at the end of the program in case it encounters a noninteger value.
}

/****************************************************************
 * Function name: numbers_present
 * Description: Checks if numbers are present in an input string
 * Parameter(s): sentence
 * Pre-condition(s): sentence is a string object
 * Post-condition(s): Returns 0 if no numbers are in the string, returns 1 if numbers are in the string.
 * **************************************************************/

bool numbers_present(string sentence){
	for (int i = 0; i<sentence.length(); i++){	//For the length of the string,
		char x = sentence.at(i);		//Index each value
		if ((int(x) >= 48) and (int(x) <= 57)) {	//If any place has an integer,
			return 1;			//Return 1
		}
		else{
		}
	}
	return 0;					//If not, return 0.
}

/****************************************************************
 * Function name: letters_present
 * Description: Determines if letters are present in the string
 * Parameter(s): sentence
 * Pre-condition(s): sentence is a string
 * Post-condition(s): Returns 0 if no letters are in the string, returns 1 if letters are present in the string.
 * **************************************************************/

bool letters_present(string sentence){
	for (int i = 0; i<sentence.length(); i++){	//Same idea as above, but with uppercase and lowercase letters
		char x = sentence.at(i);
		if (((int(x) >= 65) and (int(x) <= 90)) or ((int(x) >= 97) and (int(x) <= 122))){
			return 1;
		}
		else{
		}
	}
	return 0;
}

/****************************************************************
 * Function name: contains_sub_string
 * Description: Searches a string for a provided substring
 * Parameter(s): sentence, sub_string
 * Pre-condition(s): sentence and sub_string are strings.
 * Post-condition(s): If no substring is found, return 0. If found, return 1.
 * **************************************************************/

bool contains_sub_string(string sentence, string sub_string){
	int j = 0;
	if (sentence.length() < sub_string.length()){	//If substring is longer than string, it can't be within the string.
		return 0;				//Return 0.
	}
	else{
		for (int i = 0, j = 0; i<sentence.length(); i++){ //For the length of the string, sentence:	
			if (sentence.at(i) == sub_string.at(j)){	//If the index matches
				while((j<sub_string.length()) and (sentence.at(i) == sub_string.at(j))){ //and the sustring's index is less than the substring's length,
					i++;
					j++;
				}
				if (j == sub_string.length()){	//If j isn't interrupted while checking equality to the corresponding sentence's index,
					return 1;		//Return 1.
				}	
				else{
				}	
			}
			else{
			}
		}
		return 0;					//If it is interrupted, return 0.
	}
}

/****************************************************************
 * Function name: word_count
 * Description: Counts number of words separated by single spaces in a sentence string.
 * Parameter(s): sentence
 * Pre-condition(s): sentence is a string with no more than single spaces between letters or words in the string.
 * Post-condition(s): Return number of words in the sentence.
 * **************************************************************/

int word_count(string sentence){
	int spaces;						//Count unique spaces within a sentence
	for (int i = 1; i < sentence.length() - 1 ; i++){	//For the length of the sentence starting at the second index and up to the second to last index,
		char x = sentence.at(i);			//Make the index a char,
		char xMinusOne = sentence.at(i-1);
		char xPlusOne = sentence.at(i+1);
		if ((int(x) == 32) and (int(xMinusOne) != 32) and int(xPlusOne != 32)){
			spaces++;		//Compare the index's char to the previous and next chars, and if only the index's ascii value is 32, then it represents a unique space b/w two letters or words.
		}
		else{
		}
	}
	int words = spaces + 1;					//The number of valid words is spaces + 1.
	return words;	
}

/****************************************************************
 * Function name: to_upper
 * Description: Changes all lowercase letters to uppercase letters.
 * Parameter(s): sentence
 * Pre-condition(s): sentence is a valid string
 * Post-condition(s): Will return the converted string
 * **************************************************************/

string to_upper(string sentence){
	string result;
	for (int i = 0; i<sentence.length(); i++){		//For the sentence given,
		char x = sentence.at(i);			//At each index,
		if ((int(x) >= 97) and (int(x) <= 122)) {	//If it is a lowercase letter, shift its ascii value
			result += char(int(x) - 32);
		}
		else{
			result += char(int(x));			//If not, just concatenate it to the result.
		}
	}
	return result;
}

/****************************************************************
 * Function name: to_lower
 * Description: Converts all uppercase chars in a string to lowercase
 * Parameter(s): sentence
 * Pre-condition(s): sentence is a value string
 * Post-condition(s): Will return the converted string.
 * **************************************************************/

string to_lower(string sentence){
	string result;
	for (int i = 0; i<sentence.length(); i++){		//Same idea as last time, but with uppercase to lowercase.
		char x = sentence.at(i);
		if ((int(x) >= 65) and (int(x) <= 90)) {
			result += char(int(x) + 32);
		}
		else{
			result += char(int(x));
		}
	}
	return result;
}

/****************************************************************
 * Function name: get_int
 * Description: checks if a string input is an int, converts it
 * Parameter(s): str
 * Pre-condition(s): str is a string
 * Post-condition(s): returns int value if int, 0 if not.
 ***************************************************************/
int get_int(string str){
	int integer = 0; int pwr = 10;
	if (is_int(str)){	//If a non-zero integer,
		pwr = pow(pwr, str.length()-1);	//The max power equals the string length minus one
		for (int i = 0; i < str.length(); i++){	//For all of the string length,
	 		integer+= (str[i] - '0')*pwr;	//Concatenate powers of ten multiplied by ints at str[i]
			pwr /=10;	//Work down the string to add each appropriate factor
		}
	}
	else{
		//cout << "ERROR: Enter positive integers only." << endl;
		return 0;	//Not a non-zero integer
	}
	return integer;	//Return the non-zero integer
}

/****************************************************************
 * Function name: check_if_n_args_fatal
 * Description: checks if n arguments were provided, if not, exits
 * Parameter(s): argc
 * Pre-condition(s): arguments were provided on the command line
 * Post-condition(s): exits if not three args, continues if there are three
 ***************************************************************/
void check_if_n_args_fatal(int argc, int n){
	if (argc !=n){
		cout << "ERROR: Invalid number of arguments! Exiting..." << endl;
		exit(0);
	}
}

/****************************************************************
 * Function name: ensure_0or1
 * Description: pesters user until they return 0 or 1
 * Parameter(s): input
 * Pre-condition(s): input is string type
 * Post-condition(s): an integer value is output, 0 or 1
 ***************************************************************/
int ensure_0or1_int(string input){
	while((input != "1") && (input != "0")){	//If not 1 or 0,
		cout << "ERROR: please select 0 or 1: ";
		cin >> input;	//Ask until they provide 1 or 0.
	}
	return get_int(input);	//Return the converted string (0 or 1)
}

/****************************************************************
 * Function name: ensure_1or2
 * Description: pesters user until they return 1 or 2
 * Parameter(s): input
 * Pre-condition(s): input is string type
 * Post-condition(s): returns an integer 1 or 2
 ***************************************************************/
int ensure_1or2(string input){
	while((get_int(input) != 1) && (get_int(input) != 2)){	//While the user doesn't enter 1 or 2
		cout << "ERROR: please select 1 or 2: ";
		cin >> input;	//Ask them again
	}
	return get_int(input);	//Return the final value
}

/****************************************************************
 * Function name: ensureInRange() 
 * Description: pesters user until they return a value in the proper range
 * Parameter(s): input
 * Pre-condition(s): input is string type
 * Post-condition(s): an integer value is output in the desired range
 ***************************************************************/
int ensureInRangeInt(int min, int max, string input){
	while(!check_range(min, max, get_int(input))){	//If not in range,
		cout << "ERROR: please select an integer between " << min << " and " << max << ":";
		cin >> input;	//Ask until they provide a good number
	}
	return get_int(input);	//Return the converted string
}


/******************************************************
 * Function: cin_to_int()
 * Description: takes in string from cin, returns as int
 * Input: string from cin
 * Pre-condition: string is taken in from cin
 * Post-condition: string is converted to an int and returned
 * ****************************************************/
int cin_to_int(){
	string tmp;
	cin >> tmp;
	return stoi(tmp);
}

/******************************************************
 * Function: another_time()
 * Description: returns whether to run program again
 * Input: 
 * Pre-condition:
 * Post-condition: user has selected 
 * ****************************************************/
bool another_time(string message){
	string input;
	cout << message; 
	cin >> input;
	return ensure_0or1_int(input);
}

/******************************************************
 * Function: retFloatBetween
 * Description: returns a random float in the range
 * Input: float min, float max
 * Pre-condition: given values are floats
 * Post-condition: Random number returned
 * ****************************************************/
float retFloatBetween(float min, float max){
	float random = ((float) rand()) / (float) RAND_MAX;
	float d = max - min;	//calculate the difference
	float r = random * d;	//set the range
	return min + r;		//return the number
}

/******************************************************
 * Function: retIntBetween
 * Description: returns a random int in the range
 * Input: int min, int max
 * Pre-condition: given values are ints
 * Post-condition: Random number returned
 * ****************************************************/
int retIntBetween(int min, int max){
	int random = ((int) rand()) / (int) RAND_MAX;
	int d = max - min;	//calculate the difference
	int r = random * d;	//set the range
	return min + r;		//return the number
}


//eof
