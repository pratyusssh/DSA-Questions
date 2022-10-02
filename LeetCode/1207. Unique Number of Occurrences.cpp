class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
      
        int size = arr.size(),count =1;
        vector<int> H; //hashing is being used in this
        
        sort(arr.begin(),arr.end());
        
        for(int i=0;i<size-1;i++){
            if(arr[i]==arr[i+1]){
                count++;
            }
            else{           //to add the element if it's number of occurrences has been finished
                H.push_back(count);
                count =1;
            }
            if(i==size-2){
                H.push_back(count);
            }
        }
        
        sort(temp.begin(),temp.end());
        
        size = H.size();
        for(int i=0;i<size-1;i++){. //checking for the condition
            if(H[i]==H[i+1]){
                return false;
            }
        }
        return true;
    }
    
};
