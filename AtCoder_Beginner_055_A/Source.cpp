﻿/*
問題文
すぬけくんはレストランに通うのが好きです。
すぬけくん行きつけのレストランは何を食べても 1 食 800 円で、15 食食べる毎にその場で 200 円もらえます。
すぬけくんは今までで合計 N 食食べました。 今までに払った金額を x 円、レストランからもらった金額を y 円として、x−y を求めなさい。
*/

#include<iostream>

int main() {
	int n,x,y;
	std::cin >> n;

	x = n * 800;
	y = n / 15 * 200;

	std::cout << x - y << std::endl;

	return 0;
}