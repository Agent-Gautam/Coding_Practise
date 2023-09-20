#include <iostream>
using namespace std;

void print(int arr[][2],int len){
    for(int i = 0; i < len; i++){
        for(int j = 0; j < 2; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<"\n";
    }
}
int main()
{
    int n = 6, arr[] = {2, 8, 5, 5, 6, 4};
    cout << "enter sum" << endl;
    int sum;
    cin >> sum;
    int pairs[30][2];
    int ind = 0;
    for (int i = 0; i < n; i++)
    {
        int fakesum = sum;
        pairs[ind][0] = arr[i];
        if (arr[i] < sum)
        {
            fakesum -= arr[i];
            for (int j = 0; j < n; j++)
            {
                if (i != j && arr[j] < sum)
                {
                    if (fakesum - arr[j] == 0)
                    {
                        pairs[ind][1] = arr[j];
                        ind++;
                    }
                }
            }
        }
    }
    print(pairs, ind);
}