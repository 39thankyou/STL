#include <iostream>
#include <string>
#include <algorithm>
#include "myAlgorithm.h"

/*
��1���򵥲����㷨
		��1�� find(beg, end, val)           //���ص����������ҵ�ָ��ָ��Ԫ�ص����� 
		��2�� find_if(beg, end, unaryPred)  //���ص�һ������unaryPred��Ԫ��  ����β�������
		��3�� count(beg, end, val)          //����һ���ж��ٸ�
		��4�� count_if(beg, end, val)       //����������һ���ж��ٸ�

		��5�� search(beg1, end1, beg2, end2)         //������2������1��������λ��
		��6�� find_first_of(beg1, end1, beg2, end2)  //���صڶ�����������Ԫ���ڵ�һ����Χ�ڳ��ֵ�λ��  
		��7�� find(beg1, end1, beg2, end2)           //��search�෴���������һ�����ֵ������е�λ��

��2������ֻ���㷨
		��1��for_each(beg, end, unaryOp)   //��ÿ��Ԫ��ʹ�ÿɵ��ö���
		��2��equal(beg1, end1, beg2)      //�����������ÿ��Ԫ�ض���beg2��ʼIDE������ȣ��򷵻�true

��3�����������㷨
		��1��lower_bound(beg, end, val)    //����ָ���һ��С�ڵ���val�ĵ�����
		��2��upper_bound(beg, end, val)    //����ָ���һ������val�ĵ�����
		��3��equal_range(beg, end, val)    //��������һ��pair�������������������ز���

��4��д�����㷨
		��1���ݲ��ܽ᣻

��5�����ֺ������㷨
		��1��is_partitioned(beg, end, unaryPrey)                 //������ν�ʵ���ǰ���������ں��򷵻�true, ��Ҳ��true
		��2��partitioned_copy(beg, end, dest1, dest2, unaryPred) //������ν�ʵ�Ԫ�ط���dest1�У��������㿽����dest2�У�����һ��pair
																 //,firstָ��dest1��ĩβ��secondָ��dest2��ĩβ
*/

void myAlgorithmTest()
{
	std::cout << "----------------------------this is class Algorithm demo------------------------" << std::endl;



}