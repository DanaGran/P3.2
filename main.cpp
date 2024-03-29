#include <iostream>
#include <vector>

int main(){
    int ok=0;
    std::vector<std::string>cuvinte;
    std::string word;
    while(std::cin>>word){

        cuvinte.push_back(word);
        ok++;

    }
    for( int i=ok-1 ; i >=0 ; i--){
        std::cout<<cuvinte[i];
    }


    return 0;

}