//
// Created by Matt on 12/1/2019.
//
#include <stdio.h>
#include <cstdlib>

int main(int argc, char **argv)
{
    FILE* file = fopen("../day 1/input.txt", "r");
    char line[100];
    char c;
    int total = 0;
    while (fscanf(file, "%[^\n]s", line) != EOF)
    {
        fscanf(file, "%c", &c);
        int value = atoi(line);
        value = (value / 3) - 2;
        while (value > 0)
        {
            total += value;
            value = (value / 3) - 2;
        }
    }
    printf("%d\n", total);
    return 0;
}