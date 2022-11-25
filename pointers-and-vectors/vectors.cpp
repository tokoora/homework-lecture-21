#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

bool listTest(vector <int> numbers);

int main(){

    //1-ლი სავარჯიშო
    vector <int> numbers={1, 2, 5, 0, 3, 6, 7};
    cout<<listTest(numbers)<<endl;
    cout<<endl<<endl;

    //მე-2 სავარჯიშო
    vector <int> nums={1, 2, 5, 0, 3, 1, 7};
    vector <int> secondVec;
    for(int i=1; i<nums.size()-1; i++){
        if(nums[i]<nums[i-1] && nums[i]<nums[i+1]){
            secondVec.push_back(nums[i]);
        }
    }
    for(int x:secondVec) cout<<x<<" ";
    cout<<endl<<endl;
}

bool listTest(vector <int> numbers){
    sort(numbers.begin(), numbers.end());
    for(int i=0; i<numbers.size(); i++){
        if(numbers[i+1]!=(numbers[i]+1)){
            return false;
        }
    }
    return true;
}


