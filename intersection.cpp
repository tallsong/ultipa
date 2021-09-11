#include <algorithm> //std::sort
#include <iostream> //std::cout
#include <vector> //std::vector

std::vector<int> intersection(std::vector<int> &v1,
                                      std::vector<int> &v2){
    std::vector<int> v3;

    std::sort(v1.begin(), v1.end());
    std::sort(v2.begin(), v2.end());

    std::set_intersection(v1.begin(),v1.end(),
                          v2.begin(),v2.end(),
                          back_inserter(v3));
    return v3;
}

int main(){
    std::vector<int> v1 {1,2,2,1};
    std::vector<int> v2 {2,2};

    auto v3 = intersection(v1, v2);

    for(int n : v3)
        std::cout << n << ' ';
}