#include <iostream>
#include <map>
using namespace std;

//map and set both use red-black tree internally.
//Map is used to store key value pairs but set is used to store only unique keys.
//Every item of a map is a pair.
//items are stored in sorted order based on the key.

void InsertInMap(){
    map<int, int> m;
    m.insert({1, 10}); // inserting key-value pair
    m[2] = 20; // inserting key-value pair using operator[]
    m.insert({3, 30}); // inserting key-value pair
    m.insert({3, 40}); // inserting duplicate key, will not change the value of key 3 ,the new key value is ignored
    for (auto& x : m) {
        cout << x.first << " : " << x.second << endl;
    }  
}

//knowing difference btw insert and operator[]
//if we use [],and let say the item is not present in the map, it will insert the key with a default value of 0.
void InsertInMapWithDifference() {
    map<int, int> m;
    m.insert({1, 10}); // inserting key-value pair
    cout<<m.size()<<endl; // size is 1
    cout<<m[20]<<endl; // inserting key 20 with default value 0, size is now 2
    cout<<m.size()<<endl; // size is 2
}

//at() is used to access the value associated with a key, it throws an exception if the key is not found
//example:
//cout << m.at(1) << endl; // prints 10
//give reference of the value associated with the key only when the key is presnt.

//begin(),end() and clear()
//begin() gives value of first element in the map
//end() gives value of key beyond last element in the map
//clear() removes all elements from the map

//rbegin(), rend() 
//rbegin() gives value of last element in the map
//rend() gives value of key before first element in the map

//find() function is used to find given key in the map
//if key is found, it returns an iterator to the element
//if key is not found, it returns m.end()
//we cannot find value in the map, we can only find key

void FindInMap() {
    map<int,int> m;
    m.insert({1, 10});
    m.insert({2, 20});
    m.insert({3, 30});
    m.insert({4, 40});
    auto it = m.find(3); // find key 3
    if (it != m.end()) {
        cout << "Key found: " << it->first << " with value: " << it->second << endl;
    } else {
        cout << "Key not found" << endl;
    }
}

void FindInMapGreater() {
    map<int, int> m;
    m.insert({1, 10});
    m.insert({2, 20});
    m.insert({4, 40});
    for(auto it=m.find(2); it != m.end(); it++) {
        cout << "Key: " << it->first << ", Value: " << it->second << endl;
    }
}

//count() function is used to count the number of elements with a given key in the map
//since map does not allow duplicate keys, it will return 0 or 1
//if key is present, it returns 1, otherwise it returns 0
bool CountInMap(int key) {
    map<int, int> m;
    m.insert({1, 10});
    m.insert({2, 20});
    m.insert({3, 30});  
    return m.count(key) > 0; // returns true if key exists, otherwise false
}


//lower_bound()
//if the key is present, it returns an iterator to that key
//if the key is not present, it returns an iterator to the first element that is greater
//if the key is greater than all elements, it returns m.end()

//upper_bound()
//if the key is present, it returns an iterator to the first element that is greater than the key
//if the key is not present, it returns an iterator to the first element that is greater than the key
//if the key is greater than all elements, it returns m.end()

void FindLowerAndUpperBound() {
    map<int, int> m;
    m.insert({1, 10});
    m.insert({2, 20});
    m.insert({3, 30});
    m.insert({4, 40});

    auto lower = m.lower_bound(3); // first element not less than 3
    auto upper = m.upper_bound(3); // first element greater than 3

    if (lower != m.end()) {
        cout << "Lower bound for key 3: " << lower->first << " with value: " << lower->second << endl;
    } else {
        cout << "No lower bound found for key 3" << endl;
    }

    if (upper != m.end()) {
        cout << "Upper bound for key 3: " << upper->first << " with value: " << upper->second << endl;
    } else {
        cout << "No upper bound found for key 3" << endl;
    }
}


int main() {
    cout << "Inserting elements in map:" << endl;
    InsertInMap();

    cout << endl << "Inserting elements in map with difference:" << endl;
    InsertInMapWithDifference();

    cout << endl << "Finding elements in map:" << endl;
    FindInMap();

    cout << endl << "Finding elements in map greater than a key:" << endl;
    FindInMapGreater();

    cout << endl << "Counting elements in map:" << endl;
    CountInMap(2) ? cout << "Key 2 exists in the map" << endl : cout << "Key 2 does not exist in the map" << endl;
    CountInMap(5) ? cout << "Key 5 exists in the map" << endl : cout << "Key 5 does not exist in the map" << endl;

    cout << endl << "Finding lower and upper bounds in map:" << endl;
    FindLowerAndUpperBound();

    return 0;
}
