#include"app.h"

int main()
{
    int sz = sizeof(struct Bitcoin);

    printf("%d\n", sz);



    BITCOIN bitcoins[] = {
        {"Bitcoin2007", 21000000, 0},
        {"Bitcoin2024", 19700000, 100000},

    };

    print_array(bitcoins, 2);

    return 0;
}