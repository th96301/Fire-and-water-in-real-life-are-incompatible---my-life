#include <windows.h>
#include <iostream>
using namespace std;
string shuru, temp;
string GAMEMODE = "ready";
int ml = 30, wl = 30, q = 0, wx = 20, mx = 20, days = 1, zz = 30;
string you = "桑桑:", mom = "小雪:";
//	cout <<  "*这是读书*" << endl;
//	Sleep(2500);
//	cout << mom << "那就快来学习!!"<< endl;
//	cout << you  << "我知道了" << endl;
//	cin >> shuru;

int Fight() {
	cout << mom << "!!!" << endl;
	Sleep(1000);
	cout <<  "*你妈打了你，有点疼*" << endl;
	wl = wl - 5;
	mx = mx - 5;
	Sleep(1000);
	cout << "*还击?(重击/轻击/不了)*" << endl;
	cin >> shuru;
	if (shuru == "重击") {
		cout <<  "*你重击了你妈*" << endl;
		ml = ml - 10;
		Sleep(1000);
		cout << mom << "..." << endl;
		mx = mx - 10;
		wx = wx + 10;
	} else if (shuru == "轻击") {
		cout <<  "*你轻击了你妈*" << endl;
		ml = ml - 5;
		Sleep(1000);
		cout << mom << "..." << endl;
		mx = mx - 5;
		wx = wx + 5;
	} else if (shuru == "不了") {
		cout << you  << "......" << endl;
		Sleep(1000);
		cout << mom << "..." << endl;
		wx = wx - 5;
	} else {
		cout << mom << "??????" << endl;
		cout << you  << "......" << endl;
		Sleep(1000);
		cout << mom << "..." << endl;
		wx = wx - 5;
	}
	Sleep(1000);
	return 0;
}

int Wait(int time) {
	for (int i = 0; i < time; i++) {
		Sleep(1000);
		cout << "... ";
	}
	Sleep(2500);
	cout << endl;
	return 0;
}

int Slept() {
	cout << mom << "该睡觉了" << endl;
	Sleep(2500);
	cout << "*要睡觉(存档)吗?(要/不要)*" << endl;
	cin >> shuru;
	if (shuru == "要") {
		cout << mom << "睡吧睡吧......" << endl;;
		Sleep(2500);
		mx++;
		cout <<  "*睡着了......*" << endl;
	} else if (shuru == "不要") {
		cout << mom << "不，你 要 **** 睡 觉" << endl;
		Sleep(2500);
		mx--;
		wx--;
		cout << you  << "我知道了" << endl;
		Sleep(3000);
		cout <<  "*睡着了......*" << endl;
	} else {
		cout << mom << "胡言乱语??快 来 睡 觉!!" << endl;
		Sleep(2500);
		cout <<  "*睡着了......*" << endl;
	}
	Wait(2);
	cout <<  "*保存码:" << ml << " " << wl << " " << q << " " << wx << " " << mx << " " << days + 1 << " " << zz << " " << ml + wl + q + wx + mx + days + zz << "*" << endl;
	cout << "*请妥善保管!*" << endl;
	Wait(5);
	if (ml <= 0) {
		GAMEMODE = "momdie";
	} else if (wl <= 0) {
		GAMEMODE = "medie";
	} else if (mx <= 0) {
		ml = ml - 10;
	} else if (wx <= 0) {
		wl = wl - 10;
	}
	return 0;
}

int Read() {
	cout <<  "*这是读书*" << endl;
	Wait(5);
	if (zz >= 50) {
		cout <<  "*很轻松地，这书读完了*" << endl;
		zz++;
	}
	if (zz < 50) {
		cout <<  "*很困难地，这书读完了*" << endl;
		zz++;
	}
	return 0;
}

int Study() {
	cout << "*要睡觉(存档)吗?(要/不要)*" << endl;
	cin >> shuru;
	if (shuru == "要") {
		cout << mom << "不行，快来学习!!" << endl;;
		Sleep(2500);
		cout <<  "*只能学习了*" << endl;
		Sleep(2500);
		wx--;
		mx--;
		Read();
	} else if (shuru == "不要") {
		cout << mom << "那就快来学习!!" << endl;;
		Sleep(2500);
		cout <<  "*学习了*" << endl;
		Sleep(2500);
		mx++;
		wx++;
		Read();
	} else {
		cout << mom << "胡言乱语??快来学习!!" << endl;;
		Sleep(2500);
		cout <<  "*学习了*" << endl;
		Sleep(2500);
		Read();
	}
	return 0;
}

int Math() {
	cout <<  "*  5n+5=10  这n节是数学*" << endl;
	Wait(5);
	if (zz >= 50) {
		cout <<  "*很轻松地，这n节课完了*" << endl;
		zz++;
	}
	if (zz < 50) {
		cout <<  "*很困难地，这n节课完了*" << endl;
		zz++;
	}
	return 0;
}

int Chinese() {
	cout <<  "*此刻我们步入的是语文的殿堂，这里蕴藏着华夏五千年的文化精髓。*" << endl;
	Wait(5);
	if (zz >= 50) {
		cout <<  "*这堂课在轻松愉快的氛围中圆满结束。*" << endl;
		zz++;
	}
	if (zz < 50) {
		cout <<  "*尽管充满挑战，这堂课终于圆满结束。*" << endl;
		zz++;
	}
	return 0;
}

int English() {
	cout <<  "*This class is English class*" << "(机翻:这门课是英语课)" << endl;
	Wait(5);
	if (zz >= 50) {
		cout <<  "*Easily,this English class is finish*" << "(机翻:很容易，这堂英语课就完成了)" << endl;
		zz++;
	}
	if (zz < 50) {
		cout <<  "*Difficultily,this English class is finish*" << "(机翻:难，这节英语课就结束了)" << endl;
		zz++;
	}
	return 0;
}

int Eat() {
	cout <<  "*你妈送来了饭盒*" << endl;
	Sleep(2500);
	cout << mom << "快来吃饭!!" << endl;
	Sleep(2500);
	cout <<  "*要吃吗?(吃/不吃)*" << endl;
	cin >> shuru;
	if (shuru == "吃") {
		cout << you <<  "来啦!!" << endl;;
		mx ++;
	} else if (shuru == "不吃") {
		cout << mom << "快****来吃饭!!快****来吃饭!!快****来吃饭!!快****来吃饭!!快****来吃饭!!快****来吃饭!!快****来吃饭!!快****来吃饭!!快****来吃饭!!快****来吃饭!!快****来吃饭!!快****来吃饭!!" << endl;;
		Sleep(1000);
		cout << you << "我****来啦!!!!!!!!!!!!!!!!!!!!!!!!!!" << endl;;
		mx--;
		wx--;
	} else {
		cout << mom << "胡言乱语社么，快****来吃饭!!快****来吃饭!!快****来吃饭!!快****来吃饭!!快****来吃饭!!快****来吃饭!!快****来吃饭!!快****来吃饭!!快****来吃饭!!快****来吃饭!!快****来吃饭!!快****来吃饭!!" << endl;;
		Sleep(1000);
		cout << you << "我****来啦!!!!!!!!!!!!!!!!!!!!!!!!!!" << endl;;
		mx--;
	}
	return 0;
}

int Test() {
	cout <<  "*这是考试*" << endl;
	Wait(5);
	if (zz > 50) {
		cout << you  << "好轻松!" << endl;
		Sleep(2500);
		cout << mom << "考的好不?" << endl;
		Sleep(2500);
		cout <<  "*(好/不好)*" << endl;
		cin >> shuru;
		if (shuru == "好") {
			cout << mom << "好!!" << endl;
		} else if (shuru == "不好") {
			cout << mom << "老师说你考的好!!" << endl;
		} else {
			cout << mom << "..." << endl;
		}
		mx = mx + 5;
	}
	if (zz <= 50) {
		cout << you  << "好难!" << endl;
		Sleep(2500);
		cout << mom << "考的好不?" << endl;
		Sleep(2500);
		cout <<  "*(好/不好)*" << endl;
		cin >> shuru;
		if (shuru == "好") {
			cout << mom << "老师说你考的不好!!" << endl;
		} else if (shuru == "不好") {
			cout << mom << "让你多读书!!!" << endl;
		} else {
			cout << mom << "..." << endl;
		}
		mx = mx - 5;
	}
	zz = zz - 20;
	return 0;
}

int Day(int day) {
	if (day == 1) {
		cout << "*剧情:你叫桑桑，你妈叫小雪。你是一个向往和谐美好家庭，不想被强迫的青少年*(等待)" << endl;
		Sleep(1500);
		cout << "*但现实生活你妈催你做事，没有休息，只有学习!!!*" << endl;
		Sleep(2500);
		cout << "*你还要在21天后中考!!!*" << endl;
		Sleep(2500);
		cout << mom  << "桑桑,快起来啦，上学迟到啦!!!" << endl;
		Sleep(2500);
		cout << you  << "我知道了" << endl;
		Sleep(2500);
		cout <<  "*你到了学校*" << endl;
		Sleep(2500);
		Math();
		Sleep(2500);
		Eat();
		Sleep(2500);
		Chinese();
		Sleep(2500);
		cout <<  "*放学了*" << endl;
		Sleep(2500);
		cout <<  "*你到了家*" << endl;
		Sleep(2500);
		Study();
		Sleep(2500);
		Slept();
	}
	if (day == 2) {
		cout << mom  << "桑桑,快起来啦，上学又迟到啦!!!你昨晚睡得太晚了!!!" << endl;
		Sleep(2500);
		cout << you  << "..." << endl;
		Sleep(2500);
		cout <<  "*你到了学校*" << endl;
		Sleep(2500);
		English();
		Sleep(2500);
		Eat();
		Sleep(2500);
		Chinese();
		Sleep(2500);
		cout <<  "*放学了*" << endl;
		Sleep(2500);
		cout <<  "*你到了家*" << endl;
		Sleep(2500);
		Study();
		Sleep(2500);
		Slept();
	}
	if (day == 3) {
		cout << mom  << "桑桑,快起来啦，上学又迟到啦!!!你昨晚睡得太晚了!!!" << endl;
		Sleep(2500);
		cout << you  << "都怪你!!" << endl;
		Sleep(2500);
		Fight();
		Sleep(2500);
		cout <<  "*你到了学校*" << endl;
		Sleep(2500);
		cout << "*你迟到了*" << endl;
		Sleep(2500);
		Eat();
		Sleep(2500);
		Chinese();
		Sleep(2500);
		cout <<  "*放学了*" << endl;
		Sleep(2500);
		cout <<  "*你到了家*" << endl;
		Sleep(2500);
		Study();
		Sleep(2500);
		Slept();
	}
	if (day == 4) {
		cout << mom  << "桑桑,起来啦..." << endl;
		Sleep(2500);
		cout << you  << "10:24!!!!!!!" << endl;
		Sleep(2500);
		Fight();
		Sleep(2500);
		cout <<  "*你到了学校*" << endl;
		Sleep(2500);
		cout << "*你迟到了*" << endl;
		Sleep(2500);
		Eat();
		Sleep(2500);
		cout <<  "*適兯湜焱暒妏(这节是火星文)*" << endl;
		Wait(5);
		if (zz >= 50) {
			cout <<  "*佷輕菘哋，適兯錁唍孒(很轻松地，这节课完了)*" << endl;
			zz++;
		}
		if (zz < 50) {
			cout <<  "*佷涃難哋，適兯錁唍孒(很困难地，这节课完了)*" << endl;
			zz++;
		}
		Sleep(2500);
		cout <<  "*放学了*" << endl;
		Sleep(2500);
		cout <<  "*你到了家*" << endl;
		Sleep(2500);
		Study();
		Sleep(2500);
		Slept();
	}
	if (day == 5) {
		cout << mom  << "桑桑,快起来啦，上学迟到啦!!!" << endl;
		Sleep(2500);
		cout << you  << "我知道了" << endl;
		Sleep(2500);
		cout <<  "*你到了学校*" << endl;
		Sleep(2500);
		Test();
		Sleep(2500);
		Eat();
		Sleep(2500);
		cout <<  "*zhè jié shì pīn yīn(这节是拼音)*" << endl;
		Wait(5);
		if (zz >= 50) {
			cout <<  "*hěn qīng sōng dì, zhè jié kè wán le(很轻松地，这节课完了)*" << endl;
			zz++;
		}
		if (zz < 50) {
			cout <<  "*hěn kùn nán dì, zhè jié kè wán le(很困难地，这节课完了)*" << endl;
			zz++;
		}
		Sleep(2500);
		cout <<  "*放学了*" << endl;
		Sleep(2500);
		cout <<  "*你到了家*" << endl;
		Sleep(2500);
		Study();
		Sleep(2500);
		Slept();
	}
	if (day == 6) {
		cout << mom  << "桑桑,快起来啦，上学迟到啦!!!" << endl;
		Sleep(2500);
		cout << you  << "今天周末!!!" << endl;
		Sleep(2500);
		cout << mom  << "那就读书" << endl;
		Sleep(2500);
		Read();
		Sleep(2500);
		Eat();
		Sleep(2500);
		cout << mom << "还读吗?" << endl;
		cout << "*(读/不读)*" << endl;
		cin >> shuru;
		if (shuru == "读") {
			cout << mom << "好" << endl;
			mx = mx + 5;
		}
		if (shuru == "不读") {
			cout << mom << "你考得那么差，必须读!!" << endl;
			mx = mx - 5;
			wx = wx - 5;
		}
		Read();
		Sleep(2500);
		cout <<  "*晚上了*" << endl;
		Sleep(2500);
		Slept();
	}
	if (day == 7) {
		cout << mom  << "桑桑,快起来啦，读书!!!" << endl;
		Sleep(2500);
		cout << you  << "好!!!" << endl;
		Sleep(2500);
		Read();
		Sleep(2500);
		Eat();
		Sleep(2500);
		cout << mom << "还读吗?" << endl;
		cout << "*(读/不读)*" << endl;
		cin >> shuru;
		if (shuru == "读") {
			cout << mom << "好" << endl;
			mx = mx + 5;
		}
		if (shuru == "不读") {
			cout << mom << "你考得那么差，必须读!!" << endl;
			mx = mx - 5;
			wx = wx - 5;
		}
		Read();
		Sleep(2500);
		cout <<  "*晚上了*" << endl;
		Sleep(2500);
		Slept();
	}
	if (day == 8) {
		cout << mom  << "桑桑,快起来啦，这周我陪你上学!!" << endl;
		Sleep(2500);
		cout << you  << "我知道了" << endl;
		Sleep(2500);
		cout <<  "*你到了学校*" << endl;
		Sleep(2500);
		cout <<  "*このセクションは日本語です(本节为日语)*" << endl;
		Wait(5);
		if (zz >= 50) {
			cout <<  "*あっさりとレッスンは終わりました(课程转眼就结束了。)*" << endl;
			zz++;
		}
		if (zz < 50) {
			cout <<  "*大変な苦労をして、レッスンは終わりました(经过一番努力，课程结束了)*" << endl;
			zz++;
		}
		Sleep(2500);
		cout << mom  << "桑桑,难么?" << endl;
		Sleep(2500);
		cout << you  << "..." << endl;
		Sleep(2500);
		Eat();
		Sleep(2500);
		cout << mom  << "桑桑,好吃么?" << endl;
		Sleep(2500);
		cout << you  << "..." << endl;
		Sleep(2500);
		cout <<  "*这节是体育(跑)*" << endl;
		Wait(5);
		if (zz >= 50) {
			cout <<  "*很轻松地，这节课完了*" << endl;
			zz++;
		}
		if (zz < 50) {
			cout <<  "*很(累)困难(累)地，这(累)节(累)课(累)完了*" << endl;
			zz++;
		}
		Sleep(2500);
		cout << mom  << "桑桑,难么?" << endl;
		Sleep(2500);
		cout << you  << "..." << endl;
		Sleep(2500);
		cout <<  "*放学了*" << endl;
		Sleep(2500);
		cout <<  "*你到了家*" << endl;
		Sleep(2500);
		Study();
		Sleep(2500);
		Slept();
	}
	if (day == 9) {
		cout << mom  << "桑桑,快起来啦，上学又迟到啦!!!我再陪你上一次" << endl;
		Sleep(2500);
		cout << you  << "..." << endl;
		Sleep(2500);
		cout <<  "*你到了学校*" << endl;
		Sleep(2500);
		cout <<  "*Этот раздел на русском языке(本节为俄语)*" << endl;
		Wait(5);
		if (zz >= 50) {
			cout <<  "*Урок легко закончился(这节课很容易就结束了)*" << endl;
			zz++;
		}
		if (zz < 50) {
			cout <<  "*С большим трудом урок был окончен(好不容易，这节课就结束了)*" << endl;
			zz++;
		}
		Sleep(2500);
		cout << mom  << "桑桑,难么?" << endl;
		Sleep(2500);
		cout << you  << "..." << endl;
		Sleep(2500);
		Eat();
		Sleep(2500);
		cout << mom  << "桑桑,好吃么?" << endl;
		Sleep(2500);
		cout << you  << "..." << endl;
		Sleep(2500);
		cout <<  "cout << “ *这节是信息*”<<endl;" << endl;
		Sleep(1000);
		cout <<  "小游戏.exe##-口X" << endl;
		Sleep(200);
		cout <<  "#    @   $     #" << endl;
		Sleep(200);
		cout <<  "#   @@@  $     #" << endl;
		Sleep(200);
		cout <<  "#  @@@   $     #" << endl;
		Sleep(200);
		cout <<  "#        $    &#" << endl;
		Sleep(200);
		cout <<  "#        $  &&&#" << endl;
		Sleep(200);
		cout <<  "#&& && & $&&&&&#" << endl;
		Sleep(200);
		cout <<  "#&&&&&&&&&&&&&&#" << endl;
		Sleep(200);
		cout <<  "################" << endl;
		Wait(5);
		if (zz >= 50) {
			cout <<  "cout << “ *很轻松地，这节课完了*”<<endl;" << endl;
			zz++;
		}
		if (zz < 50) {
			cout <<  "cout << “ *很困难地，这节课完了*”<<endl;" << endl;
			zz++;
		}
		Sleep(2500);
		cout << mom  << "桑桑,难么?" << endl;
		Sleep(2500);
		cout << you  << "..." << endl;
		Sleep(2500);
		cout <<  "*放学了*" << endl;
		Sleep(2500);
		cout <<  "*你到了家*" << endl;
		Sleep(2500);
		Study();
		Sleep(2500);
		Slept();
	}
	if (day == 10) {
		cout << mom  << "桑桑,快起来啦，上学又迟到啦!!!你昨晚睡得太晚了!!!" << endl;
		Sleep(2500);
		cout << you  << "都怪你!!" << endl;
		Sleep(2500);
		Fight();
		Sleep(2500);
		cout <<  "*你到了学校*" << endl;
		Sleep(2500);
		cout << "*你迟到了*" << endl;
		Sleep(2500);
		Eat();
		Sleep(2500);
		cout << mom  << "桑桑,好吃么?" << endl;
		Sleep(2500);
		cout << you  << "..." << endl;
		Sleep(2500);
		cout <<  "*Ce verset est en francais(这节经文是法文的)*" << endl;
		Wait(5);
		if (zz >= 50) {
			cout <<  "*Facilement, la le?on était terminée(不难，课程就结束了)*" << endl;
			zz++;
		}
		if (zz < 50) {
			cout <<  "*Avec beaucoup de difficulté, la le?on était terminée(好不容易，这节课就结束了)*" << endl;
			zz++;
		}
		Sleep(2500);
		cout << mom  << "桑桑,难么?" << endl;
		Sleep(2500);
		cout << you  << "烦死了!!!!!!!" << endl;
		Sleep(2500);
		Fight();
		Sleep(2500);
		cout <<  "*放学了*" << endl;
		Sleep(2500);
		cout <<  "*你到了家*" << endl;
		Sleep(2500);
		Study();
		Sleep(2500);
		Slept();
	}
	if (day == 11) {
		cout << mom  << "桑桑,起来啦..." << endl;
		Sleep(2500);
		cout << you  << "11:00!!!!!!!" << endl;
		Sleep(2500);
		Fight();
		Sleep(2500);
		cout <<  "*你到了学校*" << endl;
		Sleep(2500);
		cout << "*你迟到了*" << endl;
		Sleep(2500);
		Eat();
		Sleep(2500);
		cout <<  "*这节是画画*" << endl;
		
		Wait(5);
		cout <<  "################" << endl;
		Sleep(200);
		cout <<  "#   @    @     #" << endl;
		Sleep(200);
		cout <<  "#   @@  @@  _  #" << endl;
		Sleep(200);
		cout <<  "#   @@@@@@   _ #" << endl;
		Sleep(200);
		cout <<  "# - @    @     #" << endl;
		Sleep(200);
		cout <<  "#   @    @  -  #" << endl;
		Sleep(200);
		cout <<  "#   @ _  @   - #" << endl;
		Sleep(200);
		cout <<  "#   @@@@@@     #" << endl;
		Sleep(200);
		cout <<  "################" << endl;
		Sleep(2500);
		cout <<  "好丑......" << endl;
		Sleep(1000);
		if (zz >= 50) {
			cout <<  "*很轻松地，这节课完了*" << endl;
			zz++;
		}
		if (zz < 50) {
			cout <<  "*很困难地，这节课完了*" << endl;
			zz++;
		}
		Sleep(2500);
		cout << mom  << "桑桑,难么?" << endl;
		Sleep(2500);
		cout << you  << "我****" << endl;
		Sleep(2500);
		Fight();
		Sleep(2500);
		cout <<  "*放学了*" << endl;
		Sleep(2500);
		cout <<  "*你到了家*" << endl;
		Sleep(2500);
		Study();
		Sleep(2500);
		Slept();
	}
	if (day == 12) {
		cout << mom  << "桑桑,快起来啦，上学迟到啦!!!" << endl;
		Sleep(2500);
		cout << you  << "我知道了" << endl;
		Sleep(2500);
		cout <<  "*你到了学校*" << endl;
		Sleep(2500);
		Test();
		Sleep(2500);
		Eat();
		Sleep(2500);
		Chinese();
		Sleep(2500);
		cout <<  "*放学了*" << endl;
		Sleep(2500);
		cout <<  "*你到了家*" << endl;
		Sleep(2500);
		Study();
		Sleep(2500);
		Slept();
	}
	if (day == 13) {
		cout << mom  << "桑桑,快起来啦!!!今天周末!!!读书!!!" << endl;
		Sleep(2500);
		Read();
		Sleep(2500);
		Eat();
		Sleep(2500);
		cout << mom << "还读吗?" << endl;
		cout << "*(读/不读)*" << endl;
		cin >> shuru;
		if (shuru == "读") {
			cout << mom << "好" << endl;
			mx = mx + 5;
		}
		if (shuru == "不读") {
			cout << mom << "你考得那么差，必须读!!" << endl;
			mx = mx - 5;
			wx = wx - 5;
		}
		Read();
		Sleep(2500);
		cout <<  "*晚上了*" << endl;
		Sleep(2500);
		Slept();
	}
	if (day == 14) {
		cout << mom  << "桑桑,快起来啦，读书!!!" << endl;
		Sleep(2500);
		cout << you  << "我****，你****" << endl;
		Sleep(2500);
		Fight();
		Sleep(2500);
		Eat();
		Sleep(2500);
		cout << mom << "还读吗?" << endl;
		cout << "*(读/不读)*" << endl;
		cin >> shuru;
		if (shuru == "读") {
			cout << mom << "好" << endl;
			mx = mx + 5;
		}
		if (shuru == "不读") {
			cout << mom << "你考得那么差，必须读!!" << endl;
			mx = mx - 5;
			wx = wx - 5;
		}
		Read();
		Sleep(2500);
		cout <<  "*晚上了*" << endl;
		Sleep(2500);
		Slept();
	}
	if (day == 15) {
		cout << mom  << "桑桑,快起来啦，这周我不陪你上学!!" << endl;
		Sleep(2500);
		cout << you  << "我知道了" << endl;
		Sleep(2500);
		cout <<  "*你到了学校*" << endl;
		Sleep(2500);
		Math();
		Sleep(2500);
		Eat();
		Sleep(2500);
		Chinese();
		Sleep(2500);
		cout <<  "*放学了*" << endl;
		Sleep(2500);
		cout <<  "*你到了家*" << endl;
		Sleep(2500);
		Study();
		Sleep(2500);
		Slept();
	}
	if (day == 16) {
		cout << mom  << "桑桑,快起来啦，上学又迟到啦!!!" << endl;
		Sleep(2500);
		cout << you  << "..." << endl;
		Sleep(2500);
		cout <<  "*你到了学校*" << endl;
		Sleep(2500);
		English();
		Sleep(2500);
		Eat();
		Sleep(2500);
		Chinese();
		Sleep(2500);
		cout <<  "*放学了*" << endl;
		Sleep(2500);
		cout <<  "*你到了家*" << endl;
		Sleep(2500);
		Study();
		Sleep(2500);
		Slept();
	}
	if (day == 17) {
		cout << mom  << "桑桑,快起来啦，上学又迟到啦!!!你昨晚睡得太晚了!!!" << endl;
		Sleep(2500);
		cout << you  << "都怪你!!" << endl;
		Sleep(2500);
		Fight();
		Sleep(2500);
		cout <<  "*你到了学校*" << endl;
		Sleep(2500);
		cout << "*你迟到了*" << endl;
		Sleep(2500);
		Eat();
		Sleep(2500);
		Chinese();
		Sleep(2500);
		cout << mom  << "...桑桑,难么?..." << endl;
		Sleep(2500);
		cout << you  << "你****则么又来啦!!!!!!!!!!" << endl;
		Sleep(2500);
		Fight();
		Sleep(2500);
		cout <<  "*放学了*" << endl;
		Sleep(2500);
		cout <<  "*你到了家*" << endl;
		Sleep(2500);
		Study();
		Sleep(2500);
		Slept();
	}
	if (day == 18) {
		cout << mom  << "桑桑,起来啦..." << endl;
		Sleep(2500);
		cout << you  << "..." << endl;
		Sleep(2500);
		Fight();
		Sleep(2500);
		cout <<  "*你到了学校*" << endl;
		Sleep(2500);
		cout << "*你迟到了*" << endl;
		Sleep(2500);
		Eat();
		Sleep(2500);
		English();
		Sleep(2500);
		cout <<  "*放学了*" << endl;
		Sleep(2500);
		cout <<  "*你到了家*" << endl;
		Sleep(2500);
		Study();
		Sleep(2500);
		Slept();
	}
	if (day == 19) {
		cout << mom  << "桑桑,快起来啦，上学迟到啦!!!" << endl;
		Sleep(2500);
		cout << you  << "我知道了" << endl;
		Sleep(2500);
		cout <<  "*你到了学校*" << endl;
		Sleep(2500);
		Test();
		Sleep(2500);
		Eat();
		Sleep(2500);
		Chinese();
		Sleep(2500);
		cout <<  "*放学了*" << endl;
		Sleep(2500);
		cout <<  "*你到了家*" << endl;
		Sleep(2500);
		Study();
		Sleep(2500);
		Slept();
	}
	if (day == 20) {
		cout << mom  << "桑桑,快起来啦!!!今天中考" << endl;
		Sleep(2500);
		Test();
		Sleep(2500);
		Eat();
		Sleep(2500);
		Test();
		Sleep(2500);
		cout <<  "*晚上了*" << endl;
		Sleep(2500);
		Slept();
	}
	if (day == 21) {
		cout << mom  << "桑桑,快起来啦!!!今天中考" << endl;
		Test();
		Sleep(2500);
		Eat();
		Sleep(2500);
		Test();
		Sleep(2500);
		cout <<  "*晚上了*" << endl;
		Sleep(2500);
		Slept();
	}
	if (day > 21) {
		GAMEMODE = "win";
	}
	if (day <= 0) {
		cout << "*这...这__不____可能！你找__到____了不__存______在的天____数！__！！*" << endl;
		GAMEMODE = "win";
	}
	return 0;
}
int main() {
	cout << "欢迎来到“ 现实生活中的水火不容-我的生活”" << endl << "据真实事件改编!" << "Made By GHY And ZYX" << endl;
	while (GAMEMODE == "ready") {
		cout << "新的游戏/读档" << endl;
		cin >> shuru;
		if (shuru == "新的游戏") {
			GAMEMODE = "star";
		} else if (shuru == "读档") {
			GAMEMODE = "dudang";
		} else if (shuru == "debug") {
			GAMEMODE = "debug";
		} else {
			cout << "请输入正确词组(如:新的游戏)" << endl;
		}
	}
	if (GAMEMODE == "dudang") {
		int jym = 0;
		cout << "请输入保存码" << endl;
		while (GAMEMODE == "dudang") {
			cin >> ml >> wl >> q >> wx >> mx >> days >> zz >> jym;
			if (jym == ml + wl + q + wx + mx + days + zz || jym == 114514) {
				GAMEMODE = "star";
			} else {
				cout << "请输入正确保存码(可能各版本间会不兼容)" << endl;
			}
		}
	}
	if (GAMEMODE == "debug") {
		while (GAMEMODE == "debug") {
			cout  << "天数" ;
			cin >> days ;
			GAMEMODE = "star";
		}
	}
	if (GAMEMODE == "star") {
		for (int i = days; i <= 21; i++) {
			if (GAMEMODE == "star") {
				cout <<  "*第" << i << "天,还有" << 21 - i << "天" << endl;
				Day(i);
			}
		}
	}
	if  (GAMEMODE == "momdie") {
		cout << "*小雪噶了?可能是心情不好，自噶;也可能是被打噶了。人世只有一次。但这是游戏，能去读档。*" << endl;
		cout << "*GAME OVER*" << endl;
		cout << "*游戏结束*" << endl;
		cin >> temp;
	}
	if (GAMEMODE == "medie") {
		cout << "*桑桑噶了?可能是心情不好，自噶;也可能是被打噶了。人世只有一次。但这是游戏，能去读档。*" << endl;
		cout << "*GAME OVER*" << endl;
		cout << "*游戏结束*" << endl;
		cin >> temp;
	}
	if (GAMEMODE == "win") {
		cout << "*你赢了*" << endl;
		Sleep(2500);
		cout << "作者(GHY):抱歉，我只做到了这里，感谢你的游玩!我会更新的!(bilibili:   th_96301)" << endl;
		Sleep(2500);
		cout << "剧情(ZYX)(桑桑):这是我的真实生活，感谢你的游玩!（我要被烦噶了）" << endl;
		Sleep(2500);
		cout << mom << "什么???? !!!!!" << endl;
		Sleep(2500);
		cout << "作者(GHY):快逃!" << endl;
		Sleep(2500);
		cout << mom << "我****，你****，****，****!" << endl;
		cin >> temp;
	}
	return 0;
}
