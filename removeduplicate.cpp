int removeDuplicates(vector<int> &arr, int n) {
	// Write your code here.
	int i=0;
	int j=1;
	for(;j<n;j++){
		if(arr[i]!=arr[j]){
			arr[i+1]=arr[j];
			i++;
		}
	}
	return i+1;
}
