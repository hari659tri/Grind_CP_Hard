class Solution {
public:
    string capitalizeTitle(string title) {

        string ans,temp;
        int n=title.size();

        
        for(int i=0;i<n;i++){

            if(title[i]==' '){
            
                string ss;
                 if(temp.size()<=2){
                  for(int i=0;i<temp.size();i++) ss+=tolower(temp[i]);
                 }
                 else{
                    ss+=toupper(temp[0]);
                    for(int i=1;i<temp.size();i++){
                        ss+=tolower(temp[i]);
                    }
                 }
                ans+=ss;
                temp="";
                ans+=' ';

            }
            else{
                temp+=title[i];
            }
        }
        
        
        if(temp.size()<=2){
            for(int i=0;i<temp.size();i++){
                ans+=tolower(temp[i]);
            }
        }
        else{
            ans+=toupper(temp[0]);
            for(int i=1;i<temp.size();i++) ans+=tolower(temp[i]);
        }

        
  
      return ans;

    }
};