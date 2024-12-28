#include <bits/stdc++.h>
using namespace std;

class symbol_info {
private:
    string name;
    string type;
    string return_type; // For functions
    vector<pair<string, string>> parameters; // Function parameters: <type, name>
    int array_size; // For array variables

public:
    symbol_info(string name, string type) : name(name), type(type), array_size(-1) {}

    string get_name() { return name; }
    string get_type() { return type; }
    string get_return_type() { return return_type; }
    vector<pair<string, string>> get_parameters() { return parameters; }
    int get_array_size() { return array_size; }

    void set_name(string name) { this->name = name; }
    void set_type(string type) { this->type = type; }
    void set_return_type(string return_type) { this->return_type = return_type; }
    void add_parameter(string type, string name) { parameters.push_back({type, name}); }
    void set_array_size(int size) { array_size = size; }

    ~symbol_info() {}
};