#include <iostream>
#include <Eigen/Dense>

int main(int argc, char *argv[]){

	using namespace Eigen;
	
	int sol = abs(-55);

	std::cout << sol << std::endl;

	Matrix2d a;
	a << 1, 2,
		 3, 4;
	MatrixXd b(2,2);
	b << 2, 3,
		 1, 4;

	std::cout << "a + b =\n" << a + b << std::endl;
	std::cout << "a - b =\n" << a - b << std::endl;
	std::cout << "Doing a += b\n" << std::endl;
	a += b;
	std::cout << "Now a =\n" << a << std::endl;

	a << 1, 2,
		3, 4;
	Vector3d v(1,2,3);
	Vector3d w(0,1,2);

	std::cout << "a * 2.5 =\n" << a * 2.5 << std::endl;
	std::cout << "v * 0.1 =\n" << 0.1 * v << std::endl;
	std::cout << "a * a =\n" << a * a << std::endl;
	std::cout << "Dot product: " << v.dot(w) << std::endl;
	std::cout << "Cross product:\n" << v.cross(w) << std::endl;

	using namespace std;

	Eigen::Matrix2d mat;
	mat << 1, 2,
		   3, 4;

	cout << "Here is mat.sum(): " << mat.sum() << endl;
	cout << "Here is mat.prod(): " << mat.prod() << endl;
	cout << "Here is mat.mean(): " << mat.mean() << endl;
	cout << "Here is mat.minCoeff(): " << mat.minCoeff() << endl;
	cout << "Here is mat.maxCoeff(): " << mat.maxCoeff() << endl;
	cout << "Here is mat.trace(): " << mat.trace() << endl;

	return 0;
}