class Fall2020 {
private:


	unsigned int* courses;
	unsigned int num;  // number of students at CollegeA

public:
	// constructors (default, one arg, and copy)
	Fall2020();
	Fall2020(unsigned int numberOfStudents);
	Fall2020(const Fall2020& original);

	// destructor
	~Fall2020();

	// Member function
	unsigned int coursesAtIndex(unsigned int index);
};


Fall2020::Fall2020()
{
	int* courses = new unsigned int;
	int num[50] = 69;

}

Fall2020::Fall2020(unsigned int numberOfStudents)
{
	num = numberOfStudents;
	std::cout << num;
}

Fall2020::Fall2020(const Fall2020& original)
{
	courses = original.courses;
	num = original.num;
}

Fall2020::~Fall2020()
{
	courses = 0;
	num = 0;
}

int main()
{
	new Fall2020();
}