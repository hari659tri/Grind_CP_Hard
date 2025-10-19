class Solution {
public:
    string interpret(string command) {
        unordered_map<string,string>mp;
        mp["G"]="G";
        mp["()"]="O";
        mp["(al)"]="al";
        string str="";
        int n=command.size();

        for(int i=0;i<n;i++){
            if(command[i]=='G'){
                str+='G';
            }
            else if(command[i]=='('&&command[i+1]==')'){
                str+='o';
            }
            else if(command[i]=='('&&command[i+1]=='a'){
                str+="al";
            }
        }
        return str;
    }
};