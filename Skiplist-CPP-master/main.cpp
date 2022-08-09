/* ************************************************************************

 ************************************************************************/
#include <iostream>
#include "skiplist.h"
#define FILE_PATH "./store/dumpFile"

int main() {

    // 键值中的key用int型，如果用其他类型，需要自定义比较函数
    // 而且如果修改key的类型，同时需要修改skipList.load_file函数
    SkipList<int, std::string> skipList(6);
	skipList.insert_element(1, "天气"); 
	skipList.insert_element(3, "转晴天"); 
	skipList.insert_element(7, "出门逛街散步旅游"); 
	skipList.insert_element(8, "活动：网球、篮球、高尔夫"); 
	skipList.insert_element(9, "去图书馆"); 
	skipList.insert_element(19, "借一些书籍"); 
	skipList.insert_element(19, "借一些历史书"); 

    std::cout << "skipList size:" << skipList.size() << std::endl;

    skipList.dump_file();

    // skipList.load_file();

    skipList.search_element(9);
    skipList.search_element(18);


    skipList.display_list();

    skipList.delete_element(3);
    skipList.delete_element(7);

    std::cout << "skipList size:" << skipList.size() << std::endl;

    skipList.display_list();
}
