#include <iostream>
#include <set>
using namespace std;

//set is used to store unique elements in sorted order

void printAscendingOrder(){
    set <int> s;
    s.insert(1);
    s.insert(10);
    s.insert(2);
    s.insert(6);
    for(int x : s){
        cout << x << " ";
    }
    cout << endl;
}

//default set is sorted in ascending order

// If you want to sort in descending order, you can use a custom comparator

void printDescendingOrder(){
    set <int, greater<int>> s; // greater<int> is a comparator that sorts in descending order
    s.insert(1);
    s.insert(10);
    s.insert(2);
    s.insert(6);
    for(auto it=s.begin(); it!=s.end(); it++){
        cout << *it << " ";
    }
    cout << endl;
   
}
//Remember begin points to the first element and end points to after the last element
// rbegin points to the last element and rend points to before the first element
// You can also use auto keyword to iterate through the set
//when we insert duplicate elements, they are ignored
  
//find() function is used to find an element in the set
void findElementInSet(){
    set <int> s;
    s.insert(1);
    s.insert(10);
    s.insert(2);
    s.insert(6);
    
    auto it = s.find(10); // returns an iterator to the element if found, otherwise it points to end()
    if(it != s.end()){
        cout << "Element found: " << *it << endl;
    } else {
        cout << "Element not found" << endl;
    }
}

//clear() function is used to remove all elements from the set
int clearSet(){
    set <int> s;
    s.insert(1);
    s.insert(10);
    s.insert(2);
    s.insert(6);
    s.clear(); // removes all elements
    if(s.empty()){
        cout << "Set is empty" << endl;
    }
    return 0;
}

//count() function is used to count the number of elements in the set
//but set always contains unique elements, so it will return either 0 or 1
//so it can be used to check if an element exists in the set
bool countElementInSet(int element) {
    set <int> s;
    s.insert(1);
    s.insert(10);
    s.insert(2);
    s.insert(6);
    return s.count(element) > 0; // returns true if element exists, otherwise false
}

//erase() function is used to remove an element from the set
//set.erase(element) removes the element from the set if it exists
void eraseElementFromSet(int element) {
    set <int> s;
    s.insert(1);
    s.insert(10);
    s.insert(2);
    s.insert(6);
    
    auto it = s.find(element);
    if(it != s.end()) {
        s.erase(it); // removes the element
        cout << "Element " << element << " removed from the set" << endl;
    } else {
        cout << "Element " << element << " not found in the set" << endl;
    }
    for(int x : s) {
        cout << x << " ";
    }
    cout << endl;

    //we can use erase to remove range of elements as well
    //s.erase(s.begin(), s.find(6)); // removes all elements before 6
}

//lower_bound() and upper_bound() functions are used to find the position of an element in the set
//lower_bound() returns an iterator to the first element that is not less than the given element
//upper_bound() returns an iterator to the first element that is greater than the given element
//lower bound and upper bound are members of set class

//lower_bound()
//case 1 if the element is present in the set, it returns the iterator to that element
//case 2 if the element is not present in the set, it returns the the element that is just greater than the given element
//case 3 if the element is greater than all elements in the set, it returns s.end()

//upper_bound()
//case 1 if the element is present in the set, it returns the iterator to the element that is just greater than the given element
//case 2 if the element is not present in the set, it returns the iterator to the element that is just greater than the given element
//case 3 if the element is greater than all elements in the set, it returns s.end()


void findLowerAndUpperBound() {
    set <int> s;
    s.insert(1);
    s.insert(10);
    s.insert(2);
    s.insert(6);

    auto lower = s.lower_bound(6); // first element not less than 6
    auto upper = s.upper_bound(6); // first element greater than 6

    if(lower != s.end()) {
        cout << "Lower bound of 6 is: " << *lower << endl;
    } else {
        cout << "given element is greater than all elements in the set " << endl;
    } 
    
    if(upper != s.end()) {
        cout << "Upper bound of 6 is: " << *upper << endl;
    } else {
        cout << "given element is greater than all elements in the set " << endl;
    }
}

int main() {
    cout << "Elements in ascending order: ";
    printAscendingOrder();
    
    cout << "Elements in descending order: ";
    printDescendingOrder();
    
    findElementInSet();

    clearSet();

    countElementInSet(10) ? cout << "Element 10 exists in the set" << endl : cout << "Element 10 does not exist in the set" << endl;
    
    eraseElementFromSet(10);

    findLowerAndUpperBound();

    return 0;
}

//set is built on top of a balanced binary search tree, so it has O(log n) time complexity for insertion, deletion, and search operations.
//set is implemented as a self-balancing binary search tree, so it maintains the order of elements.
//set does not allow duplicate elements, so it automatically ignores duplicates.

//Time complexity of set operations:

//Insertion: O(log n)
//Deletion: O(log n)
//Search: O(log n)

//begin() and end() : O(1)
//rbegin() and rend() : O(1)
//cbegin() and cend() : O(1)
//crbegin() and crend() : O(1)
//size() : O(1)
//empty() : O(1)

//lower_bound() and upper_bound() : O(log n)
//find() : O(log n)
//count() : O(log n)
//erase() : O(log n)

//clear() : O(n) - because it removes all elements

//erase(it)------> amortized O(1) - because it removes the element pointed by the iterator


//Custom set 

struct Test{
    int x;

    bool operator<(const Test& t) const {
        return (this->x < t.x); // if increasing order is desired
        // return (this->x > t.x); // if decreasing order is desired
    }
};

int main() {
    set<Test> customSet;
    Test t1{1}, t2{2}, t3{3};
    
    customSet.insert(t1);
    customSet.insert(t2);
    customSet.insert(t3);
    
    for(const auto& item : customSet) {
        cout << item.x << " ";
    }
    cout << endl;

    return 0;
}

//application of set:
//1.sorted stream of data
//2. Doubly ended priority queue


