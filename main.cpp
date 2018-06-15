/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klee <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/07 14:41:32 by klee              #+#    #+#             */
/*   Updated: 2018/06/07 14:41:33 by klee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <ncurses.h>
// #include <chrono>
// #include <thread>
// #include <string>
// #include <iostream>
// #include <cmath>
// #include <ctime>
// #include <ncurses.h>
// #include <unistd.h>

// #define HEIGHT		40
// #define WIDTH		40


// int main(){

// 	WINDOW *_w;
// 	initscr(); // start of ncurses
// 	// raw(); // full control of keyboard
// 	// noecho(); // non visible input data
// 	// curs_set(FALSE); //Don`t display a cursor
// 	mvwprintw(0, 0, "Hello, world!");
// 	// printw("Hello world!\n"); // output in buffer
// 	// refresh(); // output on screen
// 	// getch(); // any button
// 	_w = newwin(10, 10, 0, 0); // new window
// 	box(_w, 0, 0);	
// 	// keypad(_w, true); // обрабатываем все нажатия
// 	// nodelay(_w, true);
// 	// mvwprintw(_w, 4, 4, "^");
// 	// char c = 0;
	

// // 	// std::this_thread::sleep_for(std::chrono::milliseconds(1));
// // 	endwin(); // end of ncurses
// 	return 0;
// }

#include "Game.hpp"
#include <ncurses.h>
#include "Player.hpp"


int		main(){
	Game SpaceInvaders;

	SpaceInvaders.NewGame();

	return 0;
}
