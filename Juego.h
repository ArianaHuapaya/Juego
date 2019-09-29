#pragma once
#include <ctime> 
#include "CJugador.h"
#include "CArrBloque.h"
#include "CArrEnemigo.h"
#include "CComestible.h"

namespace Project19 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de Juego
	/// </summary>
	public ref class Juego : public System::Windows::Forms::Form
	{
	public:
		Juego(void)
		{
			
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~Juego()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Timer^  Mov_Pie;
	protected:

	private: System::Windows::Forms::Timer^  Mov_Jugador;

	protected:
	private: System::ComponentModel::IContainer^  components;

	private:
				
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->Mov_Pie = (gcnew System::Windows::Forms::Timer(this->components));
			this->Mov_Jugador = (gcnew System::Windows::Forms::Timer(this->components));
			this->SuspendLayout();
			// 
			// Mov_Pie
			// 
			this->Mov_Pie->Tick += gcnew System::EventHandler(this, &Juego::Mov_Pie_Tick);
			// 
			// Mov_Jugador
			// 
			this->Mov_Jugador->Tick += gcnew System::EventHandler(this, &Juego::timer2_Tick);
			// 
			// Juego
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(609, 389);
			this->Name = L"Juego";
			this->Text = L"Snake 2.0";
			this->Load += gcnew System::EventHandler(this, &Juego::Juego_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void Juego_Load(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void timer2_Tick(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void Mov_Pie_Tick(System::Object^  sender, System::EventArgs^  e) {
	}
	};
}
