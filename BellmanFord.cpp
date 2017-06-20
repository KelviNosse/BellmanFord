#include "BellmanFord.h"

vector<Edge> create_edges(int ** graph, int size){
    vector<Edge> edges;
    for(int i = 0; i < size; i++){
        for(int k = 0; k < size; k++){
            if(graph[i][k] != -1){
                Edge edge;
                edge.from = i;
                edge.to = k;
                edge.weight = graph[i][k];
                edges.push_back(edge);
            }
        }
    }
    return edges;
}

int* get_short_path(int** graph, int size, int origin){
    vector<Edge> edges = create_edges(graph, size);
    int edge_size = edges.size();
    int * answer = new int[size];
    int tracker[size];
    for(int i = 0; i < size; i++){
        tracker[i] = MAX_NUM;
        answer[i] = 0;
    }
    tracker[origin] = 0;
    
    for(int i = 0; i <= size - 1; i++){
        for(int k = 0; k < edge_size; k++){
            int from = edges[k].from;
            int to = edges[k].to;
            int weight = edges[k].weight;
            if(tracker[from] + weight < tracker[to] && tracker[from] != MAX_NUM){
                tracker[to] = tracker[from] + weight;
                answer[to] = from;
            }
        }
    }

    return answer;
}