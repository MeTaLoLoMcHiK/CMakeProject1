#pragma once

#include<stdio.h>

struct Bitcoin {
    char name[128];
    int id;
    double limit;

};

typedef struct Bitcoin BITCOIN;
typedef struct Bitcoin* PBITCOIN;

void print(PBITCOIN list);

void print_array(BITCOIN bitcoin[], int size);