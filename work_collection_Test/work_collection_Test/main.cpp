#include <iostream>
#include <vector>
#include <string>
using namespace std;

//����&0x1ԭ��---�������ż�ж���
void test01()
{
	int a = 3;
	if (a & 0x1)//Ϊ��
	{
		cout << (a & 0x1) << endl;
		cout << "��" << endl;
	}
	else
	{
		cout << (a & 0x1) << endl;
		cout << "ż" << endl;

	}
}
//��������vector�ܲ��ܽ������ݣ����ǲ��ܣ���Ϊvector����û������=?
void test02()
{
	vector<int> nums1;
	nums1.push_back(1);
	vector<int> nums2;
	nums1.push_back(2);

	vector <int>temp;
	temp = nums1;
	nums1 = nums2;
	nums2 = temp;
	cout << "nums1" << nums1[0] << endl;
	cout << "nums2" << nums2[0] << endl;

}
void test03()
{
	string nums1 = "zhangsan";
	string nums2 = "lisi";
	string temp;

	temp = nums1;
	nums1 = nums2;
	nums2 = temp;
	cout << "nums1 " << nums1 << endl;
	cout << "nums2 " << nums2 << endl;

}
void test04(vector<int>& nums1, vector<int>& nums2)
{
	vector<int> newnum;
	if (nums1.size())
		newnum.assign(nums1.begin(), nums1.end());//���newnum,����nums1����
	if (nums2.size())
		newnum.insert(newnum.end(), nums2.begin(), nums2.end());//��ָ���Ԫ�غ���룬��ʵ����ֻʹ����һ���û�����Ҫ����������������
	for (auto it : newnum)
	{
		cout << it << endl;
	}
}

int main()
{
	vector<int>num1(3, 200);
	vector<int>num2(2, 289);
	test04(num1, num2);

}