#include <iostream>
#include <vector>
#include <string>
using namespace std;

//测试&0x1原理---真的是奇偶判定吗
void test01()
{
	int a = 3;
	if (a & 0x1)//为奇
	{
		cout << (a & 0x1) << endl;
		cout << "奇" << endl;
	}
	else
	{
		cout << (a & 0x1) << endl;
		cout << "偶" << endl;

	}
}
//测试两个vector能不能交换数据？答案是不能，因为vector对象没有重载=?
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
		newnum.assign(nums1.begin(), nums1.end());//清空newnum,并将nums1插入
	if (nums2.size())
		newnum.insert(newnum.end(), nums2.begin(), nums2.end());//在指令的元素后差入，其实可以只使用这一种用户，主要是两个方法都试下
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