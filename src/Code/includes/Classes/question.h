#ifndef CODE_QUESTION_H_
#define CODE_QUESTION_H_

#include <./SFML/Window.hpp>
#include <./SFML/Graphics.hpp>
#include <iostream>

using namespace sf;
using namespace std;

struct Answer
{

		int cost;
		wstring w_string;

};

class Question
{
	public:

		vector <Answer> answer;

		wstring w_question;

		Question ();
		Question (const wstring&, const vector <Answer>&);
};

#endif
