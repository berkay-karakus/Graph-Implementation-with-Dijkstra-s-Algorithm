#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct VertexNode { // Vertex Node
  char name;
  int cost;
  struct VertexNode *next;
  
};
typedef struct VertexNode VertexNode;
typedef VertexNode *VertexNodePtr;


struct AdjacenyList{ // list
    int weight;                           //A ->B 2----A -> c 4
	VertexNodePtr head;
};
typedef struct AdjacenyList AdjacenyList;
typedef AdjacenyList *AdjacenyListPtr;


struct Edge{
	char from;
	char end;
	int weight;
};
typedef struct Edge Edge;
typedef Edge *EdgePtr;



int main(int argc, char **argv) {
	//1. read customer file and push them
	FILE *cfPtr;
	cfPtr = fopen("input.txt", "r");
	
	int size = 0;
	
	AdjacenyListPtr ajdList = (AdjacenyListPtr)malloc(sizeof(AdjacenyList));
	VertexNodePtr currentHead;
	
	char firstX;
	char firstY;
	char currentX;
	char currentY;
	char currentDistance;
	int firstDistance;
	int distance;
	char nodeX;
	char nodeY;
	
	//Firstly create first head and second node that connect with head vertex
	fscanf(cfPtr, "%s%s%d", firstX, firstY, &firstDistance);
	currentHead = newVertexNode(firstX, 0);
	VertexNodePtr secondVertex = newVertexNode(firstY, firstDistance);
	addVertexList(headA, secondVertex);
	
	//secondly continue crate vertex and add headPtr while if headPtr name equals currentName
	//if diffrent names than will be new head create and new vertexes add to that head
	while (!feof(cfPtr)){ // while not end of file
		fscanf(cfPtr, "%s%s%d", currentX, currentY, &currentDistance);
		if(currentX == firstX){
			VertexNodePtr currentVertex = newVertexNode(currentY, currentDistance);
			addVertexList(headA, currentVertex);
		}
		else {
			currentHead = newVertexNode(currentX, 0);
			VertexNodePtr currentVertex = newVertexNode(currentY, currentDistance);
			addVertexList(currentHead, currentVertex);
		}
	}


	/*
	2.
	Create list and print like these 
	A : B, 3 C, 5 D,6
	B : ………………
	*/
	
	/*
	3.
	Find shortest path:
	*/
	
	/*
	4.
	Exit
	*/
	
}

VertexNodePtr newVertexNode(char name, int cost){
    VertexNodePtr newNode = (VertexNodePtr)malloc(sizeof(VertexNode));
    newNode->name = name;
    newNode->cost = cost;
    newNode->next = NULL;
    return newNode;
} // end of newVertexNode


VertexNodePtr addVertexList(VertexNodePtr headPtr, VertexNodePtr newVertex){
	
	while(headPtr->next != NULL){
		headPtr = headPtr->next;
	}
	headPtr->next = newVertex;
	
	return headPtr;
}
/*

struct GraphPtr createGraph(int numberOfVertex){

    GraphPtr graph =
        (GraphPtr) malloc(sizeof(Graph));
    graph->numVertices = numberOfVertex;
 
    // Create an array of adjacency lists.  Size of
    // array will be numberOfVertex
    graph->adjListArray = (AdjacenyListPtr) malloc(numberOfVertex * sizeof(AdjacenyList));
 
    // Initialize each adjacency list as empty by
    // making head as NULL
    int i;
    for (i = 0; i < V; ++i)
        graph->array[i].head = NULL;
 
    return graph;
}
*/

void dijkstraAlgorithm(char sourceVertex, char *vertex){
	int startVertex = 0;
	int distanceFromStart = 999;
	char *unvisited[5] = {'A','B','C','D','E','\0'}; 
	char *visited[5];
	int flag = 0;
	while(flag<1){
		
		//check vertex size if equal zero means every vertex checked.
		if(sizeof(vertex) ==  0){
			flag++;
		}
	}
}

