#include "GameCore.h"
#include<iostream>
#include"include/asio.hpp"
using asio::ip::tcp;
using namespace GameCore;

void startmatch() {
	//�������ӣ�����match��true or false��
	asio::io_context io_context;
	tcp::resolver resolver(io_context);
	tcp::resolver::results_type endpoints = resolver.resolve("127.0.0.1", "14");
	tcp::socket socket(io_context);
	asio::connect(socket, endpoints);
	init_Map();
	chessboard_draw();
	bool is_white = false;
	assert(asio::read(socket, asio::buffer(&is_white, sizeof(bool)), asio::transfer_at_least(sizeof(bool))) == sizeof(bool));

}
void getReady() {
	//�����˷���׼������

}
GameCore::Entourage::Entourage() {
	int aggressivity = 1;
	int life = 1;
}
void GameCore::Entourage::attack_Entourage()
{
	std::cout << "ok";
	//life -=aggressivity;
}

GameCore::Charactor::Charactor() :life(100), life_event(1), init_num_Entourage(0), init_num_gold(3) {}
