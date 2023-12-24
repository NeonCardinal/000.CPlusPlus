#include <iostream>
#include "PStudent.cpp"

int main()
{
	PStudent st;

	st.ReadPStudent("Peshko", "1234567890", 77777, 6.00, 256.87);
	st.PrintPStudent();

	return 0;
}