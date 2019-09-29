#pragma once
#include "iostream"
#include "fstream"
#include <math.h>
using namespace System::Drawing;
using namespace System::Windows::Forms;
class Enemigo
{
public:
	Enemigo(int x, int y) {
		this->x = x;
		this->y = y;
	}
	void dibujar(Graphics^ bg) {
		bg->FillRectangle(Brushes::DarkRed, x, y, 25, 25);
		bg->DrawRectangle(Pens::Red, x, y, 25, 25);
	}

	void mover(int xp, int yp)
	{
		int aleatorio;
		aleatorio = rand()%1000+10;
		if (aleatorio < 3) {
			if (xp <= x && xp - 150 <= x || xp >= x && xp + 150 >= x || yp >= y && yp + 150 >= y || yp <= y && yp - 150 <= y)
			{
				{
					if (xp <= x)x -= dxp;
					if (xp >= x && x + dxp <= 726)x += dxp;
					if (yp <= y) y -= dyp;
					if (yp >= y && y + dyp <= 726)y += dyp;
				}
			}
		}
	}

	int getx() { return x; }
	int gety() { return y; }

private:
	int x;
	int y;
	int dxp = 25;
	int dyp = 25;
};
