
#include "iostream"
#include <iostream>
#include <Eigen/Dense>
#include <Eigen/Core>
#include <Eigen/Geometry>
//using namespace Eigen;

int main() {
	// 使用 Eigen 定义一个 2x2 矩阵并初始化
	Eigen::Matrix2d mat;
	mat(0, 0) = 3;
	mat(1, 0) = 2.5;
	mat(0, 1) = -1;
	mat(1, 1) = mat(1, 0) + mat(0, 1);

	// 输出矩阵
	std::cout << "Here is the matrix mat:\n" << mat << std::endl;

	// 使用 Eigen 定义一个向量并初始化
	Eigen::Vector3d vec(1, 2, 3);

	// 输出向量
	std::cout << "Here is the vector vec:\n" << vec << std::endl;

	// 矩阵和向量乘法
	Eigen::Vector2d result = mat * Eigen::Vector2d(1, 1);
	std::cout << "The result of mat * (1, 1) is:\n" << result << std::endl;

	// 矩阵转置
	Eigen::Matrix2d matTranspose = mat.transpose();
	std::cout << "The transpose of mat is:\n" << matTranspose << std::endl;

	// 矩阵求逆
	if (mat.determinant() != 0) {
		Eigen::Matrix2d matInverse = mat.inverse();
		std::cout << "The inverse of mat is:\n" << matInverse << std::endl;
	}
	else {
		std::cout << "The matrix mat is not invertible." << std::endl;
	}

	// 创建并初始化一个 4x4 矩阵
	Eigen::Matrix4d mat4x4;
	mat4x4 << 1, 2, 3, 4,
			5, 6, 7, 8,
			9, 10, 11, 12,
			13, 14, 15, 16;

	// 输出 4x4 矩阵
	std::cout << "Here is the 4x4 matrix mat4x4:\n" << mat4x4 << std::endl;

	// 矩阵转置
	Eigen::Matrix4d mat4x4Transpose = mat4x4.transpose();
	std::cout << "The transpose of mat4x4 is:\n" << mat4x4Transpose << std::endl;

	// 矩阵求逆
	if (mat4x4.determinant() != 0) {
		Eigen::Matrix4d mat4x4Inverse = mat4x4.inverse();
		std::cout << "The inverse of mat4x4 is:\n" << mat4x4Inverse << std::endl;
	}
	else {
		std::cout << "The matrix mat4x4 is not invertible." << std::endl;
	}

	return 0;
}
