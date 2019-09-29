#pragma once

using namespace System::Drawing;
using namespace System::Windows::Forms;
class CBloque {
private:
	int x;
	int y;
public:
	CBloque(int x, int y) {
		this->x = x;
		this->y = y;
	}
	void dibujar(Graphics^ bg) {
		bg->FillRectangle(Brushes::LightSlateGray, x, y, 25, 25);
		bg->DrawRectangle(Pens::Black, x, y, 25, 25);
	}
	int getx() { return x; }
	int gety() { return y; }
};