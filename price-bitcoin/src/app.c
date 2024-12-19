#include"app.h"

void print(PBITCOIN bitcoin)
{
    printf("name=%s\n", bitcoin->name);
    printf("id=%d\n", bitcoin->id);
    printf("priority=%f\n", bitcoin->limit);
};
void print_array(BITCOIN bitcoin[], int size)

{
    int i;
    for (i = 0; i < size; ++i)
    {
        print(&bitcoin[i]);
        printf("--------\n");
    }
}