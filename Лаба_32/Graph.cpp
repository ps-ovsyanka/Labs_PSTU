#include "Graph.h"



////////////////////////////////////////////////////////


vector<vertCoord> vertC;
Graph graph;
int WinW;
int WinH;
int R;
bool btnClick = false;
int activeVert = -1;
int xx;
int yy;



////////////////////////////////////////////////////

Graph::Graph() { //конструктор
}



int Graph::GetVertPos(const char& vertex) {
	for (int i = 0; i < this->vertList.size(); ++i) {
		if (this->vertList[i] == vertex)
			return i;
	}
	return -1;
}


bool Graph::IsEmpty() {
	if (this->vertList.size() != 0)
		return false;
	else
		return true;
}


bool Graph::IsFull() {
	return (vertList.size() == maxSize);
}


//кол-во ребер
int Graph::GetAmountEdges() {
	int amount = 0; // обнуляем счетчик
	if (!this->IsEmpty()) { // проверяем, что граф не пуст
		for (int i = 0, vertListSize = this->vertList.size(); i < vertListSize; ++i) {
			for (int j = 0; j < vertListSize; ++j) {
				if (this->Matrix[i][j] == 1) // находим рёбра
					amount += 1; // считаем количество рёбер
			}
		}
		return amount; // возвращаем количество рёбер
	}
	else
		return 0; // если граф пуст, возвращаем 0
}

//получить вес ребра
int Graph::GetWeight(const char& vertex1, const char& vertex2) {
	if (!this->IsEmpty()) {
		int vertPos1 = GetVertPos(vertex1);
		int vertPos2 = GetVertPos(vertex2);
		return Matrix[vertPos1][vertPos2];
	}
	return 0;
}



vector<char> Graph::GetNbrs(const char& vertex) {
	vector<char> nbrsList; // создание списка соседей
	int pos = this->GetVertPos(vertex); /* вычисление позиции vertex в матрице смежности */
	if (pos != (-1)) { /* проверка, что vertex есть в матрице смежности */
		for (int i = 0, vertListSize = this->vertList.size(); i < vertListSize; ++i) {
			if (this->Matrix[pos][i] != 0) /* вычисление соседей*/
				nbrsList.push_back(this->vertList[i]); /* запись соседей в вектор */
		}
	}
	return nbrsList; // возврат списка соседей
}



void Graph::addVertex(const char& vertex) {
	if (!this->IsFull() && GetVertPos(vertex) == -1) {
		
        Matrix.push_back(vector<int>(vertList.size(), 0));
        for (int i = 0; i < vertList.size(); i++) {
            Matrix[i].push_back(0);
        }
        Matrix[vertList.size()].push_back(-1);
        this->vertList.push_back(vertex);
	}
	else {
		cout << "Граф уже заполнен. Невозможно добавить новую вершину " << endl;
		return;
	}
	vertCoord v;
	v.x = WinW / 2;
	v.y = WinH / 2;
	vertC.push_back(v);
	system("cls");
	Print();
}


void Graph::addEdge(const char& vertex1, const char& vertex2, int weight) {
	if (this->GetVertPos(vertex1) != (-1) && this->GetVertPos(vertex2) != (-1)) {
		int vertPos1 = GetVertPos(vertex1);
		int vertPos2 = GetVertPos(vertex2);
		if (this->Matrix[vertPos1][vertPos2] != 0) {
			cout << "Ребро между этими вершинами уже существует" << endl;
		} 
        else if (this->Matrix[vertPos1][vertPos2] == -1) {
            cout << "Начальная и конечная вершины одинаковыые" << endl;
        }
		else {
			this->Matrix[vertPos1][vertPos2] = weight;
		}
		system("cls");
		Print();
		return;
	}
	else {
		cout << "Одной или двух вершин нет в графе " << endl;
	}
	
}

void Graph::deleteVertex(const char& vert) {
	int v = GetVertPos(vert);
	if (v != -1) {
		int n = vertList.size();
		for (int i = 0; i < n; i++) {
			Matrix[i].erase(Matrix[i].begin() + v);
		}
		Matrix.erase(Matrix.begin() + v);
		vertList.erase(vertList.begin() + v);
		system("cls");
		Print();
	}
	else {
		cout << "\nНет такой вершины";
	}
	
};


void Graph::deleteEdge(const char& vertex1, const char& vertex2) {
	

	if (this->GetVertPos(vertex1) != (-1) && this->GetVertPos(vertex2) != (-1)) {
		int vertPos1 = GetVertPos(vertex1);
		int vertPos2 = GetVertPos(vertex2);
		if (this->Matrix[vertPos1][vertPos2] == 0) {
			cout << "Mежду этими вершинами нет ребра" << endl;
		}
		else if (this->Matrix[vertPos1][vertPos2] == -1) {
			cout << "Начальная и конечная вершины одинаковыые" << endl;
		}
		else {
			graph.Matrix[vertPos1][vertPos2] = 0;
			system("cls");
			Print();
		}
	}
	else {
		cout << "Одной или двух вершин нет в графе " << endl;
	}
}



void Graph::Print() {
	if (!this->IsEmpty()) {
		cout << "Матрица смежности графа: " << endl;
		for (int i = 0, vertListSize = this->vertList.size(); i < vertListSize; ++i) {
			std::cout << std::setw(2) << vertList[i] << ' ';
			for (int j = 0; j < vertList.size(); j++)
			{
				if (Matrix[i][j] == -1) cout << " M ";
				else cout << setw(2) << Matrix[i][j] << ' ';
			}
			std::cout << endl;
		}
	}
	else {
		cout << "Граф пуст " << endl;
	}
}


void Graph::drawGraph()
{
	int n = vertList.size();
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (Matrix[i][j] != 0) {
				if (Matrix[j][i] != 0) {
					drawLine2(Matrix[i][j], vertC[i].x, vertC[i].y, vertC[j].x, vertC[j].y);
				}
				else {
					drawLine1(Matrix[i][j], vertC[i].x, vertC[i].y, vertC[j].x, vertC[j].y);
				}
			}
		}
	}
	drawVertex(n);
}



/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


//начальные координаты
void setCoord(int n) {
	int R_;
	int x0 = WinW / 2;
	int y0 = WinH / 2;
	if (WinW > WinH)
	{
		R = 5 * (WinH / 10) / n;
		R_ = WinH / 2 - R - 10;
	}
	else {
		R = 5 * (WinW / 10) / n;
		R_ = WinW / 2 - R - 10;
	}

	if (n) {
		for (int i = 0; i < n; i++) {
			float theta = 2.0f * 3.1415926f * float(i) / float(n);
			float y1 = R_ * cos(theta) + y0;
			float x1 = R_ * sin(theta) + x0;

			vertC[i].x = x1;
			vertC[i].y = y1;
		}
	}
	
}


void setRadius(int n) {
	int R_;
	int x0 = WinW / 2;
	int y0 = WinH / 2;
	if (WinW > WinH)
	{
		R = 5 * (WinH / 10) / n;
		R_ = WinH / 2 - R - 10;
	}
	else {
		R = 5 * (WinW / 10) / n;
		R_ = WinW / 2 - R - 10;
	}

	for (int i = 0; i < n; i++) {
		if (vertC[i].x + R + 10 >= WinW) {
			vertC[i].x = WinW - R - 10;
		}
		if (vertC[i].y + R + 10 >= WinH) {
			vertC[i].y = WinH - R - 10;
		}

		if (vertC[i].x - R - 10 <= 0) {
			vertC[i].x = R + 10;
		}
		if (vertC[i].y - R - 10 <= 50) {
			vertC[i].y = R + 50;
		}
	}
}

//рисуем круг в заданных координатах	
void drawCircle(int x, int y, int R) {
	glColor3f(0.5, 1.0, 0.65);
	float x1, y1;
	glBegin(GL_POLYGON);
	for (int i = 0; i < 360; i++)
	{
		float theta = 2.0f * 3.1415926f * float(i) / float(360);
		y1 = R * cos(theta) + y;
		x1 = R * sin(theta) + x;;
		glVertex2f(x1, y1);
	}
	glEnd();

	glColor3f(0.0f, 0.0f, 0.0f);
	float x2, y2;
	glBegin(GL_LINE_LOOP);
	for (int i = 0; i < 360; i++)
	{
		float theta = 2.0f * 3.1415926f * float(i) / float(360);
		y2 = R * cos(theta) + y;
		x2 = R * sin(theta) + x;
		glVertex2f(x2, y2);
	}
	glEnd();
}

//text
void drawText(int nom, int x1, int y1) {
	GLvoid* font = GLUT_BITMAP_HELVETICA_18;
	string s = to_string(nom);
	glRasterPos2i(x1 - 5, y1 - 5);
	for (int j = 0; j < s.length(); j++)
		glutBitmapCharacter(font, s[j]);
}

void drawText(char nom, int x1, int y1) {
	GLvoid* font = GLUT_BITMAP_HELVETICA_18;

	glRasterPos2i(x1 - 5, y1 - 5);

	glutBitmapCharacter(font, nom);
}

void drawText(string str, int x1, int y1) {
	GLvoid* font = GLUT_BITMAP_HELVETICA_18;
	glRasterPos2i(x1 - 5, y1 - 5);
	string s = str;
	glRasterPos2i(x1 - 5, y1 - 5);
	for (int j = 0; j < s.length(); j++)
		glutBitmapCharacter(font, s[j]);
}
//_______вершины с текстом внутри
void drawVertex(int n) {
	for (int i = 0; i < n; i++) {
		drawCircle(vertC[i].x, vertC[i].y, R);
		drawText(graph.vertList[i], vertC[i].x, vertC[i].y);
	}
}

void drawBtns() {
	glColor3f(0.3, 1.0, 0.5);
	glBegin(GL_QUADS);
	glVertex2i(10, 10);
	glVertex2i(100, 10);
	glVertex2i(100, 50);
	glVertex2i(10, 50);
	glEnd();

	glColor3f(0.0, 0.0, 0.0);
	drawText("add Edge", 20, 30);

	glColor3f(0.9, 0.1, 0.2);
	glBegin(GL_QUADS);
	glVertex2i(110, 10);
	glVertex2i(220, 10);
	glVertex2i(220, 50);
	glVertex2i(110, 50);
	glEnd();

	glColor3f(0.0, 0.0, 0.0);
	drawText("delete Edge", 120, 30);

	glColor3f(0.3, 1.0, 0.5);
	glBegin(GL_QUADS);
	glVertex2i(230, 10);
	glVertex2i(330, 10);
	glVertex2i(330, 50);
	glVertex2i(230, 50);
	glEnd();

	glColor3f(0.0, 0.0, 0.0);
	drawText("add vertex", 240, 30);

	glColor3f(0.9, 0.1, 0.2);
	glBegin(GL_QUADS);
	glVertex2i(340, 10);
	glVertex2i(460, 10);
	glVertex2i(460, 50);
	glVertex2i(340, 50);
	glEnd();

	glColor3f(0.0, 0.0, 0.0);
	drawText("delete vertex", 350, 30);
}

//ребро ориентированный взвешенный граф
void drawLine1(int text, int x0, int y0, int x1, int y1) {

	glColor3i(0, 0, 1);
	glBegin(GL_LINES);
	glVertex2i(x0, y0);
	glVertex2i(x1, y1);
	glEnd();


	float vx = x0 - x1;
	float vy = y0 - y1;
	float s = 1.0f / sqrt(vx * vx + vy * vy);
	vx *= s;
	vy *= s;

	x1 = x1 + R * vx;
	y1 = y1 + R * vy;

	x0 = x0 - R * vx;
	y0 = y0 - R * vy;

	drawText(text, (x0 + x1) / 2 - 10, (y0 + y1) / 2 - 10);


	glBegin(GL_TRIANGLES);
	glVertex2f(x1, y1);
	glVertex2f(x1 + 10 * (vx + vy), y1 + 10 * (vy - vx));
	glVertex2f(x1 + 10 * (vx - vy), y1 + 10 * (vy + vx));
	glEnd();
}

void drawLine2(int text, int x0, int y0, int x1, int y1) {

	x1 = (x0 + x1) / 2;
	y1 = (y0 + y1) / 2;

	float vx = x0 - x1;
	float vy = y0 - y1;
	float s = 1.0f / sqrt(vx * vx + vy * vy);
	vx *= s;
	vy *= s;
	
	glColor3i(0, 0, 1);
	glBegin(GL_LINES);
	glVertex2i(x0, y0);
	glVertex2i(x1, y1);
	glEnd();
	
	x0 = x0 + R * vx;
	y0 = y0 + R * vy;

	drawText(text, (x0 + x1) / 2 - R * vx, (y0 + y1) / 2 - R * vy);

	glBegin(GL_TRIANGLES);
	glVertex2f(x1, y1);
	glVertex2f(x1 + 10 * (vx + vy), y1 + 10 * (vy - vx));
	glVertex2f(x1 + 10 * (vx - vy), y1 + 10 * (vy + vx));
	glEnd();
}

static void mouseMove(int x, int y) {

	if (btnClick) {
		vertC[activeVert].x = x - xx;
		vertC[activeVert].y = WinH - y - yy;
	}
	glutPostRedisplay();
}

static void mouseClick(int btn, int stat, int x, int y) {
	if (stat == GLUT_DOWN) {
		for (int i = 0; i < graph.GetAmountVerts(); i++) {
			if (pow(x - vertC[i].x, 2) + pow(WinH - y - vertC[i].y, 2) < R * R) {
				btnClick = true;
				activeVert = i;
				xx = x - vertC[activeVert].x;
				yy = WinH - y - vertC[activeVert].y;
			}
		}

		if (x <= 100 && y >= WinH - 50) {
			char a, b;
			int w;
			cout << "добавить ребро из вершины....в....\n";
			cin >> a >> b;
			cout << "вес:  ";
			cin >> w;
			graph.addEdge(a, b, w);
		}
		if (x >= 110 && x <= 220 && y >= WinH - 50) {
			char a, b;
			cout << "удалить ребро из вершины....в....\n";
			cin >> a >> b;
			graph.deleteEdge(a, b);
		}
		if (x >= 230 && x <= 330 && y >= WinH - 50) {
			char a;
			cout << "\nДобавить вершину с именем: ";
			cin >> a;
			graph.addVertex(a);
		}
		if (x >= 340 && x <= 460 && y >= WinH - 50) {
			char a;
			cout << "\nУдалить вершину с именем: ";
			cin >> a;
			graph.deleteVertex(a);
		}
	}
	if (stat == GLUT_UP) {
		btnClick = false;
	}
		
	glutPostRedisplay();
}

void reshape(int w, int h)
{
	WinW = w;
	WinH = h;
	//setRadius(graph.vertList.size());
	glViewport(0, 0, (GLsizei)WinW, (GLsizei)WinH);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(0, (GLdouble)WinW, 0, (GLdouble)WinH);
	glutPostRedisplay();
}

void display()
{
	glShadeModel(GL_SMOOTH);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(0, WinW, 0, WinH); //ставим начало координат в левый нижний угол
	glViewport(0, 0, WinW, WinH);
	glClearColor(1.0, 1.0, 1.0, 1.0);
	glClear(GL_COLOR_BUFFER_BIT);

	setRadius(graph.vertList.size());
	graph.drawGraph();
	drawBtns();

	glutSwapBuffers();
}

void MainDraw(int argc, char* argv[]) {

	

	glutInit(&argc, argv);

	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGBA);
	glutInitWindowSize(800, 600);
	glutCreateWindow("******************");
	WinW = glutGet(GLUT_WINDOW_WIDTH);
	WinH = glutGet(GLUT_WINDOW_HEIGHT);
	setCoord(graph.vertList.size());

	glutDisplayFunc(display);
	glutReshapeFunc(reshape);
	glutMouseFunc(mouseClick);
	glutMotionFunc(mouseMove);

	glutMainLoop();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


void Graph::PrintMatrix(int** matrix)
{
    for (int i = 0; i < vertList.size(); i++)
    {
        std::cout << std::setw(2) << vertList[i] << ' ';
        for (int j = 0; j < vertList.size(); j++)
        {
            if (matrix[i][j] == -1) cout << " M ";
            else cout << setw(2) << matrix[i][j] << ' ';
        }
        std::cout << endl;
    }
}

//////------ИСКЛЮЧЕНИЯ ИЗ ПРОВЕРКИ РЕБЕР -----////////////////////////////////
Edge Graph::newMap(int** map) {
    Edge temp;

    int max = -1, k, l; //Максимальный оцененный ноль, координаты его строки и столбца

    for (int i = 0; i < vertList.size(); i++)
    {
        for (int j = 0; j < vertList.size(); j++)
        {
            if (map[i][j] == 0)
            {
                int tSum = zeroScore(map, i, j);
                if (tSum >= max)
                {
                    max = tSum;
                    k = i;
                    l = j;
                }
            }
        }
    }

    for (int i = 0; i < vertList.size(); i++)
        for (int j = 0; j < vertList.size(); j++)
        {
            if (i == k) map[i][j] = -1;
            if (j == l) map[i][j] = -1;
        }

    temp.from = k;
    temp.dest = l;

    return temp;
}


/////////////-----ГЛАВНАЯ ФУНКЦИЯ----///////////////////////
void Graph::zadacha() {
    int n = vertList.size();
    int** map = new int* [n];
	for (int i = 0; i < n; i++) {
		map[i] = new int[n];
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			map[i][j] = Matrix[i][j];
		}
	}

    int i = 0;
    while (i != n - 1) {//Основной цикл 
        ReducRows(map);
        std::cout << ".....редукция строк\n";
        PrintMatrix(map);

        ReducCols(map);
        std::cout << ".....редукция столбцов\n";
        PrintMatrix(map);

        res.push_back(newMap(map));

        std::cout << "...................\n";
        PrintMatrix(map);

        i++;
    }

    for (int i = 1; i < res.size(); i++) {
		for (int j = i; j < res.size(); j++) {
			if (res[i].from == res[j].dest) {
				swap(res[i], res[j]);
			}
		}
    }

	cout << '\n' << "Маршрут:\n";
    for (int i = 0; i < res.size(); i++)
        cout << vertList[res[i].from] << "->" << vertList[res[i].dest] << '\n';

    int a = Matrix[res[i - 1].dest][res[0].from]; // Расстояние от последней вершины до первой
    a += Matrix[res[0].from][res[0].dest]; // Расстояние первого ребра

	for (int i = 1; i < res.size(); i++) {       // Проходим по массиву структур
		a += Matrix[res[i].from][res[i].dest];   /* Прибавим расстояние i-того ребра */
	} 

	for (int i = 0; i < res.size() - 1; i++) { // Проходим по массиву структур
		if (res[i].dest != res[i + 1].from) { // Если поля равны, то расстояние от вершины А до А считаем равным 0
			a += Matrix[res[i].dest][res[i + 1].from];// Считаем расстояние между ребрами 
		}
	} 

    cout << "Расстояние всего пути: " << a << '\n';

	for (int i = 0; i < n; i++) {
		delete[] map[i];
	}
    delete[] map;
}

////////////////////----РЕДУКЦИЯ  СТРОК---/////////////////////////////////////////////////
void Graph::ReducRows(int** map) {
	for (int i = 0; i < vertList.size(); i++) //Проход по строкам
	{
		int min = 100000000000; //Минимум для каждой строки вычисляется заново

		for (int j = 0; j < vertList.size(); j++) //Проход по ячейкам строки
		{
			if ((map[i][j] < min) && (map[i][j] >= 0)) //Если путь меньше минимума и не является путём в тот же город
				min = map[i][j]; //обновляем минимум строки
		}

		for (int j = 0; j < vertList.size(); j++) //Редукция строки
			if (map[i][j] != -1) //Если не путь в тот же город
				map[i][j] -= min; //вычитаем минимум
	}
}



////////////////////----РЕДУКЦИЯ  СТОЛБЦОВ---/////////////////////////////////////////////////
void Graph::ReducCols(int** map){
	for (int j = 0; j < vertList.size(); j++) //Проход по столбцам
	{
		int min = 100000000000; //Минимум для каждого столбца вычисляется заново

		for (int i = 0; i < vertList.size(); i++) {
			if ((map[i][j] < min) && (map[i][j] >= 0)) //Если ячейка меньше минимума и не является путём в тот же город
				min = map[i][j]; //обновляем минимум
		}

		for (int i = 0; i < vertList.size(); i++) //Редукция столбца
			if (map[i][j] != -1) //Если не путь в тот же город
				map[i][j] -= min; //вычитаем минимум
	}
}

/////////////////////----ОЦЕНКА НУЛЕЙ------/////////////////////////////////////////////
int Graph::zeroScore(int** map, int row, int col) {

	int minRow = 100000000000; // Создаем переменную минимального элемента
	for (int j = 0; j < vertList.size(); j++) // Проходим каждый столбец в заданной строке
		if (j != col) // Координаты столбца не совпали с заданными
			if ((minRow > map[row][j]) && (map[row][j] >= 0)) // Ищем минимум
				minRow = map[row][j]; // Обновляем значение переменной

	int minCol = 100000000000; //Минимум
	for (int i = 0; i < vertList.size(); i++) //Проходим все строки в столбце
		if (i != row) //строка не совпала с заданной
			if ((map[i][col] < minCol) && (map[i][col] >= 0)) //Поиск минимума
				minCol = map[i][col];

	return minRow + minCol;
}
