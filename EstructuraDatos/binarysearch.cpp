void busquedaBinaria(){
    vector<int> array;
    int n,target;
    int res=-1;
    int l=-1,r=n;
    while(r-l>1){
        int m=l+(r-l)/2;
        if(array[m]==target){
            res=m;
            break;
        }
        if(array[m]>target){
            r=m;
        }
        else{
            l=m;
        }
    }
}
