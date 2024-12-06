class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        
        //agar array pehle sorted hai to two pointer

        int left = 0;
        int right = numbers.size() - 1;

        while(left < right){
            if(numbers[left] + numbers[right] == target)
                return { left + 1, right + 1};
            // agr target sum se large hai toh left ko ++ kro taki sum najdeek aaye target k
            else if(numbers[left] + numbers[right] < target)
                left++;

            else
                right--;

        }
        // agr loop se bahar aaya toh empty vector jiska tarika aise hai { }
        return { };

    }
};