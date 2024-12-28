#include "symbol_info.h"

class scope_table {
private:
    int bucket_count;
    int unique_id;
    scope_table *parent_scope;
    vector<list<symbol_info *>> table;

    int hash_function(string name) {
        int hash = 0;
        for (char ch : name) {
            hash = (hash * 31 + ch) % bucket_count;
        }
        return hash;
    }

public:
    scope_table(int bucket_count, int unique_id, scope_table *parent_scope = nullptr)
        : bucket_count(bucket_count), unique_id(unique_id), parent_scope(parent_scope),
          table(bucket_count) {}

    scope_table *get_parent_scope() { return parent_scope; }
    int get_unique_id() { return unique_id; }

    symbol_info *lookup_in_scope(string name) {
        int index = hash_function(name);
        for (symbol_info *symbol : table[index]) {
            if (symbol->get_name() == name) {
                return symbol;
            }
        }
        return nullptr;
    }

    bool insert_in_scope(symbol_info *symbol) {
        if (lookup_in_scope(symbol->get_name())) {
            return false;
        }
        int index = hash_function(symbol->get_name());
        table[index].push_back(symbol);
        return true;
    }

    bool delete_from_scope(string name) {
        int index = hash_function(name);
        auto &bucket = table[index];
        for (auto it = bucket.begin(); it != bucket.end(); ++it) {
            if ((*it)->get_name() == name) {
                bucket.erase(it);
                return true;
            }
        }
        return false;
    }

    void print_scope_table(ofstream &outlog) {
        outlog << "ScopeTable #" << unique_id << endl;
        for (int i = 0; i < bucket_count; ++i) {
            outlog << i << " --> ";
            for (symbol_info *symbol : table[i]) {
                outlog << "< " << symbol->get_name() << " : " << symbol->get_type() << " > ";
            }
            outlog << endl;
        }
    }

    ~scope_table() {
        for (auto &bucket : table) {
            for (symbol_info *symbol : bucket) {
                delete symbol;
            }
        }
    }
};