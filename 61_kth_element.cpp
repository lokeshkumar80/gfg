// // Try to do it again in O(K*Log(N))

// int kthSmallest(int mat[MAX][MAX], int n, int k)
// {
//     vector<int>ans;
//     int result;
//     for(int i=0; i<n; i++){
//         for(int j=0; j<n; j++){
//           ans.push_back(mat[i][j]);
//         }
//     }
//     sort(ans.begin(), ans.end());
//     result = ans[k-1];
//     return result;
// }