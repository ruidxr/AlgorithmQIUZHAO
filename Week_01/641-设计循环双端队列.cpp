class MyCircularDeque {
    int len;
    vector<int> nums;    
public:
    /** Initialize your data structure here. Set the size of the deque to be k. */
    MyCircularDeque(int k) {
        len=k;
    }
    
    /** Adds an item at the front of Deque. Return true if the operation is successful. */
    bool insertFront(int value) {
        if(nums.size()==len){
            // cout<<"full ";
            return false;
        }
        nums.insert(nums.begin(),value);
        // cout<<"insertFront ";
        return true;
    }
    
    /** Adds an item at the rear of Deque. Return true if the operation is successful. */
    bool insertLast(int value) {
        if(nums.size()==len){
            // cout<<"full2 ";
            return false;
        }
        nums.push_back(value);
        // cout<<"insertLast ";
        return true;
    }
    
    /** Deletes an item from the front of Deque. Return true if the operation is successful. */
    bool deleteFront() {
        if(nums.size()==0){
            // cout<<"empty ";
            return false;
        }
        nums.erase(nums.begin());
        // cout<<"deleteFront ";
        return true;
    }
    
    /** Deletes an item from the rear of Deque. Return true if the operation is successful. */
    bool deleteLast() {
        if(nums.size()==0){
            // cout<<"empty2 ";
            return false;
        }
        nums.erase(nums.end()-1);
        // cout<<"deleteLast ";
        return true;
    }
    
    /** Get the front item from the deque. */
    int getFront() {
        if(nums.size()==0)
            return -1;
        // cout<<"getFront ";
        return nums[0];
    }
    
    /** Get the last item from the deque. */
    int getRear() {
        if(nums.size()==0)
            return -1;
        // cout<<"getRear ";
        return nums[nums.size()-1];
    }
    
    /** Checks whether the circular deque is empty or not. */
    bool isEmpty() {
        // cout<<"isEmpty ";
        if(nums.size()==0)
            return true;
        else
            return false;
    }
    
    /** Checks whether the circular deque is full or not. */
    bool isFull() {
        // cout<<"isFull ";
        if(nums.size()==len)
            return true;
        else
            return false;
    }
};

/**
 * Your MyCircularDeque object will be instantiated and called as such:
 * MyCircularDeque* obj = new MyCircularDeque(k);
 * bool param_1 = obj->insertFront(value);
 * bool param_2 = obj->insertLast(value);
 * bool param_3 = obj->deleteFront();
 * bool param_4 = obj->deleteLast();
 * int param_5 = obj->getFront();
 * int param_6 = obj->getRear();
 * bool param_7 = obj->isEmpty();
 * bool param_8 = obj->isFull();
 */