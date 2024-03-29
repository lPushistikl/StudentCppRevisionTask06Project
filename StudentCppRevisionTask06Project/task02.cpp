﻿#include "tasks.h"

/*	Task 02. Chess Pawn [шахматная пешка]
*
*	Шахматная пешка - это самая слабая шахматная фигура,
*	но во время игры может превратиться во все шахматные фигуры кроме Короля.
*	Предположим пешка ходит только вперёд по вертикали и только на одну клетку.
*	Даны две различные клетки шахматной доски, определите,
*	может ли пешка попасть с первой клетки на вторую одним ходом.
*
*	Формат входных данных [input]
*	Функция принимает на вход четыре целочисленных значения (при корректных данных - от 1 до 8 каждое),
*	задающие номер столбца и номер строки сначала для первой клетки (x1, y1),
*	потом для второй клетки (x2, y2), где x - координата по горизонтали,
*	а y - координата по вертикали.
*
*	Формат выходных данных [output]
*	Функция должна возвратить булевское значение - результат решения.
*
*	[ input 1]: 4 4 5 5
*	[output 1]: false
*
*	[ input 2]: 4 4 4 5
*	[output 2]: true
*/

bool task02(int x1, int y1, int x2, int y2) {
	if (x1 <= 0 || y1 <= 0 || x1 > 8 || y1 > 8 || x2 <= 0 || y2 <= 0 || x2 > 8 || y2 > 8)
	{
		return 0;
	}

		if (x1 == x2 && y1 == y2 - 1)
		{
			return true;
		}

	
	return false;
}