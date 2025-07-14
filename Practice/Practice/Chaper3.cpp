
#include <iomanip>
#include <ios>
#include <iostream>
#include <string>

#include <algorithm>
#include <vector>

using std::cin; using std::setprecision;
using std::cout; using std::string;
using std::endl; using std::streamsize;

using std::sort; using std::vector;

int main()
{
	// 변수 사용
	/*
	{
		// 학생의 이름을 묻고 입력받음
		cout << "Please enter your first name : ";
		string name;
		cin >> name;
		cout << "Hello, " << name << "!" << endl;

		// 중간시험과 기말시험의 점수를 묻고 입력 받음
		cout << "Please enter your midterm and final exam grades : ";
		double midterm, final;
		cin >> midterm >> final;

		// 과제 점수를 물음
		cout << "Enter all your homework grades, "
			"followed by end-of-file : ";

		// 지금까지 입력된 과제 점수의 개수와 합
		int count = 0;
		double sum = 0;

		// 입력을 위한 변수
		double x;

		// 불변성 : 지금까지 count개 점수를 입력받았으며 입력받은 점수의 합은 sum
		while (cin >> x)
		{
			++count;
			sum += x;
		}

		// 결과를 출력
		streamsize prec = cout.precision();
		cout << "your final grade is " << setprecision(3)
			<< 0.2 * midterm + 0.4 * final + 0.4 * sum / count
			<< setprecision(prec) << endl;
	}	
	*/

	// 벡터 사용
	/* {
		// 학생의 이름을 묻고 입력받음
		cout << "Please enter your first name : ";
		string name;
		cin >> name;
		cout << "Hello, " << name << "!" << endl;

		// 중간시험과 기말시험의 점수를 묻고 입력 받음
		cout << "Please enter your midterm and final exam grades : ";
		double midterm, final;
		cin >> midterm >> final;

		// 과제 점수를 물음
		cout << "Enter all your homework grades, "
			"followed by end-of-file : ";
		vector<double> homework;
		double x;

		// 불변성 : homework는 지금까지 입력받은 과제 점수가 있음
		while (cin >> x)
		{
			homework.push_back(x);
		}

		// 과제 점수의 입력 유무를 확인
		typedef vector<double>::size_type vec_sz;
		vec_sz size = homework.size();
		if (size == 0) {
			cout << endl << "You must enter uour grades. "
				"Please try again." << endl;
			return 1;
		}

		// 점수를 정렬
		sort(homework.begin(), homework.end());

		// 과제 점수의 중앙값을 구함
		vec_sz mid = size / 2;
		double median;
		median = size % 2 == 0 ? (homework[mid] + homework[mid - 1]) / 2 : homework[mid];

		// 최종 점수를 구해서 출력
		streamsize prec = cout.precision();
		cout << "Your final grade is " << setprecision(3)
			<< 0.2 * midterm + 0.4 * final + 0.4 * median
			<< setprecision(prec) << endl;

	}
	*/

	// 3-2
	


	return 0;
}