#include "Hero.h"


using skill_type = void(*)(GameCore::Charactor);
//���ܣ���Ӽ�Ѫ�ӹ�
static std::vector<Hero::hero> hero_list;
void Hero::skill1(GameCore::Charactor charactor)
{
	std::vector<GameCore::Entourage> temp;
	charactor.set_life(105);
	temp = charactor.get_fight();
	for (auto i : temp) {
		i.set_life(i.get_life() + 1);
		i.set_aggressivity(i.get_aggressivity()+1);
	}
}
//���ü�ʥ��
void Hero::skill2(GameCore::Charactor charactor)
{

}
//���̵�����һ�ſ����Ϊ��һ��ͬ�Ǽ���
void Hero::skill3(GameCore::Charactor charactor)
{
	
}
void Hero::set_hero(hero &h,std::string s,skill_type st)
{
	
	h.name = s;
	h.skill = st;
	Hero::hero_list.push_back(h);
	
}
void Hero::init_hero()
{
	/*Hero::set_hero(*new hero(), "lp", Hero::skill1);*/
	Hero::hero_list.push_back(Hero::hero("lp","���5���������ֵ�����г����������ֵ��1", Hero::skill1));
	Hero::hero_list.push_back(Hero::hero("lc","ѡ��һ��������ӻ��ʥ��", Hero::skill2));
	Hero::hero_list.push_back(Hero::hero("lx","���̵�չʾ�����֮һת��Ϊ��һ��ͬ�Ǽ���ӿ�", Hero::skill3));
	Hero::hero_list.push_back(Hero::hero("liming", "���̵�չʾ�����֮һת��Ϊ��һ��ͬ�Ǽ���ӿ�", Hero::skill3));
}


