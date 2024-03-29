#include <iostream>
using namespace std;

class TickTacToe {
private:
    char matrix[3][3];
    char current_player;
    bool game_end;
    int moves_left;

public:
    TickTacToe() {
        for (int i = 0; i < 3; ++i) {
            for (int j = 0; j < 3; ++j) {
                matrix[i][j] = '-';
            }
        }
        current_player = '0'; 
        game_end = false;
        moves_left = 9;
    }

    void display_Board() {
        cout << "  0 1 2" << endl;
        for (int i = 0; i < 3; ++i) {
            cout << i << " ";
            for (int j = 0; j < 3; ++j) {
                cout << matrix[i][j] << " ";
            }
            cout << endl;
        }
    }

    bool isValidMove(int row, int col) {
        return (row >= 0 && row < 3 && col >= 0 && col < 3 && matrix[row][col] == '-');
    }

    bool check_Win() {
        for (int i = 0; i < 3; ++i) {
            if (matrix[i][0] != '-' && matrix[i][0] == matrix[i][1] && matrix[i][1] == matrix[i][2]) {
                return true;
            }
        }
        
        for (int j = 0; j < 3; ++j) {
            if (matrix[0][j] != '-' && matrix[0][j] == matrix[1][j] && matrix[1][j] == matrix[2][j]) {
                return true;
            }
        }
        
        if (matrix[0][0] != '-' && matrix[0][0] == matrix[1][1] && matrix[1][1] == matrix[2][2]) {
            return true;
        }
        if (matrix[0][2] != '-' && matrix[0][2] == matrix[1][1] && matrix[1][1] == matrix[2][0]) {
            return true;
        }
        return false;
    }

    void switch_Player() {
        current_player = (current_player == '0') ? 'X' : '0';
    }

    void game() {
        while (!game_end && moves_left > 0) {
            display_Board();

            int row, col;
            cout << "Player " << current_player << "'s turn. Enter row and column (0-2): ";
            cin >> row >> col;

            if (isValidMove(row, col)) {
                matrix[row][col] = current_player;
                moves_left--;

                if (check_Win()) {
                    display_Board();
                    cout << "Player " << current_player << " wins!" << endl;
                    game_end = true;
                } else {
                    switch_Player();
                }
            } else {
                cout << "Invalid move! Please try again." << endl;
            }
        }

        if (!game_end) {
            display_Board();
            cout << "It's a draw!" << endl;
        }
    }
};

int main() {
    TickTacToe obj;
    obj.game();
    return 0;
}
