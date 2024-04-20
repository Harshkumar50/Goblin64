int missingNumber(vector<int>&a, int N) {
    // Write your code here.
    int sum=(N * (N + 1)) / 2;

    int flag=0;
    for(int i=0;i<N-1;i++){
        flag+=a[i];
    }
    int num=sum-flag;
    return num;
}
