#include <stdlib.h>
#include <unistd.h>

int pawn(int x, int y, int size, char *board[]) {
	if (x - 1 >= 0 && y - 1 >= 0 && board[y - 1][x - 1] == 'K') return 1;
	if (x + 1 < size && y - 1 >= 0 && board[y - 1][x + 1] == 'K') return 1;
	return 0;
}

int bishop(int x, int y, int size, char *board[]) {
	int i;
	
	i = 1;
	while (x - i >= 0 && y - i >= 0) {
		if (board[y - i][x - i] == 'K') return 1;
		i++;
	}
	i = 1;
	while (x + i < size && y - i >= 0) {
		if (board[y - i][x + i] == 'K') return 1;
		i++;
	}
	i = 1;
	while (x - i >= 0 && y + i < size) {
		if (board[y + i][x - i] == 'K') return 1;
		i++;
	}
	i = 1;
	while (x + i < size && y + i < size) {
		if (board[y + i][x + i]) return 1;
		i++;
	}
	return 0;
}

int rook(int x, int y, int size, char *board[]) {
	int i;
	
	i = 1;
	while (y - i >= 0) {
		if (board[y - i][x] == 'K') return 1;
		i++;
	}
	i = 1;
	while (y + i < size) {
		if (board[y + i][x] == 'K') return 1;
		i++;
	}
	i = 1;
	while (x - i >= 0) {
		if (board[y][x - i] == 'K') return 1;
		i++;
	}
	i = 1;
	while (x + i < size) {
		if (board[y][x + i]) return 1;
		i++;
	}
	return 0;
}

int checkmate(int size, char *board[]) {
	int row;
	int column;
	
	row = 0;
	while (row < size) {
		column = 0;
		while (column < size) {
			if (board[column][row] == 'P') {
				if (pawn(row, column, size, board)) return 1;
			} else if (board[column][row] == 'B') {
				if (bishop(row, column, size, board)) return 1;
			} else if (board[column][row] == 'R') {
				if (rook(row, column, size, board)) return 1;
			} else if (board[column][row] == 'Q') {
				if (bishop(row, column, size, board) || rook(row, column, size, board)) return 1;
			}
			column++;
		}
		row++;
	}
	return 0;
}

int main(int argc, char *argv[]) {
	if (argc > 1) {
		if (checkmate(argc - 1, argv + 1)) {
			write(1, "Success", 7);
		} else {
			write(1, "Fail", 4);
		}
	}
	write(1, "\n", 1);
	return 0;
}
