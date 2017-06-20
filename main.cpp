#include "Test.h"
#include "BellmanFord.h"
#include <iostream>
using namespace std;

int* getShortestPath(int** graph, int size, int origin)
{
    return get_short_path(graph, size, origin);
}

int main ()
{
    test();
    return 0;
}
