//=========================================================
//	�|�C���^�[�ɂ�镶����
//=========================================================
#include <stdio.h> // printf()

int main()
{
	// C++�͌^�����i�Ȃ̂� const �����Ȃ���NG
	const char* pt = "12345";
	printf("�|�C���^�[pt��\"%s\"���w���Ă��܂�\n", pt);
	//
	// �|�C���^�[�͑������
	//
	pt = "abcde";
	printf("�|�C���^�[pt��\"%s\"���w���Ă��܂�\n", pt);
	return 0;
}