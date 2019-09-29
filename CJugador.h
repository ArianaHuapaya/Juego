#pragma once
#include "CLista.h"
#include "iostream"
#include <string>
#include <iomanip>
#include <ctime>
#include <sstream>

using namespace std;
using namespace System::Drawing;
using namespace System::Windows::Forms;

class CJugador {
private:
	int x, y, dx, dy;
	int vidas;
	int nivel;
	char direccion;
public:
	CJugador() {
		x = y = 350;
		vidas = 5;
		nivel = 1;
		direccion = 'N';
		dx = 0;
		dy = 0;
	}
	void dibujar(Graphics^ bg) {
		bg->FillRectangle(Brushes::Gold, x, y, 25, 25);
		bg->DrawRectangle(Pens::Black, x, y, 25, 25);
		bg->FillEllipse(Brushes::Yellow, x + 5, y + 5, 15, 15);
		bg->DrawEllipse(Pens::Black, x + 5, y + 5, 15, 15);
	}
	void setdireccion(KeyEventArgs^ e) {
		e->Handled = true;
		e->SuppressKeyPress = true;
		switch (e->KeyValue) {
		case 'W': direccion = e->KeyValue; break;
		case 'S': direccion = e->KeyValue; break;
		case 'A': direccion = e->KeyValue; break;
		case 'D': direccion = e->KeyValue; break;
		default: break;
		}
	}
	void mover() {
		switch (direccion) {
		case 'W': dx = 0; if (dy == 0)dy = -25; y += dy; break;
		case 'S':
		{
			dx = 0;
			if (dy == 0)
			{
				dy = 25;
				if (dy == -25) { y += dy; break; }
				else y += dy; break;
			}
			else y += dy; break;
		}
		case 'A':dy = 0; if (dx == 0)dx = -25; x += dx; break;
		case 'D':
		{
			dy = 0;
			if (dx == 0)
			{
				dx = 25;
				if (dx == -25) { x += dx; break; }
				else x += dx; break;
			}
			else x += dx; break;
		}
		default: break;
		}
	}
	bool colision() {
		switch (x) {
		case 725: return true;
		case -25: return true;
		}
		switch (y) {
		case 725: return true;
		case -25: return true;
		}
		return false;
	}
	
	bool estatico() {
		if (direccion == 'N') { return true; }
		else { return false; }
	}
	void muerte(System::String^ causa) {
		direccion = 'N';
		x = y = 350;
		vidas--;
		if (vidas == 0) {
			MessageBox::Show("           ¡GAME OVER!\n\n" + causa);
			exit(0);
		}
		else {
			MessageBox::Show("           ¡Has muerto!\n\n" + causa);
		}
	}
	void nnivel() {
		++nivel;
		x = y = 350;
		direccion = 'N';
	}
	int getx() { return x; }
	int gety() { return y; }
	int getnivel() { return nivel; }
	int getvidas() { return vidas; }
	void setnivel(int n) { nivel = n; }
	void setvida(int n) { vidas = n; }
	void setdxy(int dx, int dy) { this->dx = dx; this->dy = dy; }
	void setxy(int x, int y) { this->x = x; this->y = y; }
};


