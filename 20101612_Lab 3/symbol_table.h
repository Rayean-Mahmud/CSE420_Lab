
#include "scope_table.h"

class symbol_table {
private:
    scope_table *current_scope;
    int bucket_count;
    int current_scope_id;

public:
    symbol_table(int bucket_count)
        : bucket_count(bucket_count), current_scope(nullptr), current_scope_id(0) {}

    void enter_scope() {
        current_scope_id++;
        current_scope = new scope_table(bucket_count, current_scope_id, current_scope);
    }

    void exit_scope() {
        if (current_scope) {
            scope_table *temp = current_scope;
            current_scope = current_scope->get_parent_scope();
            delete temp;
        }
    }

    bool insert(symbol_info *symbol) {
        if (current_scope) {
            return current_scope->insert_in_scope(symbol);
        }
        return false;
    }

    symbol_info *lookup(string name) {
        scope_table *temp = current_scope;
        while (temp) {
            symbol_info *symbol = temp->lookup_in_scope(name);
            if (symbol) {
                return symbol;
            }
            temp = temp->get_parent_scope();
        }
        return nullptr;
    }

    void print_current_scope(ofstream &outlog) {
        if (current_scope) {
            current_scope->print_scope_table(outlog);
        }
    }

    void print_all_scopes(ofstream &outlog) {
        outlog << "################################" << endl;
        scope_table *temp = current_scope;
        while (temp) {
            temp->print_scope_table(outlog);
            temp = temp->get_parent_scope();
        }
        outlog << "################################" << endl;
    }

    ~symbol_table() {
        while (current_scope) {
            exit_scope();
        }
    }
};
