#include <iostream>
using namespace std;
void print_arr(int arr[])
{
    for (int x: arr)
    {
        cout << x << " ";
    }
}
bool ispresent(int el, int arr[],int len){
    for(int i = 0; i < len; i++){
        if(arr[i] == el){
            return true;
        }
    }
    return false;
}
int main(){
    int a[] = {1,2,3,4,5,1,2,1,2,5};
    int len = 10;
    int unique[10], freq[10], ind = 0, count = 0;
    for(int i = 0; i < len; i++){
        count = 0;
        if(ispresent(a[i],unique,10) == false){
            //loop counting freq
            for(int j = 0; j < len; j++){
                if(a[i] == a[j]){
                    count++;
                }
            }
            freq[ind] = count;
            unique[ind] = a[i];
            ind++;
 
        }

    }
    cout << "1 = > ";
    print_arr(unique);
    cout << "\n 2 = > ";
    print_arr(freq);
    // for(int u = 0; u < ind; u++){
    //     cout<<unique[ind]<<" "<<freq[ind]<<endl;
    // }
}