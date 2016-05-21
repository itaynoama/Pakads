#pragma once
#include <Windows.h>
#include "FormElement.h"

class TextBox : public FormElement
{
private:
	char *buffer;
	int len;
	int size;
public:
	TextBox(int x = 0, int y = 0, int size =  30);
	int width();
	int height();
	COORD pos();
	void print(HANDLE h, COORD cursor, COORD window);
	bool handle_keys(PCOORD x, COORD window, char c, int keycode);
	bool handle_clicks(PCOORD mouse, COORD window, PCOORD cursor);
	void shift(int j, char c);
	void delete_char(int j);
	void set_text(const char *txt);
	char *get_text();
	~TextBox();
};