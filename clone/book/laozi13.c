// laozi13.c

#include <ansi.h>
inherit ITEM;

void create()
{
	set_name("���¾�����ʮ���¡�", ({"jing", "daode jing"}));
	set_weight(200);
	if (clonep())
		set_default_object(__FILE__);
	else
	{
		set("unit", "��");
		set("long",
			CYN "\n"
				"\n\t\t\t��ʮ����\n\n"
				"\t�������������������\n"
				"\t��ν������������Ϊ�£���֮������ʧ֮��������ν����������\n"
				"\t��ν����������������д��ߣ�Ϊ����������������������\n"
				"�λ���\n"
				"\t�ʹ�����Ϊ���£����ɼ����£�������Ϊ���£����������¡�\n"
				"\n" NOR);
		set("value", 500);
		set("material", "paper");
		set("skill", ([
								 "name":"taoism",
						 "exp_required":0,
							"jing_cost":10,
						   "difficulty":15,
							"max_skill":29,
		]));
	}
}