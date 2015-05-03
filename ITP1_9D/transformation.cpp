#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>

using namespace std;

std::vector<std::string> split(const std::string& line, const char& delimiter);
void parseCommand(const string& command, string& line);
void commandPrint(const string& line, const int startPoint, const int endPoint);
void commandReverse(string& line, const int startPoint, const int endPoint);
void commandReplace(string& line, const int startPoint, const int endPoint, const string replaceString);
string reverse(string& str);

int main() {
  string line("");
  int numberOfCommand(0);
  string command("");

  cin >> line;
  cin >> numberOfCommand;
  cin.ignore();

  for(int count = 0; count < numberOfCommand; ++count) {
    getline(cin, command);
    parseCommand(command, line);
  }

  return 0;
}

void parseCommand(const string& command, string& line) {
  vector<string> splitWords;
  splitWords = split(command, ' ');

  if( splitWords[0] == "print" ) {
    commandPrint(line, atoi(splitWords[1].c_str()), atoi(splitWords[2].c_str()));
  }
  else if( splitWords[0] == "reverse" ) {
    commandReverse(line, atoi(splitWords[1].c_str()), atoi(splitWords[2].c_str()));
  }
  else if( splitWords[0] == "replace" ) {
    commandReplace(line, atoi(splitWords[1].c_str()), atoi(splitWords[2].c_str()), splitWords[3]);
  }
}

void commandPrint(const string& line, const int startPoint, const int endPoint) {
  cout << line.substr(startPoint, endPoint - startPoint + 1)  << endl;
}

void commandReverse(string& line, const int startPoint, const int endPoint) {
  string reverseString("");
  string reversedString("");

  reverseString = line.substr(startPoint, endPoint - startPoint + 1);
  reversedString = reverse(reverseString);
  commandReplace(line, startPoint, endPoint, reversedString);
}

void commandReplace(string& line, const int startPoint, const int endPoint, const string replaceString) {
  line.replace(startPoint, endPoint - startPoint + 1, replaceString);
}

string reverse(string& str) {
  reverse_iterator<string::iterator> itr = str.rbegin();
  string rstr(itr, str.rend());
  return rstr;
}

std::vector<std::string> split(const std::string& line, const char& delimiter) {
  std::vector<std::string> resultWords;
  size_t current(0);
  size_t foundPosition(0);

  while( (foundPosition = line.find_first_of(delimiter, current)) != std::string::npos ) {
    resultWords.push_back( std::string(line, current, foundPosition - current) );
    current = foundPosition + 1;
  }
  resultWords.push_back( std::string(line, current, line.size() - current) );

  return resultWords;
}

