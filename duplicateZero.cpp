void duplicateZeros(vector<int>& arr) {
        int i,count=0,k=0;                 
        for(i=0;i<arr.size();i++){         
            if(arr[i]==0){count++;}
        }
        vector<int> dup(arr.size()+count);  
        
        for(i=0;i<arr.size();i++){
            //if(i==arr.size()-1){dup[k] =arr[i];break;}
            dup[k]=arr[i];              
            k++;                 
            if(arr[i]==0){        
                dup[k] = 0;     
                k=k+1;           
            }
        }
        for(i=0;i<arr.size();i++){
            arr[i] = dup[i];
        }
        
    }
