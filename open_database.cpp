#include <stdio.h>
#include <sqlite3.h> 

int main() {
    sqlite3 *db;
    int connection;

    connection = sqlite3_open("test.db", &db);

    if (connection) {
        fprintf(stderr, "Can't open database: %s\n", sqlite3_errmsg(db));
    } else {
        fprintf(stderr, "Opened database successfully\n");
    }
    sqlite3_close(db);
}
