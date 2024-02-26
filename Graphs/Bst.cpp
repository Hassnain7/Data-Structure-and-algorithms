// BFS algorithm in C++
#include <iostream>
#include <list>
using namespace std;
class Graph {
  int numVertices;
  list<int>* adjLists;
  bool* visited;

   public:
  Graph(int vertices);
  void addEdge(int src, int dest);
  void BFS(int startVertex);
  int FindMin();
  int FindMax();
  int sum();
};

// Create a graph with given vertices,
// and maintain an adjacency list
Graph::Graph(int vertices) {
  numVertices = vertices;
  adjLists = new list<int>[vertices];
}

// Add edges to the graph
void Graph::addEdge(int src, int dest) {
  adjLists[src].push_back(dest);
  adjLists[dest].push_back(src);
}

// BFS algorithm
void Graph::BFS(int startVertex) {
  visited = new bool[numVertices];
  for (int i = 0; i < numVertices; i++)
    visited[i] = false;

  list<int> queue;

  visited[startVertex] = true;
  queue.push_back(startVertex);

  list<int>::iterator i;

  while (!queue.empty()) {
    int currVertex = queue.front();
    cout << "Visited " << currVertex << " ";
    queue.pop_front();

    for (i = adjLists[currVertex].begin(); i != adjLists[currVertex].end(); ++i) {
      int adjVertex = *i;
      if (!visited[adjVertex]) {
        visited[adjVertex] = true;
        queue.push_back(adjVertex);
      }
    }
  }
}
int Graph::FindMin()
{
	int min=INT_MAX;
	for(int i=0;i<numVertices;i++)
	{
		if(visited[i]&&i<min)
		{
			min=i;
		}
	}
	return min;
}
int Graph::FindMax()
{
	int max=INT_MIN;
	for(int i=0;i<numVertices;i++)
	{
		if(visited[i]&&i>max)
		{
			max=i;
		}
	}
	return max;
}
int Graph::sum()
{
	int sum=0;
	for(int i=0;i<numVertices;i++)
	{
		if(visited[i])
		{
			sum+=i;
		}
	}
	return sum;
}

int main() {
  Graph g(5);
  g.addEdge(0, 4);
  g.addEdge(0, 1);
  g.addEdge(0, 2);
  g.addEdge(1, 2);
  g.addEdge(2, 3);
  g.addEdge(3, 3);

  g.BFS(2);
cout<<g.FindMin()<<endl;
cout<<g.FindMax()<<endl;
cout<<g.sum()<<endl;
  return 0;
}
