#include <iostream>
#include <vector>
#include <queue>
#include <string>
#include <algorithm>
#include <array>
using namespace std;

int dirx[8] = { 1, 0, -1, 0, 1, 1, -1, -1 };
int diry[8] = { 0, 1, 0, -1, -1, 1, 1, -1 };


bool canImove(int a, int b, int c) {
	int nx = a + dirx[c];
	int ny = b + diry[c];
	if (nx >= 8 || nx < 0 || ny >= 8 || ny < 0) {
		return false;
	}
	return true;
}


int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	string king, rock;
	cin >> king >> rock;
	int N;
	cin >> N;

	int kingx = king[0] - 'A';
	int kingy = 8 - (king[1] - '0');
	int rockx = rock[0] - 'A';
	int rocky = 8 - (rock[1] - '0');

	//해당 이동방향에 돌 존재 여부 확인
	//있다면 돌이 체스판 밖으로 벗어나는지 확인
	//없다면 킹이 체스판 밖으로 벗어나는지 확인
	//하나라도 true이면 continue

	while (N--) {
		string dir;
		cin >> dir;
		if (dir == "R") {
			int nx = dirx[0];
			int ny = diry[0];
			if (canImove(kingx, kingy, 0)) {
				if (kingx+nx == rockx && kingy+ny == rocky) { //이동방향에 돌이 있는 경우
					if (canImove(rockx, rocky, 0)) {
						rockx += nx;
						rocky += ny;
					}
					else {
						continue;
					}
				}
				kingx += nx;
				kingy += ny;
			}
		}
		else if (dir == "B") {
			int nx = dirx[1];
			int ny = diry[1];
			if (canImove(kingx, kingy, 1)) {
				if (kingx + nx == rockx && kingy + ny == rocky) { //이동방향에 돌이 있는 경우
					if (canImove(rockx, rocky, 1)) {
						rockx += nx;
						rocky += ny;
					}
					else {
						continue;
					}
				}
				kingx += nx;
				kingy += ny;
			}
		}
		else if (dir == "L") {
			int nx = dirx[2];
			int ny = diry[2];
			if (canImove(kingx, kingy, 2)) {
				if (kingx + nx == rockx && kingy + ny == rocky) { //이동방향에 돌이 있는 경우
					if (canImove(rockx, rocky, 2)) {
						rockx += nx;
						rocky += ny;
					}
					else {
						continue;
					}
				}
				kingx += nx;
				kingy += ny;
			}
		}
		else if (dir == "T") {
			int nx = dirx[3];
			int ny = diry[3];
			if (canImove(kingx, kingy, 3)) {
				if ((kingx + nx) == rockx && (kingy + ny) == rocky) { //이동방향에 돌이 있는 경우
					if (canImove(rockx, rocky, 3)) {
						rockx += nx;
						rocky += ny;
					}
					else {
						continue;
					}
				}
				kingx += nx;
				kingy += ny;
			}
		}
		else if (dir == "RT") {
			int nx = dirx[4];
			int ny = diry[4];
			if (canImove(kingx, kingy, 4)) {
				if (kingx + nx == rockx && kingy + ny == rocky) { //이동방향에 돌이 있는 경우
					if (canImove(rockx, rocky, 4)) {
						rockx += nx;
						rocky += ny;
					}
					else {
						continue;
					}
				}
				kingx += nx;
				kingy += ny;
			}
		}
		else if (dir == "RB") {
			int nx = dirx[5];
			int ny = diry[5];
			if (canImove(kingx, kingy, 5)) {
				if (kingx + nx == rockx && kingy + ny == rocky) { //이동방향에 돌이 있는 경우
					if (canImove(rockx, rocky, 5)) {
						rockx += nx;
						rocky += ny;
					}
					else {
						continue;
					}
				}
				kingx += nx;
				kingy += ny;
			}
		}
		else if (dir == "LB") {
			int nx = dirx[6];
			int ny = diry[6];
			if (canImove(kingx, kingy, 6)) {
				if (kingx + nx == rockx && kingy + ny == rocky) { //이동방향에 돌이 있는 경우
					if (canImove(rockx, rocky, 6)) {
						rockx += nx;
						rocky += ny;
					}
					else {
						continue;
					}
				}
				kingx += nx;
				kingy += ny;
			}
		}
		else if (dir == "LT") {
			int nx = dirx[7];
			int ny = diry[7];
			if (canImove(kingx, kingy, 7)) {
				if (kingx + nx == rockx && kingy + ny == rocky) { //이동방향에 돌이 있는 경우
					if (canImove(rockx, rocky, 7)) {
						rockx += nx;
						rocky += ny;
					}
					else {
						continue;
					}
				}
				kingx += nx;
				kingy += ny;
			}
		}


	}
	kingx += 65;
	kingy = 8 - kingy;

	rockx += 65;
	rocky = 8- rocky;

	cout << char(kingx) << kingy << '\n';
	cout << char(rockx) << rocky << '\n';
	

	return 0;
}
