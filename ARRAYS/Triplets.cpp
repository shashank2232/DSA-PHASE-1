// TRIPLETS   (Find all triplets equal to the given sum/target)
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<vector<int> > triplets(vector<int> arr,int targetSum){
	//Logic 
	int n = arr.size();
	sort(arr.begin(),arr.end());
	vector<vector<int> > result;          // to store all the triplets we made a vector of vector

	// Pick every a[i], pair sum for remaining part
    // i will go run 0 to n-3 as we need to get triplets i.e. 3 numbers 
	for(int i=0; i<=n-3;i++){

		int j = i + 1;                // j is now at 1st element
		int k = n - 1;                // k is now at last element

		//two pointer approach
		while(j < k){
			int current_sum = arr[i];
			current_sum += arr[j];
			current_sum += arr[k];

			if(current_sum==targetSum){
            // putting all 3 elements(arr[i],arr[j],arr[k]) in the vector and 
            // then moving further (j++,k--) for the rest TRIPLETS
				result.push_back({arr[i],arr[j],arr[k]});       
				j++;
				k--;
			}
            // if current sum is greater than target sum we need to move backwards(k--)
			else if(current_sum > targetSum){
				k--;
			}
            // else if current sum is greater than target sum we will move frontwards(j++)
			else{
				j++;
			}
		}

	}
	return result;
}

int main(){

	vector<int> arr{1, 2, 3, 4, 5, 6, 7, 8, 9, 15};
	int S = 18;

	auto result = triplets(arr,S);

	for(auto v : result){
		for(auto no : v){
			cout<<no<<",";
		}
		cout<<endl;
	}
	return 0;
}