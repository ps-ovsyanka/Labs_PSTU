#pragma once
#include <glut.h>
#include <iostream>
#include<vector>
#include <string>
#include <iostream>
#include <iomanip>
#include <algorithm>

using namespace std;

const int maxSize = 10;

struct Edge
{
	char from;
	char dest;
};

struct vertCoord
{
	int x, y;
	
};

class Graph {
public:
	vector<Edge> res; //нужный путь
	vector<char> vertList;
	vector<vector<int>> Matrix;

public:
	Graph();
	
	void Print();

	bool IsEmpty();
	bool IsFull();

	int GetVertPos(const char& vertex);

	int GetAmountVerts() { return this->vertList.size(); }//кол-во вершин
	int GetAmountEdges();
	int GetWeight(const char& vertex1, const char& vertex2);
	vector<char> GetNbrs(const char& vertex);

	void addVertex(const char&);
	void addEdge(const char& vertex1, const char& vertex2, int weight);

	void deleteVertex(const char&);
	void deleteEdge(const char& vertex1, const char& vertex2);

	void FiilLabels(char& startVertex);

	bool allVisit(bool* mass);

	void drawGraph();

	void PrintMatrix(int** matrix); //Печать матрицы

	void ReducRows(int** map); //Редукция строк
	void ReducCols(int** map); //Редукция столбцов

	int zeroScore(int** map, int row, int col); //Оценка нулей 

	Edge newMap(int** map); //Удаление строки и столбца с наиболльшим нулём

	void zadacha(); //Сам алгоритм
};

void setCoord(int n);
void drawCircle(int x, int y, int R);
void drawcharext(int nom, int x1, int y1);
void drawVertex(int n);
void drawLine1(int text, int x0, int y0, int x1, int y1);
void drawLine2(int text, int x0, int y0, int x1, int y1);
void reshape(int w, int h);
void display();
void MainDraw(int argc, char* argv[]);