/*
bool - 1 byte (8 bits. wasteful since a bool needs 1 bit (true/false))

int - 4 bytes (32 bits. ~rougly 4 billion possible values (+/- is 2 bill.))

long - 8 bytes (64 bits. better for longer values than 2 bill)

float - 4 bytes (32 bits and less precise than double)

double - 8 bytes (64 bits more precise than float)

char - 1 byte (8 bits)

string - ? bytes (varies based on what's written)

random binary stuff

0 - 0
1 - 1
2 - 10
3 - 11
4 - 100
5 - 101
6 - 110
7 - 111
8 - 1000
9 - 1001
10 - 1010

Find 1010

2^0 * 0 = 0
2^1 * 1 = 2
2^2 * 0 = 0
2^3 * 1 = 8
= 10

*/
