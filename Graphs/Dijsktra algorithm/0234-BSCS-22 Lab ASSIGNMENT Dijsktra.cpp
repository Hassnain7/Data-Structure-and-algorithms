using namespace std;
#include<iostream>
#define INF 999
class Dijsktra
{
	public:
int V,src,cost[100][100];	
int dist[100];
bool visited[100]={0};
int parent[100];
void init();
void dijsktra();
int getNearest();
void Display();
};
void Dijsktra::init()
{
	for(int i=0;i<V;i++)
	{
		parent[i]=i;
		dist[i]=INF;
	}
	dist[src]=0;
}
int Dijsktra::getNearest()
{
	int minValue=INF;
	int minnode=0;
	for(int i=0;i<V;i++)
	{
		if(!visited[i]&&dist[i]<minValue)
		{
			minValue=dist[i];
			minnode=i;
		}
	}
	return minnode;
}
void Dijsktra::dijsktra()
{
	for(int i=0;i<V;i++)
	{
		int nearest=getNearest();
		visited[nearest]=true;
		for(int adj=0;adj<V;adj++)
		{
			if(cost[nearest][adj]!=INF && dist[adj]>dist[nearest]+cost[nearest][adj])
			{
			  dist[adj]=dist[nearest]+cost[nearest][adj];	
			  parent[adj]=nearest;
			}
		}
	}
}
void Dijsktra::Display()
{
	cout<<"Node:\t\t\tCost(edges Weights):\tPath\n";
	for(int i=0;i<V;i++)
	{
		cout<<i<<"\t\t\t"<<dist[i]<<"\t\t\t"<<" ";
		cout<<i<<" ";
		int parnode=parent[i];
		while(parnode!=src)
		{
			cout<<" <-"<<parnode<<" ";
			parnode=parent[parnode];
		}
		cout<<endl;
	}
}
/*int main(void)
{
	Dijsktra d;
	//int v,Src,Cost[100][100];
	cout<<"The number of vertices:";
	cin>>d.V;
	for(int i=0;i<d.V;i++)	
	{
       for(int j=0;j<d.V;j++)
       {
       	cin>>d.cost[i][j];
	   }
	}
	cout<<"src node:";
	cin>>d.src;
	
	d.init();
	d.dijsktra();
	d.Display();
}*/
int main(void)
{
    Dijsktra d;
    
  
    d.V = 4;

    int predefinedCostMatrix[4][4] = {
        {0, 2, 5, 1},
        {INF, 0, 3, INF},
        {INF, INF, 0, 4},
        {INF, INF, INF, 0}
    };

    for (int i = 0; i < d.V; i++) {
        for (int j = 0; j < d.V; j++) {
            d.cost[i][j] = predefinedCostMatrix[i][j];
        }
    }

    d.src = 0;

    d.init();
    d.dijsktra();
    d.Display();

    return 0;
}

