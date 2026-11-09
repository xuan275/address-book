#include<iostream>
#include<string>
using namespace std;

struct person{
	string name;
	string dept;
	int ext;
};

void print(person arr[],int len){
	for(int i = 0;i < len;i ++){
		cout << arr[i].name << "  " << arr[i].dept << "  " << arr[i].ext << endl;
	}
}

void findbydept(person arr[],int len,string dept){
	bool found = false;   //立牌检查是否有值输入
	for(int i = 0;i < len;i ++){
		if(arr[i].dept == dept){
			cout << arr[i].name << arr[i].dept << arr[i].ext <<endl;
	        found = 1;     //立牌
		}
	}
    if(found == 0){        //遍历数组后牌子仍然没有立起来
			cout << "该部门无人" << endl;
		}
}

int count(person arr[],int len,string dept){
	int Count = 0;
	for(int i = 0;i < len;i ++){
		if(arr[i].dept == dept){
			Count++;
		}
	}
	
	cout << dept << "共" << Count << "人" << endl;

	return Count;
}

int main(){
	person staff[5]{
		{"陈晨", "技术部", 8001},
		{"周舟", "市场部", 8002},
		{"孙尚", "技术部", 8003},
		{"吴迪", "人事部", 8004},
		{"郑宁", "技术部", 8005}
	};
	
	print(staff,5);
	
	findbydept(staff,5,"技术部");
	
	count(staff,5,"技术部");
	
	return 0;
}
