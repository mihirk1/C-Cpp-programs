#include <iostream> 
using namespace std; 


class Faculty
{
	protected:
	int score;
	public:
	void set_values (int x)
	{ 
        score=x;
    }

}; 

class Course1: public Faculty
{
	public:
	int course1_score()
	{ 
        return (score+10); 
    }
}; 
class Course2:protected Faculty 
{
    public:
    void set_values (int x)
    {
        score=x;
    }
    int course2_score()
	{ 
        return (score+40); 
    }
};

class Course3:private Faculty
{
    public:
    void set_values (int x)
    {
        score=x;
    }
    int course3_score()
    {
        return (score+70);
    }
};

int main ()
{
	Course1 c1;
	c1.set_values (50);
	cout << "The Course 1 value is::" << c1.course1_score() << endl;
	Course2 c2;
    c2.set_values(50);
	cout << "The course 2 value is::" << c2.course2_score() << endl;
	
	Course3 c3;
    c3.set_values(50);
    cout << "The course 3 value is::" << c3.course3_score() << endl;

    cout << "The total score is :" << c1.course1_score()+c2.course2_score() +c3.course3_score() << endl;
	return 0;
}