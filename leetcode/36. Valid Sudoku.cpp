class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        bool rows[9][9] = {false};
        bool cols[9][9] = {false};
        bool boxes[9][9] = {false};
        // i dont think i have used fixed arrays since many years

        for (int i = 0; i < 9; i++) {
            for (int j = 0; j < 9; j++ ){
                if (board[i][j] != '.') {
                    int num = board[i][j] - '1';
                    int boxIndex = (i/3) * 3 + (j/3);
                    if (rows[i][num] || cols[j][num] || boxes[boxIndex][num]) return false;
                    rows[i][num] = cols[j][num] = boxes[boxIndex][num] = true; 
            
            }
        }
        }
        return true;
            // now that solves the rows 
            // for the columns how do we do this 

    }
         // this is the main loop it goes over every full row
        // this goes into each element now we put each element into a hash
        // set

    };


// yeah this question i have no idea 
// i never really was able to solve an actual sudoku
// it says hash table 
// but how would an hash table be inplemented in this and just how
// oh so u need to use hash sets
// how would we do that
// yeah am able to get something in my head
// dont know how i would implement it in boxes
// but i could do something for rows and coloums 
// lets understand the grid i have a bit of knowledge of 2d and 3d arrays
// from doing brute force file questions
