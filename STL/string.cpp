// Convert
to_string(num);
stoi(s);
stoll(s);
stof(s);
s.c_str();

// Constructor
string s(s1);
string s("23333");
string s(10, '.');

// Size
s.length();
s.resize(100, '+');                  // Resize to 100, add new value with '+'
s.empty();

// Access
s.begin();
s.end();
s[i];

// Modifiers
s.push_back(1);                                 // O(1)
s.pop_back();                                   // O(1)
s.append(s1);
s.append("23333");
s.append(10, '.');
s.insert(s.begin(), '*');                       // Below all is O(n)
s.insert(s.begin(), s1.begin(), s1.end());
s.erase(1, 10);                                 // Remove 10 characters from 2nd
s.erase(s.begin() + 3);                         // Remove the 4th element
s.erase(s.begin(), s.begin() + 5);              // Remove from 1st to 6th elements
s.assign(100, '*');                             // Assign 100 *'s
s.assign(s1.begin(), s1.end());
s.replace(0, 100, s1);                          // Replace 100 characters from 1st with s1
s.replace(s.begin(), s.end(), "23333");         // Replace s with 23333
s.clear();
s.swap(s1);

// Find
s.find("1") != string::npos;
s.rfind("1") != string::npos;
s.find_first_of(' ');
s.find_first_not_of(' ');
s.find_last_of(' ');
s.find_last_not_of(' ');

// Compare
s.compare(s1);

// Substring
s.substr(5, 1);
s.substr(0, s.length(s));
s.substr(s.find("token"));
