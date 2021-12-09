#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

int main() {

    int n,m;
    cout << "Enter the size of matrix :";
    cin >> n >> m;
    vector<vector<int>> arr(n,vector<int>(m,0));
    for(int i=0;i<n;i++){
        for (int j = 0; j < m; j++){
            cin >> arr[i][j];
        }
    }
    vector<vector<double>> matrix(n,vector<double>(n,0));
    for(int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
           
            if(i == j)
                continue;
            
            if(i > j){
                matrix[i][j] = matrix[j][i];
                continue;
            }

            double sum = 0;
            for (int k = 0; k < m; k++)
                sum += pow(arr[i][k] - arr[j][k], 2);
            
            matrix[i][j] = sqrt(sum);
        }
    }
    cout << "Through Euclidean distance" << endl;

    for (int i = 0; i < n; i++){

        for (int j = 0; j < n; j++){
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    vector<vector<double>> matrix2(n,vector<double>(n,0));
    for(int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
           
            if(i == j)
                continue;
            
            if(i > j){
                matrix2[i][j] = matrix2[j][i];
                continue;
            }

            double sum = 0;
            for (int k = 0; k < m; k++)
                sum += abs(arr[i][k] - arr[j][k]);
            
            matrix2[i][j] = sum;
        }
    }
    cout << "Through Euclidean distance" << endl;

    for (int i = 0; i < n; i++){

        for (int j = 0; j < n; j++){
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    cout << "Through Manhattan distance" << endl;

    for (int i = 0; i < n; i++){

        for (int j = 0; j < n; j++){
            cout << matrix2[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}