class Solution {
public:
    bool is_valid(int num,vector<int> &check){
        for(int i=0;i<check.size();i++){
            if(num==check[i]) return false;
        }
        return true;

    }

    //row-wise
    bool isValidSudoku(vector<vector<char>>& board) {
        vector<int> check;
        for(int i=0;i<9;i++){
            for (int j=0;j<9;j++){
                if(board[i][j]!='.'){
                    if(is_valid(board[i][j],check)){
                        check.push_back(board[i][j]);
                    }else{
                        return false;
                    }
                    
                }

            }
            check.clear();
        }
//col-wise
        for(int i=0;i<9;i++){
            for (int j=0;j<9;j++){
                if(board[j][i]!='.'){
                    if(is_valid(board[j][i],check)){
                        check.push_back(board[j][i]);
                    }else{
                        return false;
                    }
                    
                }

            }
            check.clear();
        }

        //section-wise
        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                if(board[i][j]!='.'){
                    if(is_valid(board[i][j],check)){
                        check.push_back(board[i][j]);

                    }else{
                        return false;
                    }
                }
            }
        }
        
        check.clear();

        for(int i=3;i<6;i++){
            for(int j=3;j<6;j++){
                if(board[i][j]!='.'){
                    if(is_valid(board[i][j],check)){
                        check.push_back(board[i][j]);

                    }else{
                        return false;
                    }
                }
            }
        }
        check.clear();
        for(int i=6;i<9;i++){
            for(int j=6;j<9;j++){
                if(board[i][j]!='.'){
                    if(is_valid(board[i][j],check)){
                        check.push_back(board[i][j]);

                    }else{
                        return false;
                    }
                }
            }
        }
        check.clear();
        for(int i=3;i<6;i++){
            for(int j=0;j<3;j++){
                if(board[i][j]!='.'){
                    if(is_valid(board[i][j],check)){
                        check.push_back(board[i][j]);

                    }else{
                        return false;
                    }
                }
            }
        }
        check.clear();
        for(int i=6;i<9;i++){
            for(int j=0;j<3;j++){
                if(board[i][j]!='.'){
                    if(is_valid(board[i][j],check)){
                        check.push_back(board[i][j]);

                    }else{
                        return false;
                    }
                }
            }
        }
        check.clear();
        for(int i=6;i<9;i++){
            for(int j=3;j<6;j++){
                if(board[i][j]!='.'){
                    if(is_valid(board[i][j],check)){
                        check.push_back(board[i][j]);

                    }else{
                        return false;
                    }
                }
            }
        }
        check.clear();
        for(int i=0;i<3;i++){
            for(int j=3;j<6;j++){
                if(board[i][j]!='.'){
                    if(is_valid(board[i][j],check)){
                        check.push_back(board[i][j]);

                    }else{
                        return false;
                    }
                }
            }
        }
        check.clear();
        for(int i=0;i<3;i++){
            for(int j=6;j<9;j++){
                if(board[i][j]!='.'){
                    if(is_valid(board[i][j],check)){
                        check.push_back(board[i][j]);

                    }else{
                        return false;
                    }
                }
            }
        }
        check.clear();

        for(int i=3;i<6;i++){
            for(int j=6;j<9;j++){
                if(board[i][j]!='.'){
                    if(is_valid(board[i][j],check)){
                        check.push_back(board[i][j]);

                    }else{
                        return false;
                    }
                }
            }
        }

        return true;




    }
};
