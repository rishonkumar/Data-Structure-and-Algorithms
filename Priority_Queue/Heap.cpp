#include<bits/stdc++.h>
using namespace std;
 

class heap {

    public:
        int arr[100];
        int size;

        heap() {

            arr[0] = -1;
            size = 0;
        }

        //Max heap
        void insert(int val) {

            size = size+1;
            //add at last index
            int idx = size;
            arr[idx] = val;

            //now add it to right position
            while(idx > 1) {
                //find the parent 
                int parent = idx/2;
                //swap with parent if its smaller
                if(arr[parent] < arr[idx]) {
                    swap(arr[parent],arr[idx]);
                    idx = parent;
                } else {
                    return;
                }
            }
        }

    void deleteFromHeap() {

        if(size == 0) {
            cout << "Nothing to be deleted";
            return;
        }

        //change the root node to last node
        arr[1] = arr[size];
        //remove the last index
        size--;

        //take a root node to its right pos
        int i=1;

        while(i < size) {
            int leftidx = 2*i;
            int rightidx = 2*i+1;

            if(leftidx < size && arr[i] < arr[leftidx]) {
                swap(arr[i],arr[leftidx]);
                i = leftidx;
            }
            else if(rightidx < size && arr[i] < arr[rightidx]) {
                swap(arr[i],arr[rightidx]);
                i = rightidx;
            }
            else {
                return;
            }
        }
    }




    void print() {

        for(int i=1; i<=size; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }


};


int main() {

    heap h;
    h.insert(50);
    h.insert(55);
    h.insert(53);
    h.insert(52);
    h.insert(54);

    h.print();

    h.deleteFromHeap();

    h.print();



}

