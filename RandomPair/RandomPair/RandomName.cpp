#include <stdio.h>
#include <iostream>
#include <vector>
#include <string>
#include <time.h>

int main()
{
	//���� �õ尪 �ʱ�ȭ
	srand(time(NULL));
	//vector : string �����̳� ��ü
	std::vector<std::string> names;
	//string : ���ڿ� ��ü
	std::string yunwoo = "yunwoo";
	
	//�����̳ʿ� string �� ����ִ� �Լ�
	names.push_back(yunwoo);
	std::string hyunwook = "hyunwook";
	names.push_back(hyunwook);
	std::string mingun = "mingun";
	names.push_back(mingun);

	//�������� �־��.
	int index = rand()%3;

	//���
	std::cout << names[index] << std::endl;
	names.erase(names.begin() + index);

	getchar();
	return 0;
}
