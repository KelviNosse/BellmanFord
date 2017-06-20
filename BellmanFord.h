#ifndef BELLMANFORD_H
#define BELLMANFORD_H

#include <iostream>
#include <vector>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <map>
#define MAX_NUM 999
using namespace std;
struct Edge{
    int to, from, weight;
};
int* get_short_path(int** graph, int size, int origin);

#endif // EVALUADBELLMANFORD_HOR_H
