#pragma once

#include <GL/glew.h>
#include <iostream>
#include "Scene.h"
using namespace std;

//// Shaders
//const char* vertexShaderSource = "#version 330 core\n"
//"layout (location = 0) in vec3 aPos;\n"
//"layout (location = 1) in vec3 aColor;\n"
//"out vec3 ourColor;\n"
//"void main()\n"
//"{\n"
//"   gl_Position = vec4(aPos, 1.0);\n"
//"   ourColor = aColor;\n"
//"}\0";
//
//const char* fragmentShaderSource = "#version 330 core\n"
//"out vec4 FragColor;\n"
//"in vec3 ourColor;\n"
//"void main()\n"
//"{\n"
//"   FragColor = vec4(ourColor, 1.0f);\n"
//"}\n\0";
//
//unsigned int shaderProgram;
//unsigned int VBOp, VAO, EBO, VBOc;
//
//float vertices[] = {
//		 0.5f, -0.5f, 0.0f,  
//		-0.5f, -0.5f, 0.0f,  
//		 0.0f,  0.5f, 0.0f,  
//
//};
//
//float color [] = {
//			1.0f, 0.0f, 0.0f ,
//			0.0f, 1.0f, 0.0f ,
//			0.0f, 0.0f, 1.0f ,
//};
//
//unsigned int indices[] = {  // note that we start from 0!
//	0, 1, 2  // first Triangle
//};

namespace CppCLRWinformsProjekt {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Zusammenfassung für Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: Konstruktorcode hier hinzufügen.
			//
		}

	protected:
		/// <summary>
		/// Verwendete Ressourcen bereinigen.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: HKOGLPanel::HKOGLPanelControl^ hkoglPanelControl1;
	private: System::Windows::Forms::Timer^ timer1;
	private: System::ComponentModel::IContainer^ components;
	protected:

	private:
		/// <summary>
		/// Erforderliche Designervariable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Erforderliche Methode für die Designerunterstützung.
		/// Der Inhalt der Methode darf nicht mit dem Code-Editor geändert werden.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			HKOGLPanel::HKCOGLPanelCameraSetting^ hkcoglPanelCameraSetting1 = (gcnew HKOGLPanel::HKCOGLPanelCameraSetting());
			HKOGLPanel::HKCOGLPanelPixelFormat^ hkcoglPanelPixelFormat1 = (gcnew HKOGLPanel::HKCOGLPanelPixelFormat());
			this->hkoglPanelControl1 = (gcnew HKOGLPanel::HKOGLPanelControl());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->SuspendLayout();
			// 
			// hkoglPanelControl1
			// 
			hkcoglPanelCameraSetting1->Far = 1000;
			hkcoglPanelCameraSetting1->Fov = 45;
			hkcoglPanelCameraSetting1->Near = -1000;
			hkcoglPanelCameraSetting1->Type = HKOGLPanel::HKCOGLPanelCameraSetting::CAMERATYPE::ORTHOGRAPHIC;
			this->hkoglPanelControl1->Camera_Setting = hkcoglPanelCameraSetting1;
			this->hkoglPanelControl1->Location = System::Drawing::Point(1, 1);
			this->hkoglPanelControl1->Name = L"hkoglPanelControl1";
			hkcoglPanelPixelFormat1->Accumu_Buffer_Bits = HKOGLPanel::HKCOGLPanelPixelFormat::PIXELBITS::BITS_0;
			hkcoglPanelPixelFormat1->Alpha_Buffer_Bits = HKOGLPanel::HKCOGLPanelPixelFormat::PIXELBITS::BITS_0;
			hkcoglPanelPixelFormat1->Stencil_Buffer_Bits = HKOGLPanel::HKCOGLPanelPixelFormat::PIXELBITS::BITS_0;
			this->hkoglPanelControl1->Pixel_Format = hkcoglPanelPixelFormat1;
			this->hkoglPanelControl1->Size = System::Drawing::Size(382, 358);
			this->hkoglPanelControl1->TabIndex = 0;
			this->hkoglPanelControl1->Load += gcnew System::EventHandler(this, &Form1::hkoglPanelControl1_Load);
			this->hkoglPanelControl1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Form1::hkoglPanelControl1_Paint);
			// 
			// timer1
			// 
			this->timer1->Interval = 17;
			this->timer1->Tick += gcnew System::EventHandler(this, &Form1::timer1_Tick);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(384, 361);
			this->Controls->Add(this->hkoglPanelControl1);
			this->Name = L"Form1";
			this->Text = L"==Form";
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void hkoglPanelControl1_Load(System::Object^ sender, System::EventArgs^ e) 
	{
		Scene_Init();
		//// ------------------------------------- Init GLEW
		//GLenum err = glewInit();
		//if (GLEW_OK != err)
		//{
		//	cout << "GLEW is NOT initialized! \n ";
		//}

		//unsigned int vertexShader = glCreateShader(GL_VERTEX_SHADER);
		//glShaderSource(vertexShader, 1, &vertexShaderSource, NULL);
		//glCompileShader(vertexShader);

		//// Check for compile time errors
		//int success;
		//char infoLog[512];
		//glGetShaderiv(vertexShader, GL_COMPILE_STATUS, &success);
		//if (!success)
		//{
		//	glGetShaderInfoLog(vertexShader, 512, NULL, infoLog);
		//	std::cout << "ERROR::SHADER::VERTEX::COMPILATION_FAILED\n" << infoLog << std::endl;
		//}

		//// ------------------------------------- set Shader 
		//// Fragment shader
		//unsigned int fragmentShader = glCreateShader(GL_FRAGMENT_SHADER);
		//glShaderSource(fragmentShader, 1, &fragmentShaderSource, NULL);
		//glCompileShader(fragmentShader);

		//// Check for compile time errors
		//glGetShaderiv(fragmentShader, GL_COMPILE_STATUS, &success);
		//if (!success)
		//{
		//	glGetShaderInfoLog(fragmentShader, 512, NULL, infoLog);
		//	std::cout << "ERROR::SHADER::FRAGMENT::COMPILATION_FAILED\n" << infoLog << std::endl;
		//}

		//// Link shaders
		//// unsigned int shaderProgram = glCreateProgram();
		//shaderProgram = glCreateProgram();
		//glAttachShader(shaderProgram, vertexShader);
		//glAttachShader(shaderProgram, fragmentShader);
		//glLinkProgram(shaderProgram);

		//// Check for linking errors
		//glGetProgramiv(shaderProgram, GL_LINK_STATUS, &success);
		//if (!success) {
		//	glGetProgramInfoLog(shaderProgram, 512, NULL, infoLog);
		//	std::cout << "ERROR::SHADER::PROGRAM::LINKING_FAILED\n" << infoLog << std::endl;
		//}
		//glDeleteShader(vertexShader);
		//glDeleteShader(fragmentShader);

		//// -------------------------------------set VAO VBO 
		//glGenVertexArrays(1, &VAO);
		//glGenBuffers(1, &VBOp);
		//glGenBuffers(1, &VBOc);

		//// glGenBuffers(1, &EBO);
		//// bind the Vertex Array Object first, then bind and set vertex buffer(s), and then configure vertex attributes(s).
		//glBindVertexArray(VAO);

		//glBindBuffer(GL_ARRAY_BUFFER, VBOp);
		//glBufferData(GL_ARRAY_BUFFER, sizeof(vertices), vertices, GL_STATIC_DRAW);

		//glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 3 * sizeof(float), (void*)0);
		//glEnableVertexAttribArray(0);

		//glBindBuffer(GL_ARRAY_BUFFER, VBOc);
		//glBufferData(GL_ARRAY_BUFFER, sizeof(color), color, GL_STATIC_DRAW);

		//// glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, EBO);
		//// glBufferData(GL_ELEMENT_ARRAY_BUFFER, sizeof(indices), indices, GL_STATIC_DRAW);

		//glVertexAttribPointer(1, 3, GL_FLOAT, GL_FALSE, 3 * sizeof(float), (void*)0);
		//glEnableVertexAttribArray(1);

		//
		//// UNBIND
		//// note that this is allowed, the call to glVertexAttribPointer registered VBO as the vertex attribute's bound vertex buffer object so afterwards we can safely unbind
		//// glBindBuffer(GL_ARRAY_BUFFER, 0);

		//// You can unbind the VAO afterwards so other VAO calls won't accidentally modify this VAO, but this rarely happens. Modifying other
		//// VAOs requires a call to glBindVertexArray anyways so we generally don't unbind VAOs (nor VBOs) when it's not directly necessary.
		//// glBindVertexArray(0);


	}
	private: System::Void hkoglPanelControl1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e)
	{
		render();
		//glClearColor(1.0f, 1.0f, 1.0f, 0.0f);
		//glClear(GL_COLOR_BUFFER_BIT);

		//glUseProgram(shaderProgram);
		//glBindVertexArray(VAO); // seeing as we only have a single VAO there's no need to bind it every time, but we'll do so to keep things a bit more organized
		//glDrawArrays(GL_TRIANGLES, 0, 3);
		//// glDrawElements(GL_TRIANGLES, 3, GL_UNSIGNED_INT, 0);
		//// Disable vertex attribute arrays
		//// glDisableVertexAttribArray(0);
		//// glDisableVertexAttribArray(1);
	}
	
	private: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e)
	{
		hkoglPanelControl1->Invalidate();
	}
	};
}
