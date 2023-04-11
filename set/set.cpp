#include <iostream>
#include <set>

int main(){
    std::set<int> set1{1, 2, 3, 4, 5};

    set1.insert(1);
    set1.insert(2);
    set1.insert(-4);

   

    auto found = set1.find(4);
    if(found != set1.end()){
        std::cout<<"we found 4!\n";
        set1.erase(found);
    }

    std::cout<<"4?: "<<set1.count(4) <<std::endl;

    std::cout<<"4?: "<<set1.contains(4) <<std::endl;

    for (auto &&element : set1)
    {
        std::cout<<element<<std::endl;
    }

    std::set<int> set2{4,6,8,10,12,14,16};
    auto lower = set2.lower_bound(8);
    auto higher = set2.upper_bound(14);
    
    for(auto it = lower;it!=higher; ++it){
        std::cout<<*it<<',';
    }
    std::cout<<std::endl;


    // set2.erase(lower, higher);

    for(auto elem: set1){
        std::cout << elem << std::endl;
    }
    std::cout<<std::endl;   

    for(auto elem: set2){
        std::cout << elem << std::endl;
    }
    std::cout<<std::endl;   
    set1.merge(set2);

    for(auto elem: set1){
        std::cout << elem << std::endl;
    }
    std::cout<<std::endl;   

    for(auto elem: set2){
        std::cout << elem << std::endl;
    }
    std::cout<<std::endl;   

    return 0;
}