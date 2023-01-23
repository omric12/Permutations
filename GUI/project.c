#define CV_IGNORE_DEBUG_BUILD_GUARD
#include <opencv2/imgcodecs/imgcodecs_c.h>
#include <opencv2\core\core_c.h>
#include <opencv2\highgui\highgui_c.h>
#include <string.h>
#include <stdio.h>

#define PATH_SIZE 20
#define Enter_key 13
#define Down_key 2621440
#define Left_key 2424832
#define Right_key 2555904
#define Up_key 2490368
#define ESC 27

#define ALGORITHEM_NUM 3
#define ALGORITHEM_OPTIONS 3

typedef struct Picture {

	char path[PATH_SIZE];
	int time;// 0 uis the standart
	int key;// there are slices without an option to stop them while there are running so they have no key value from the define above
	int left_on;
	int right_on;
	int move_by;// for the enter. each time we press it we jump a different num of slides 
} Picture;

void op();

int main()
{
	cvNamedWindow("Algorithems", CV_WINDOW_AUTOSIZE);
	op();
}

void load_op_page(Picture home_page[])
{
	strcpy(home_page[0].path, "h1/p1.png");
	strcpy(home_page[1].path, "h1/p2.png");
	strcpy(home_page[2].path, "h1/p3.png");
}

void load_p1h(Picture p1h[])
{
	strcpy(p1h[0].path, "p1h/p1.png");
	strcpy(p1h[1].path, "p1h/p2.png");
	strcpy(p1h[2].path, "p1h/p3.png");
}

void load_p2h(Picture p2h[])
{
	strcpy(p2h[0].path, "p2h/p1.png");
	strcpy(p2h[1].path, "p2h/p2.png");
	strcpy(p2h[2].path, "p2h/p3.png");
}

void load_p3h(Picture p3h[])
{
	strcpy(p3h[0].path, "p3h/p1.png");
	strcpy(p3h[1].path, "p3h/p2.png");
	strcpy(p3h[2].path, "p3h/p3.png");
}

void load_p1o1(Picture p1o1[])
{
	strcpy(p1o1[0].path, "p1o1/p1.png");
	p1o1[0].key = Enter_key;
	p1o1[0].move_by = 1;
	strcpy(p1o1[1].path, "p1o1/p2.PNG");
	p1o1[1].time = 50;
	strcpy(p1o1[2].path, "p1o1/p3.PNG");
	p1o1[2].time = 50;
	strcpy(p1o1[3].path, "p1o1/p2.PNG");
	p1o1[3].time = 50;
	strcpy(p1o1[4].path, "p1o1/p3.PNG");
	p1o1[4].time = 50;
	strcpy(p1o1[5].path, "p1o1/p2.PNG");
	p1o1[5].time = 50;
	strcpy(p1o1[6].path, "p1o1/p4.PNG");
	p1o1[6].key = Enter_key;
	p1o1[6].move_by = 3;
	p1o1[6].left_on = 1;
	strcpy(p1o1[7].path, "p1o1/p5.PNG");
	p1o1[7].key = Enter_key;
	p1o1[7].move_by = -7;
	p1o1[7].left_on = 1;
	p1o1[7].right_on = -1;
	strcpy(p1o1[8].path, "p1o1/p6.PNG");
	p1o1[8].key = Enter_key;
	p1o1[8].right_on = -1;
	strcpy(p1o1[9].path, "p1o1/p7.PNG");
	p1o1[9].time = 50;
	strcpy(p1o1[10].path, "p1o1/p8.PNG");
	p1o1[10].time = 50;
	strcpy(p1o1[11].path, "p1o1/p7.PNG");
	p1o1[11].time = 50;
	strcpy(p1o1[12].path, "p1o1/p8.PNG");
	p1o1[12].time = 50;
	strcpy(p1o1[13].path, "p1o1/p7.PNG");
	p1o1[13].time = 50;
	strcpy(p1o1[14].path, "p1o1/p9.PNG");
	p1o1[14].key = Enter_key;
	p1o1[14].move_by = 3;
	p1o1[14].left_on = 1;
	strcpy(p1o1[15].path, "p1o1/p10.PNG");
	p1o1[15].key = Enter_key;
	p1o1[15].move_by = -9;
	p1o1[15].left_on = 1;
	p1o1[15].right_on = -1;
	strcpy(p1o1[16].path, "p1o1/p11.PNG");
	p1o1[16].key = Enter_key;
	p1o1[16].right_on = -1;
	strcpy(p1o1[17].path, "p1o1/p12.PNG");
	p1o1[17].time = 50;
	strcpy(p1o1[18].path, "p1o1/p13.PNG");
	p1o1[18].time = 50;
	strcpy(p1o1[19].path, "p1o1/p14.PNG");
	p1o1[19].key = Enter_key;
	p1o1[19].move_by = 3;
	p1o1[19].left_on = 1;
	strcpy(p1o1[20].path, "p1o1/p15.PNG");
	p1o1[20].key = Enter_key;
	p1o1[20].move_by = -6;
	p1o1[20].left_on = 1;
	p1o1[20].right_on = -1;
	strcpy(p1o1[21].path, "p1o1/p16.PNG");
	p1o1[21].key = Enter_key;
	p1o1[21].right_on = -1;
	strcpy(p1o1[22].path, "p1o1/p17.PNG");
	p1o1[22].key = Enter_key;
	p1o1[22].move_by = 3;
	p1o1[22].left_on = 1;
	strcpy(p1o1[23].path, "p1o1/p18.PNG");
	p1o1[23].key = Enter_key;
	p1o1[23].move_by = -4;
	p1o1[23].left_on = 1;
	p1o1[23].right_on = -1;
	strcpy(p1o1[24].path, "p1o1/p19.PNG");
	p1o1[24].key = Enter_key;
	p1o1[24].right_on = -1;
	strcpy(p1o1[25].path, "p1o1/p20.PNG");
	p1o1[25].time = 50;
	strcpy(p1o1[26].path, "p1o1/p21.PNG");
	p1o1[26].time = 50;
	strcpy(p1o1[27].path, "p1o1/p20.PNG");
	p1o1[27].time = 50;
	strcpy(p1o1[28].path, "p1o1/p21.PNG");
	p1o1[28].time = 50;
	strcpy(p1o1[29].path, "p1o1/p20.PNG");
	p1o1[29].time = 50;
	strcpy(p1o1[30].path, "p1o1/p22.PNG");
	p1o1[30].key = Enter_key;
	p1o1[30].move_by = 3;
	p1o1[30].left_on = 1;
	strcpy(p1o1[31].path, "p1o1/p23.PNG");
	p1o1[31].key = Enter_key;
	p1o1[31].move_by = -9;
	p1o1[31].left_on = 1;
	p1o1[31].right_on = -1;
	strcpy(p1o1[32].path, "p1o1/p24.PNG");
	p1o1[32].key = Enter_key;
	p1o1[32].right_on = -1;
	strcpy(p1o1[33].path, "p1o1/p25(1).PNG");
	p1o1[33].time = 30;
	strcpy(p1o1[34].path, "p1o1/p26(1).PNG");
	p1o1[34].time = 30;
	strcpy(p1o1[35].path, "p1o1/p27(2).PNG");
	p1o1[35].time = 30;
	strcpy(p1o1[36].path, "p1o1/p28(1).PNG");
	p1o1[36].time = 30;
	strcpy(p1o1[37].path, "p1o1/p28.PNG");
	p1o1[37].key = Enter_key;
	p1o1[37].move_by = 3;
	p1o1[37].left_on = 1;
	strcpy(p1o1[38].path, "p1o1/p29.PNG");
	p1o1[38].key = Enter_key;
	p1o1[38].move_by = -8;
	p1o1[38].left_on = 1;
	p1o1[38].right_on = -1;
	strcpy(p1o1[39].path, "p1o1/p30.PNG");
	p1o1[39].key = Enter_key;
	p1o1[39].right_on = -1;
	strcpy(p1o1[40].path, "p1o1/p31.PNG");
	p1o1[40].time = 30;
	strcpy(p1o1[41].path, "p1o1/p32.PNG");
	p1o1[41].time = 30;
	strcpy(p1o1[42].path, "p1o1/p33.PNG");
	p1o1[42].time = 30;
	strcpy(p1o1[43].path, "p1o1/p34.PNG");
	p1o1[43].key = Enter_key;
	p1o1[43].move_by = 3;
	p1o1[43].left_on = 1;
	strcpy(p1o1[44].path, "p1o1/p35.PNG");
	p1o1[44].key = Enter_key;
	p1o1[44].move_by = -7;
	p1o1[44].left_on = 1;
	p1o1[44].right_on = -1;
	strcpy(p1o1[45].path, "p1o1/p36.PNG");
	p1o1[45].key = Enter_key;
	p1o1[45].right_on = -1;
	strcpy(p1o1[46].path, "p1o1/p37.PNG");
	p1o1[46].time = 50;
	strcpy(p1o1[47].path, "p1o1/p38.PNG");
	p1o1[47].time = 50;
	strcpy(p1o1[48].path, "p1o1/p37.PNG");
	p1o1[48].time = 50;
	strcpy(p1o1[49].path, "p1o1/p38.PNG");
	p1o1[49].time = 50;
	strcpy(p1o1[50].path, "p1o1/p37.PNG");
	p1o1[50].time = 50;
	strcpy(p1o1[51].path, "p1o1/p39.PNG");
	p1o1[51].key = Enter_key;
	p1o1[51].move_by = 3;
	p1o1[51].left_on = 1;
	strcpy(p1o1[52].path, "p1o1/p40.PNG");
	p1o1[52].key = Enter_key;
	p1o1[52].move_by = -9;
	p1o1[52].left_on = 1;
	p1o1[31].right_on = -1;
	strcpy(p1o1[53].path, "p1o1/p41.PNG");
	p1o1[53].key = Enter_key;
	p1o1[53].right_on = -1;
	strcpy(p1o1[54].path, "p1o1/p42.PNG");
	p1o1[54].time = 30;
	strcpy(p1o1[55].path, "p1o1/p43.PNG");
	p1o1[55].time = 30;
	strcpy(p1o1[56].path, "p1o1/p44.PNG");
	p1o1[56].time = 30;
	strcpy(p1o1[57].path, "p1o1/p45.PNG");
	p1o1[57].key = Enter_key;
	p1o1[57].move_by = 3;
	p1o1[57].left_on = 1;
	strcpy(p1o1[58].path, "p1o1/p46.PNG");
	p1o1[58].key = Enter_key;
	p1o1[58].move_by = -7;
	p1o1[58].left_on = 1;
	p1o1[58].right_on = -1;
	strcpy(p1o1[59].path, "p1o1/p47.PNG");
	p1o1[59].key = Enter_key;
	p1o1[59].right_on = -1;
	strcpy(p1o1[60].path, "p1o1/p48.PNG");
	p1o1[60].time = 50;
	strcpy(p1o1[61].path, "p1o1/p49.PNG");
	p1o1[61].time = 50;
	strcpy(p1o1[62].path, "p1o1/p48.PNG");
	p1o1[62].time = 50;
	strcpy(p1o1[63].path, "p1o1/p49.PNG");
	p1o1[63].time = 50;
	strcpy(p1o1[64].path, "p1o1/p48.PNG");
	p1o1[64].time = 50;
	strcpy(p1o1[65].path, "p1o1/p50.PNG");
	p1o1[65].key = Enter_key;
	p1o1[65].move_by = 3;
	p1o1[65].left_on = 1;
	strcpy(p1o1[66].path, "p1o1/p51.PNG");
	p1o1[66].key = Enter_key;
	p1o1[66].move_by = -9;
	p1o1[66].left_on = 1;
	p1o1[66].right_on = -1;
	strcpy(p1o1[67].path, "p1o1/p52.PNG");
	p1o1[67].key = Enter_key;
	p1o1[67].right_on = -1;
	strcpy(p1o1[68].path, "p1o1/p53.PNG");
	p1o1[68].time = 30;
	strcpy(p1o1[69].path, "p1o1/p54.PNG");
	p1o1[69].time = 30;
	strcpy(p1o1[70].path, "p1o1/p55.PNG");
	p1o1[70].time = 30;
	strcpy(p1o1[71].path, "p1o1/p56.PNG");
	p1o1[71].key = Enter_key;
	p1o1[71].move_by = 3;
	p1o1[71].left_on = 1;
	strcpy(p1o1[72].path, "p1o1/p57.PNG");
	p1o1[72].key = Enter_key;
	p1o1[72].move_by = -7;
	p1o1[72].left_on = 1;
	p1o1[72].right_on = -1;
	strcpy(p1o1[73].path, "p1o1/p58.PNG");
	p1o1[73].key = Enter_key;
	p1o1[73].right_on = -1;
	strcpy(p1o1[74].path, "p1o1/p59.PNG");
	p1o1[74].time = 30;
	strcpy(p1o1[75].path, "p1o1/p60.PNG");
	p1o1[75].time = 30;
	strcpy(p1o1[76].path, "p1o1/p61.PNG");
	p1o1[76].time = 30;
	strcpy(p1o1[77].path, "p1o1/p62.PNG");
	p1o1[77].key = Enter_key;
	p1o1[77].move_by = 3;
	p1o1[77].left_on = 1;
	strcpy(p1o1[78].path, "p1o1/p63.PNG");
	p1o1[78].key = Enter_key;
	p1o1[78].move_by = -7;
	p1o1[78].left_on = 1;
	p1o1[78].right_on = -1;
	strcpy(p1o1[79].path, "p1o1/p64.PNG");
	p1o1[79].key = Enter_key;
	p1o1[79].right_on = -1;
	strcpy(p1o1[80].path, "p1o1/p66.PNG");
	p1o1[80].key = Enter_key;
	p1o1[80].move_by = 3;
	p1o1[80].left_on = 1;
	strcpy(p1o1[81].path, "p1o1/p67.PNG");
	p1o1[81].key = Enter_key;
	p1o1[81].move_by = -4;
	p1o1[81].left_on = 1;
	p1o1[81].right_on = -1;
	strcpy(p1o1[82].path, "p1o1/p68.PNG");
	p1o1[82].key = Enter_key;
	p1o1[82].right_on = -1;
	strcpy(p1o1[83].path, "p1o1/p69.PNG");
	p1o1[83].time = 50;
	strcpy(p1o1[84].path, "p1o1/p70.PNG");
	p1o1[84].time = 50;
	strcpy(p1o1[85].path, "p1o1/p69.PNG");
	p1o1[85].time = 50;
	strcpy(p1o1[86].path, "p1o1/p70.PNG");
	p1o1[86].time = 50;
	strcpy(p1o1[87].path, "p1o1/p69.PNG");
	p1o1[87].time = 50;
	strcpy(p1o1[88].path, "p1o1/p71.PNG");
	p1o1[88].key = Enter_key;
	p1o1[88].move_by = -8;
	p1o1[88].left_on = 1;
	p1o1[88].right_on = -1;
	strcpy(p1o1[89].path, "p1o1/p72.PNG");
	p1o1[89].key = Enter_key;
	p1o1[89].right_on = -1;
	

}

void load_p1o2(Picture p1o2[])// first algo option number 2
{
	strcpy(p1o2[0].path, "p1o2/p1.png");
	p1o2[0].key = Enter_key;
	p1o2[0].move_by = 1;
	strcpy(p1o2[1].path, "p1o2/p2.PNG");
	p1o2[1].time = 50;
	strcpy(p1o2[2].path, "p1o2/p3.PNG");
	p1o2[2].time = 50;
	strcpy(p1o2[3].path, "p1o2/p4.PNG");
	p1o2[3].time = 50;
	strcpy(p1o2[4].path, "p1o2/p3.PNG");
	p1o2[4].time = 50;
	strcpy(p1o2[5].path, "p1o2/p4.PNG");
	p1o2[5].time = 50;
	strcpy(p1o2[6].path, "p1o2/p5.PNG");
	p1o2[6].key = Enter_key;
	p1o2[6].move_by = 3;
	p1o2[6].left_on = 1;
	strcpy(p1o2[7].path, "p1o2/p6.PNG");
	p1o2[7].key = Enter_key;
	p1o2[7].move_by = -9;
	p1o2[7].left_on = 1;
	p1o2[7].right_on = -1;
	strcpy(p1o2[8].path, "p1o2/p7.PNG");
	p1o2[8].key = Enter_key;
	p1o2[8].right_on = -1;
	strcpy(p1o2[9].path, "p1o2/p8.PNG");
	p1o2[9].time = 50;
	strcpy(p1o2[10].path, "p1o2/p9.PNG");
	p1o2[10].time = 50;
	strcpy(p1o2[11].path, "p1o2/p10.PNG");
	p1o2[11].time = 50;
	strcpy(p1o2[12].path, "p1o2/p9.PNG");
	p1o2[12].time = 50;
	strcpy(p1o2[13].path, "p1o2/p10.PNG");
	p1o2[13].time = 50;
	strcpy(p1o2[14].path, "p1o2/p11.PNG");
	p1o2[14].key = Enter_key;
	p1o2[14].move_by = 3;
	p1o2[14].left_on = 1;
	strcpy(p1o2[15].path, "p1o2/p12.PNG");
	p1o2[15].key = Enter_key;
	p1o2[15].move_by = -9;
	p1o2[15].left_on = 1;
	p1o2[15].right_on = -1;
	strcpy(p1o2[16].path, "p1o2/p13.PNG");
	p1o2[16].key = Enter_key;
	p1o2[16].right_on = -1;
	strcpy(p1o2[17].path, "p1o2/p14.PNG");
	p1o2[17].time = 50;
	strcpy(p1o2[18].path, "p1o2/p15.PNG");
	p1o2[18].time = 50;
	strcpy(p1o2[19].path, "p1o2/p16.PNG");
	p1o2[19].time = 50;
	strcpy(p1o2[20].path, "p1o2/p15.PNG");
	p1o2[20].time = 50;
	strcpy(p1o2[21].path, "p1o2/p16.PNG");
	p1o2[21].time = 50;
	strcpy(p1o2[22].path, "p1o2/p17.PNG");
	p1o2[22].key = Enter_key;
	p1o2[22].move_by = 3;
	p1o2[22].left_on = 1;
	strcpy(p1o2[23].path, "p1o2/p18.PNG");
	p1o2[23].key = Enter_key;
	p1o2[23].move_by = -9;
	p1o2[23].left_on = 1;
	p1o2[23].right_on = -1;
	strcpy(p1o2[24].path, "p1o2/p19.PNG");
	p1o2[24].key = Enter_key;
	p1o2[24].right_on = -1;
	strcpy(p1o2[25].path, "p1o2/p20.PNG");
	p1o2[25].time = 50;
	strcpy(p1o2[26].path, "p1o2/p21.PNG");
	p1o2[26].time = 50;
	strcpy(p1o2[27].path, "p1o2/p22.PNG");
	p1o2[27].time = 50;
	strcpy(p1o2[28].path, "p1o2/p21.PNG");
	p1o2[28].time = 50;
	strcpy(p1o2[29].path, "p1o2/p22.PNG");
	p1o2[29].time = 50;
	strcpy(p1o2[30].path, "p1o2/p23.PNG");
	p1o2[30].key = Enter_key;
	p1o2[30].move_by = 3;
	p1o2[30].left_on = 1;
	strcpy(p1o2[31].path, "p1o2/p24.PNG");
	p1o2[31].key = Enter_key;
	p1o2[31].move_by = -9;
	p1o2[31].left_on = 1;
	p1o2[31].right_on = -1;
	strcpy(p1o2[32].path, "p1o2/p25.PNG");
	p1o2[32].key = Enter_key;
	p1o2[32].right_on = -1;
	strcpy(p1o2[33].path, "p1o2/p26.PNG");
	p1o2[33].time = 50;
	strcpy(p1o2[34].path, "p1o2/p27.PNG");
	p1o2[34].time = 50;
	strcpy(p1o2[35].path, "p1o2/p28.PNG");
	p1o2[35].time = 50;
	strcpy(p1o2[36].path, "p1o2/p27.PNG");
	p1o2[36].time = 50;
	strcpy(p1o2[37].path, "p1o2/p26.PNG");
	p1o2[37].time = 50;
	strcpy(p1o2[38].path, "p1o2/p29.PNG");
	p1o2[38].key = Enter_key;
	p1o2[38].move_by = 3;
	p1o2[38].left_on = 1;
	strcpy(p1o2[39].path, "p1o2/p30.PNG");
	p1o2[39].key = Enter_key;
	p1o2[39].move_by = -9;
	p1o2[39].left_on = 1;
	p1o2[39].right_on = -1;
	strcpy(p1o2[40].path, "p1o2/p31.PNG");
	p1o2[40].key = Enter_key;
	p1o2[40].right_on = -1;
	strcpy(p1o2[41].path, "p1o2/p32.PNG");
	p1o2[41].time = 50;
	strcpy(p1o2[42].path, "p1o2/p33.PNG");
	p1o2[42].time = 50;
	strcpy(p1o2[43].path, "p1o2/p34.PNG");
	p1o2[43].time = 50;
	strcpy(p1o2[44].path, "p1o2/p33.PNG");
	p1o2[44].time = 50;
	strcpy(p1o2[45].path, "p1o2/p32.PNG");
	p1o2[45].time = 50;
	strcpy(p1o2[46].path, "p1o2/p35.PNG");
	p1o2[46].key = Enter_key;
	p1o2[46].move_by = 3;
	p1o2[46].left_on = 1;
	strcpy(p1o2[47].path, "p1o2/p36.PNG");
	p1o2[47].key = Enter_key;
	p1o2[47].move_by = -9;
	p1o2[47].left_on = 1;
	p1o2[47].right_on = -1;
	strcpy(p1o2[48].path, "p1o2/p37.PNG");
	p1o2[48].key = Enter_key;
	p1o2[48].right_on = -1;
	strcpy(p1o2[49].path, "p1o2/p38.PNG");
	p1o2[49].time = 50;
	strcpy(p1o2[50].path, "p1o2/p39.PNG");
	p1o2[50].time = 50;
	strcpy(p1o2[51].path, "p1o2/p40.PNG");
	p1o2[51].time = 50;
	strcpy(p1o2[52].path, "p1o2/p39.PNG");
	p1o2[52].time = 50;
	strcpy(p1o2[53].path, "p1o2/p38.PNG");
	p1o2[53].time = 50;
	strcpy(p1o2[54].path, "p1o2/p41.PNG");
	p1o2[54].key = Enter_key;
	p1o2[54].move_by = 3;
	p1o2[54].left_on = 1;
	strcpy(p1o2[55].path, "p1o2/p42.PNG");
	p1o2[55].key = Enter_key;
	p1o2[55].move_by = -9;
	p1o2[55].left_on = 1;
	p1o2[55].right_on = -1;
	strcpy(p1o2[56].path, "p1o2/43.PNG");
	p1o2[56].key = Enter_key;
	p1o2[56].right_on = -1;
	strcpy(p1o2[57].path, "p1o2/p45.PNG");
	p1o2[57].time = 50;
	strcpy(p1o2[58].path, "p1o2/p49.PNG");
	p1o2[58].time = 50;
	strcpy(p1o2[59].path, "p1o2/p50.PNG");
	p1o2[59].time = 50;
	strcpy(p1o2[60].path, "p1o2/p49.PNG");
	p1o2[60].time = 50;
	strcpy(p1o2[61].path, "p1o2/p45.PNG");
	p1o2[61].time = 50;
	strcpy(p1o2[62].path, "p1o2/p46.PNG");
	p1o2[62].key = Enter_key;
	p1o2[62].move_by = 3;
	p1o2[62].left_on = 1;
	strcpy(p1o2[63].path, "p1o2/p47.PNG");
	p1o2[63].key = Enter_key;
	p1o2[63].move_by = -9;
	p1o2[63].left_on = 1;
	p1o2[63].right_on = -1;
	strcpy(p1o2[64].path, "p1o2/p48.PNG");
	p1o2[64].key = Enter_key;
	p1o2[64].right_on = -1;
	strcpy(p1o2[65].path, "p1o2/p51.PNG");
	p1o2[65].time = 50;
	strcpy(p1o2[66].path, "p1o2/p52.PNG");
	p1o2[66].time = 50;
	strcpy(p1o2[67].path, "p1o2/p51.PNG");
	p1o2[67].time = 50;
	strcpy(p1o2[68].path, "p1o2/p52.PNG");
	p1o2[68].time = 50;
	strcpy(p1o2[69].path, "p1o2/p51.PNG");
	p1o2[69].time = 50;
	strcpy(p1o2[70].path, "p1o2/p53.PNG");
	p1o2[70].key = Enter_key;
	p1o2[70].move_by = 3;
	p1o2[70].left_on = 1;
	strcpy(p1o2[71].path, "p1o2/p54.PNG");
	p1o2[71].key = Enter_key;
	p1o2[71].move_by = -9;
	p1o2[71].left_on = 1;
	p1o2[71].right_on = -1;
	strcpy(p1o2[72].path, "p1o2/p55.PNG");
	p1o2[72].key = Enter_key;
	p1o2[72].right_on = -1;
	strcpy(p1o2[73].path, "p1o2/p56.PNG");
	p1o2[73].time = 50;
	strcpy(p1o2[74].path, "p1o2/p57.PNG");
	p1o2[74].time = 50;
	strcpy(p1o2[75].path, "p1o2/p56.PNG");
	p1o2[75].time = 50;
	strcpy(p1o2[76].path, "p1o2/p57.PNG");
	p1o2[76].time = 50;
	strcpy(p1o2[77].path, "p1o2/p56.PNG");
	p1o2[77].time = 50;
	strcpy(p1o2[78].path, "p1o2/p58.PNG");
	p1o2[78].key = Enter_key;
	p1o2[78].move_by = 3;
	p1o2[78].left_on = 1;
	strcpy(p1o2[79].path, "p1o2/p59.PNG");
	p1o2[79].key = Enter_key;
	p1o2[79].move_by = -9;
	p1o2[79].left_on = 1;
	p1o2[79].right_on = -1;
	strcpy(p1o2[80].path, "p1o2/p60.PNG");
	p1o2[80].key = Enter_key;
	p1o2[80].right_on = -1;
	strcpy(p1o2[81].path, "p1o2/p61.PNG");
	p1o2[81].time = 50;
	strcpy(p1o2[82].path, "p1o2/p62.PNG");
	p1o2[82].time = 50;
	strcpy(p1o2[83].path, "p1o2/p63.PNG");
	p1o2[83].time = 50;
	strcpy(p1o2[84].path, "p1o2/p62.PNG");
	p1o2[84].time = 50;
	strcpy(p1o2[85].path, "p1o2/p61.PNG");
	p1o2[85].time = 50;
	strcpy(p1o2[86].path, "p1o2/p64.PNG");
	p1o2[86].key = Enter_key;
	p1o2[86].move_by = 3;
	p1o2[86].left_on = 1;
	strcpy(p1o2[87].path, "p1o2/p65.PNG");
	p1o2[87].key = Enter_key;
	p1o2[87].move_by = -9;
	p1o2[87].left_on = 1;
	p1o2[87].right_on = -1;
	strcpy(p1o2[88].path, "p1o2/p66.PNG");
	p1o2[88].key = Enter_key;
	p1o2[88].right_on = -1;
	strcpy(p1o2[89].path, "p1o2/p67.PNG");
	p1o2[89].time = 50;
	strcpy(p1o2[90].path, "p1o2/p68.PNG");
	p1o2[90].time = 50;
	strcpy(p1o2[91].path, "p1o2/p69.PNG");
	p1o2[91].time = 50;
	strcpy(p1o2[92].path, "p1o2/p68.PNG");
	p1o2[92].time = 50;
	strcpy(p1o2[93].path, "p1o2/p67.PNG");
	p1o2[93].time = 50;
	strcpy(p1o2[94].path, "p1o2/p70.PNG");
	p1o2[94].key = Enter_key;
	p1o2[94].move_by = 3;
	p1o2[94].left_on = 1;
	strcpy(p1o2[95].path, "p1o2/p71.PNG");
	p1o2[95].key = Enter_key;
	p1o2[95].move_by = -9;
	p1o2[95].left_on = 1;
	p1o2[95].right_on = -1;
	strcpy(p1o2[96].path, "p1o2/p72.PNG");
	p1o2[96].key = Enter_key;
	p1o2[96].right_on = -1;
	strcpy(p1o2[97].path, "p1o2/p73.PNG");
	p1o2[97].key = Enter_key;
	p1o2[97].move_by = 3;
	p1o2[97].left_on = 1;
	strcpy(p1o2[98].path, "p1o2/p74.PNG");
	p1o2[98].key = Enter_key;
	p1o2[98].move_by = -5;
	p1o2[98].left_on = 1;
	p1o2[98].right_on = -1;
	strcpy(p1o2[99].path, "p1o2/p75.PNG");
	p1o2[99].key = Enter_key;
	p1o2[99].right_on = -1;
	strcpy(p1o2[100].path, "p1o2/p76.PNG");
	p1o2[100].time = 50;
	strcpy(p1o2[101].path, "p1o2/p77.PNG");
	p1o2[101].time = 50;
	strcpy(p1o2[102].path, "p1o2/p78.PNG");
	p1o2[102].time = 50;
	strcpy(p1o2[103].path, "p1o2/p77.PNG");
	p1o2[103].time = 50;
	strcpy(p1o2[104].path, "p1o2/p76.PNG");
	p1o2[104].time = 50;
	strcpy(p1o2[105].path, "p1o2/p79.PNG");
	p1o2[105].key = Enter_key;
	p1o2[105].move_by = -8;
	p1o2[105].left_on = 1;
	strcpy(p1o2[106].path, "p1o2/p80.PNG");
	p1o2[106].key = Enter_key;
	p1o2[106].right_on = -1;
}

void load_p1o3(Picture p1o3[])
{
	strcpy(p1o3[0].path, "p1o3/p1.png");
	p1o3[0].key = Enter_key;
	p1o3[0].move_by = 1;
	strcpy(p1o3[1].path, "p1o3/p2.PNG");
	p1o3[1].time = 50;
	strcpy(p1o3[2].path, "p1o3/p3.PNG");
	p1o3[2].time = 50;
	strcpy(p1o3[3].path, "p1o3/p2.PNG");
	p1o3[3].time = 50;
	strcpy(p1o3[4].path, "p1o3/p3.PNG");
	p1o3[4].time = 50;
	strcpy(p1o3[5].path, "p1o3/p2.PNG");
	p1o3[5].time = 50;
	strcpy(p1o3[6].path, "p1o3/p4.PNG");
	p1o3[6].key = Enter_key;
	p1o3[6].move_by = 3;
	p1o3[6].left_on = 1;
	strcpy(p1o3[7].path, "p1o3/p5.PNG");
	p1o3[7].key = Enter_key;
	p1o3[7].move_by = -9;
	p1o3[7].left_on = 1;
	p1o3[7].right_on = -1;
	strcpy(p1o3[8].path, "p1o3/p6.PNG");
	p1o3[8].key = Enter_key;
	p1o3[8].right_on = -1;
	strcpy(p1o3[9].path, "p1o3/p7.PNG");
	p1o3[9].time = 50;
	strcpy(p1o3[10].path, "p1o3/p8.PNG");
	p1o3[10].time = 50;
	strcpy(p1o3[11].path, "p1o3/p7.PNG");
	p1o3[11].time = 50;
	strcpy(p1o3[12].path, "p1o3/p8.PNG");
	p1o3[12].time = 50;
	strcpy(p1o3[13].path, "p1o3/p7.PNG");
	p1o3[13].time = 50;
	strcpy(p1o3[14].path, "p1o3/p9.PNG");
	p1o3[14].key = Enter_key;
	p1o3[14].move_by = 3;
	p1o3[14].left_on = 1;
	strcpy(p1o3[15].path, "p1o3/p10.PNG");
	p1o3[15].key = Enter_key;
	p1o3[15].move_by = -9;
	p1o3[15].left_on = 1;
	p1o3[15].right_on = -1;
	strcpy(p1o3[16].path, "p1o3/p11.PNG");
	p1o3[16].key = Enter_key;
	p1o3[16].right_on = -1;
	strcpy(p1o3[17].path, "p1o3/p12.PNG");
	p1o3[17].time = 50;
	strcpy(p1o3[18].path, "p1o3/p13.PNG");
	p1o3[18].time = 50;
	strcpy(p1o3[19].path, "p1o3/p12.PNG");
	p1o3[19].time = 50;
	strcpy(p1o3[20].path, "p1o3/p13.PNG");
	p1o3[20].time = 50;
	strcpy(p1o3[21].path, "p1o3/p12.PNG");
	p1o3[21].time = 50;
	strcpy(p1o3[22].path, "p1o3/p14.PNG");
	p1o3[22].key = Enter_key;
	p1o3[22].move_by = 3;
	p1o3[22].left_on = 1;
	strcpy(p1o3[23].path, "p1o3/p15.PNG");
	p1o3[23].key = Enter_key;
	p1o3[23].move_by = -9;
	p1o3[23].left_on = 1;
	p1o3[23].right_on = -1;
	strcpy(p1o3[24].path, "p1o3/p16.PNG");
	p1o3[24].key = Enter_key;
	p1o3[24].right_on = -1;
	strcpy(p1o3[25].path, "p1o3/p17.PNG");
	p1o3[25].time = 50;
	strcpy(p1o3[26].path, "p1o3/p18.PNG");
	p1o3[26].time = 50;
	strcpy(p1o3[27].path, "p1o3/p17.PNG");
	p1o3[27].time = 50;
	strcpy(p1o3[28].path, "p1o3/p18.PNG");
	p1o3[28].time = 50;
	strcpy(p1o3[29].path, "p1o3/p17.PNG");
	p1o3[29].time = 50;
	strcpy(p1o3[30].path, "p1o3/p19.PNG");
	p1o3[30].key = Enter_key;
	p1o3[30].move_by = 3;
	p1o3[30].left_on = 1;
	strcpy(p1o3[31].path, "p1o3/p20.PNG");
	p1o3[31].key = Enter_key;
	p1o3[31].move_by = -9;
	p1o3[31].left_on = 1;
	p1o3[31].right_on = -1;
	strcpy(p1o3[32].path, "p1o3/p21.PNG");
	p1o3[32].key = Enter_key;
	p1o3[32].right_on = -1;
	strcpy(p1o3[33].path, "p1o3/p22.PNG");
	p1o3[33].time = 50;
	strcpy(p1o3[34].path, "p1o3/p23.PNG");
	p1o3[34].time = 50;
	strcpy(p1o3[35].path, "p1o3/p24.PNG");
	p1o3[35].key = Enter_key;
	p1o3[35].move_by = 3;
	p1o3[35].left_on = 1;
	strcpy(p1o3[36].path, "p1o3/p25.PNG");
	p1o3[36].key = Enter_key;
	p1o3[36].move_by = -6;
	p1o3[36].left_on = 1;
	p1o3[36].right_on = -1;
	strcpy(p1o3[37].path, "p1o3/p26.PNG");
	p1o3[37].key = Enter_key;
	p1o3[37].right_on = -1;

	strcpy(p1o3[38].path, "p1o3/p27.PNG");
	p1o3[38].time = 50;
	strcpy(p1o3[39].path, "p1o3/p28.PNG");
	p1o3[39].time = 50;
	strcpy(p1o3[40].path, "p1o3/p27.PNG");
	p1o3[40].time = 50;
	strcpy(p1o3[41].path, "p1o3/p28.PNG");
	p1o3[41].time = 50;
	strcpy(p1o3[42].path, "p1o3/p27.PNG");
	p1o3[42].time = 50;
	strcpy(p1o3[43].path, "p1o3/p29.PNG");
	p1o3[43].key = Enter_key;
	p1o3[43].move_by = 3;
	p1o3[43].left_on = 1;
	strcpy(p1o3[44].path, "p1o3/p30.PNG");
	p1o3[44].key = Enter_key;
	p1o3[44].move_by = -9;
	p1o3[44].left_on = 1;
	p1o3[44].right_on = -1;
	strcpy(p1o3[45].path, "p1o3/p31.PNG");
	p1o3[45].key = Enter_key;
	p1o3[45].right_on = -1;
	strcpy(p1o3[46].path, "p1o3/p32.PNG");
	p1o3[46].time = 50;
	strcpy(p1o3[47].path, "p1o3/p33.PNG");
	p1o3[47].time = 50;
	strcpy(p1o3[48].path, "p1o3/p34.PNG");
	p1o3[48].key = Enter_key;
	p1o3[48].move_by = 3;
	p1o3[48].left_on = 1;
	strcpy(p1o3[49].path, "p1o3/p35.PNG");
	p1o3[49].key = Enter_key;
	p1o3[49].move_by = -6;
	p1o3[49].left_on = 1;
	p1o3[49].right_on = -1;
	strcpy(p1o3[50].path, "p1o3/p36.PNG");
	p1o3[50].key = Enter_key;
	p1o3[50].right_on = -1;

	strcpy(p1o3[51].path, "p1o3/p37.PNG");
	p1o3[51].time = 50;
	strcpy(p1o3[52].path, "p1o3/p38.PNG");
	p1o3[52].time = 50;
	strcpy(p1o3[53].path, "p1o3/p37.PNG");
	p1o3[53].time = 50;
	strcpy(p1o3[54].path, "p1o3/p38.PNG");
	p1o3[54].time = 50;
	strcpy(p1o3[55].path, "p1o3/p37.PNG");
	p1o3[55].time = 50;
	strcpy(p1o3[56].path, "p1o3/p39.PNG");
	p1o3[56].key = Enter_key;
	p1o3[56].move_by = 3;
	p1o3[56].left_on = 1;
	strcpy(p1o3[57].path, "p1o3/p40.PNG");
	p1o3[57].key = Enter_key;
	p1o3[57].move_by = -9;
	p1o3[57].left_on = 1;
	p1o3[57].right_on = -1;
	strcpy(p1o3[58].path, "p1o3/p41.PNG");
	p1o3[58].key = Enter_key;
	p1o3[58].right_on = -1;
	strcpy(p1o3[59].path, "p1o3/p42.PNG");
	p1o3[59].time = 50;
	strcpy(p1o3[60].path, "p1o3/p43.PNG");
	p1o3[60].time = 50;
	strcpy(p1o3[61].path, "p1o3/p44.PNG");
	p1o3[61].key = Enter_key;
	p1o3[61].move_by = 3;
	p1o3[61].left_on = 1;
	strcpy(p1o3[62].path, "p1o3/p45.PNG");
	p1o3[62].key = Enter_key;
	p1o3[62].move_by = -6;
	p1o3[62].left_on = 1;
	p1o3[62].right_on = -1;
	strcpy(p1o3[63].path, "p1o3/p46.PNG");
	p1o3[63].key = Enter_key;
	p1o3[63].right_on = -1;

	strcpy(p1o3[64].path, "p1o3/p47.PNG");
	p1o3[64].time = 50;
	strcpy(p1o3[65].path, "p1o3/p48.PNG");
	p1o3[65].time = 50;
	strcpy(p1o3[66].path, "p1o3/p47.PNG");
	p1o3[66].time = 50;
	strcpy(p1o3[67].path, "p1o3/p48.PNG");
	p1o3[67].time = 50;
	strcpy(p1o3[68].path, "p1o3/p47.PNG");
	p1o3[68].time = 50;
	strcpy(p1o3[69].path, "p1o3/p49.PNG");
	p1o3[69].key = Enter_key;
	p1o3[69].move_by = 3;
	p1o3[69].left_on = 1;
	strcpy(p1o3[70].path, "p1o3/p50.PNG");
	p1o3[70].key = Enter_key;
	p1o3[70].move_by = -9;
	p1o3[70].left_on = 1;
	p1o3[70].right_on = -1;
	strcpy(p1o3[71].path, "p1o3/p51.PNG");
	p1o3[71].key = Enter_key;
	p1o3[71].right_on = -1;
	strcpy(p1o3[72].path, "p1o3/p52.PNG");
	p1o3[72].key = Enter_key;
	p1o3[72].move_by = 3;
	p1o3[72].left_on = 1;
	strcpy(p1o3[73].path, "p1o3/p53.PNG");
	p1o3[73].key = Enter_key;
	p1o3[73].move_by = -4;
	p1o3[73].left_on = 1;
	p1o3[73].right_on = -1;
	strcpy(p1o3[74].path, "p1o3/p54.PNG");
	p1o3[74].key = Enter_key;
	p1o3[74].right_on = -1;

	strcpy(p1o3[75].path, "p1o3/p55.PNG");
	p1o3[75].time = 50;
	strcpy(p1o3[76].path, "p1o3/p56.PNG");
	p1o3[76].time = 50;
	strcpy(p1o3[77].path, "p1o3/p57.PNG");
	p1o3[77].key = Enter_key;
	p1o3[77].move_by = 3;
	p1o3[77].left_on = 1;
	strcpy(p1o3[78].path, "p1o3/p58.PNG");
	p1o3[78].key = Enter_key;
	p1o3[78].move_by = -6;
	p1o3[78].left_on = 1;
	p1o3[78].right_on = -1;
	strcpy(p1o3[79].path, "p1o3/p59.PNG");
	p1o3[79].key = Enter_key;
	p1o3[79].right_on = -1;
	strcpy(p1o3[80].path, "p1o3/p60.PNG");
	p1o3[80].key = Enter_key;
	p1o3[80].move_by = -3;
	p1o3[80].left_on = 1;
	strcpy(p1o3[81].path, "p1o3/p61.PNG");
	p1o3[81].key = Enter_key;
	p1o3[81].right_on = -1;

}

void load_p2o1(Picture p2o1[])
{
	strcpy(p2o1[0].path, "p2o1/p1.png");
	p2o1[0].key = Enter_key;
	p2o1[0].move_by = 1;
	strcpy(p2o1[1].path, "p2o1/p2.PNG");
	p2o1[1].time = 50;
	strcpy(p2o1[2].path, "p2o1/p3.PNG");
	p2o1[2].time = 50;
	strcpy(p2o1[3].path, "p2o1/p2.PNG");
	p2o1[3].time = 50;
	strcpy(p2o1[4].path, "p2o1/p3.PNG");
	p2o1[4].time = 50;
	strcpy(p2o1[5].path, "p2o1/p2.PNG");
	p2o1[5].time = 50;
	strcpy(p2o1[6].path, "p2o1/p4.PNG");
	p2o1[6].key = Enter_key;
	p2o1[6].move_by = 3;
	p2o1[6].left_on = 1;
	strcpy(p2o1[7].path, "p2o1/p5.PNG");
	p2o1[7].key = Enter_key;
	p2o1[7].move_by = -9;
	p2o1[7].left_on = 1;
	p2o1[7].right_on = -1;
	strcpy(p2o1[8].path, "p2o1/p6.PNG");
	p2o1[8].key = Enter_key;
	p2o1[8].right_on = -1;
	strcpy(p2o1[9].path, "p2o1/p7.PNG");
	p2o1[9].time = 50;
	strcpy(p2o1[10].path, "p2o1/p8.PNG");
	p2o1[10].time = 50;
	strcpy(p2o1[11].path, "p2o1/p7.PNG");
	p2o1[11].time = 50;
	strcpy(p2o1[12].path, "p2o1/p8.PNG");
	p2o1[12].time = 50;
	strcpy(p2o1[13].path, "p2o1/p7.PNG");
	p2o1[13].time = 50;
	strcpy(p2o1[14].path, "p2o1/p9.PNG");
	p2o1[14].key = Enter_key;
	p2o1[14].move_by = 3;
	p2o1[14].left_on = 1;
	strcpy(p2o1[15].path, "p2o1/p10.PNG");
	p2o1[15].key = Enter_key;
	p2o1[15].move_by = -9;
	p2o1[15].left_on = 1;
	p2o1[15].right_on = -1;
	strcpy(p2o1[16].path, "p2o1/p11.PNG");
	p2o1[16].key = Enter_key;
	p2o1[16].right_on = -1;
	strcpy(p2o1[17].path, "p2o1/p12.PNG");
	p2o1[17].time = 200;
	strcpy(p2o1[18].path, "p2o1/p13.PNG");
	p2o1[18].time = 20;
	strcpy(p2o1[19].path, "p2o1/p14.PNG");
	p2o1[19].key = Enter_key;
	p2o1[19].move_by = 3;
	p2o1[19].left_on = 1;
	strcpy(p2o1[20].path, "p2o1/p15.PNG");
	p2o1[20].key = Enter_key;
	p2o1[20].move_by = -6;
	p2o1[20].left_on = 1;
	p2o1[20].right_on = -1;
	strcpy(p2o1[21].path, "p2o1/p17.PNG");
	p2o1[21].key = Enter_key;
	p2o1[21].right_on = -1;
	strcpy(p2o1[22].path, "p2o1/p18.PNG");
	p2o1[22].time = 50;
	strcpy(p2o1[23].path, "p2o1/p19.PNG");
	p2o1[23].time = 50;
	strcpy(p2o1[24].path, "p2o1/p18.PNG");
	p2o1[24].time = 50;
	strcpy(p2o1[25].path, "p2o1/p19.PNG");
	p2o1[25].time = 50;
	strcpy(p2o1[26].path, "p2o1/p18.PNG");
	p2o1[26].time = 50;
	strcpy(p2o1[27].path, "p2o1/p20.PNG");
	p2o1[27].key = Enter_key;
	p2o1[27].move_by = 3;
	p2o1[27].left_on = 1;
	strcpy(p2o1[28].path, "p2o1/p21.PNG");
	p2o1[28].key = Enter_key;
	p2o1[28].move_by = -9;
	p2o1[28].left_on = 1;
	p2o1[28].right_on = -1;
	strcpy(p2o1[29].path, "p2o1/p22.PNG");
	p2o1[29].key = Enter_key;
	p2o1[29].right_on = -1;
	strcpy(p2o1[30].path, "p2o1/p23.PNG");
	p2o1[30].time = 200;
	strcpy(p2o1[31].path, "p2o1/p25.PNG");
	p2o1[31].time = 20;
	strcpy(p2o1[32].path, "p2o1/p26.PNG");
	p2o1[32].key = Enter_key;
	p2o1[32].move_by = 3;
	p2o1[32].left_on = 1;
	strcpy(p2o1[33].path, "p2o1/p27.PNG");
	p2o1[33].key = Enter_key;
	p2o1[33].move_by = -6;
	p2o1[33].left_on = 1;
	p2o1[33].right_on = -1;
	strcpy(p2o1[34].path, "p2o1/p28.PNG");
	p2o1[34].key = Enter_key;
	p2o1[34].right_on = -1;
	strcpy(p2o1[35].path, "p2o1/p29.PNG");
	p2o1[35].time = 50;
	strcpy(p2o1[36].path, "p2o1/p30.PNG");
	p2o1[36].time = 50;
	strcpy(p2o1[37].path, "p2o1/p29.PNG");
	p2o1[37].time = 50;
	strcpy(p2o1[38].path, "p2o1/p30.PNG");
	p2o1[38].time = 50;
	strcpy(p2o1[39].path, "p2o1/p29.PNG");
	p2o1[39].time = 50;
	strcpy(p2o1[40].path, "p2o1/p31.PNG");
	p2o1[40].key = Enter_key;
	p2o1[40].move_by = 3;
	p2o1[40].left_on = 1;
	strcpy(p2o1[41].path, "p2o1/p32.PNG");
	p2o1[41].key = Enter_key;
	p2o1[41].move_by = -9;
	p2o1[41].left_on = 1;
	p2o1[41].right_on = -1;
	strcpy(p2o1[42].path, "p2o1/p33.PNG");
	p2o1[42].key = Enter_key;
	p2o1[42].right_on = -1;
	strcpy(p2o1[43].path, "p2o1/p34.PNG");
	p2o1[43].time = 200;
	strcpy(p2o1[44].path, "p2o1/p36.PNG");
	p2o1[44].time = 20;
	strcpy(p2o1[45].path, "p2o1/p37.PNG");
	p2o1[45].key = Enter_key;
	p2o1[45].move_by = 3;
	p2o1[45].left_on = 1;
	strcpy(p2o1[46].path, "p2o1/p38.PNG");
	p2o1[46].key = Enter_key;
	p2o1[46].move_by = -6;
	p2o1[46].left_on = 1;
	p2o1[46].right_on = -1;
	strcpy(p2o1[47].path, "p2o1/p39.PNG");
	p2o1[47].key = Enter_key;
	p2o1[47].right_on = -1;
	strcpy(p2o1[48].path, "p2o1/p40.PNG");
	p2o1[48].time = 50;
	strcpy(p2o1[49].path, "p2o1/p41.PNG");
	p2o1[49].time = 50;
	strcpy(p2o1[50].path, "p2o1/p40.PNG");
	p2o1[50].time = 50;
	strcpy(p2o1[51].path, "p2o1/p41.PNG");
	p2o1[51].time = 50;
	strcpy(p2o1[52].path, "p2o1/p40.PNG");
	p2o1[52].time = 50;
	strcpy(p2o1[53].path, "p2o1/p42.PNG");
	p2o1[53].key = Enter_key;
	p2o1[53].move_by = 3;
	p2o1[53].left_on = 1;
	strcpy(p2o1[54].path, "p2o1/p43.PNG");
	p2o1[54].key = Enter_key;
	p2o1[54].move_by = -9;
	p2o1[54].left_on = 1;
	p2o1[54].right_on = -1;
	strcpy(p2o1[55].path, "p2o1/p44.PNG");
	p2o1[55].key = Enter_key;
	p2o1[55].right_on = -1;
	strcpy(p2o1[56].path, "p2o1/p45.PNG");
	p2o1[56].time = 200;
	strcpy(p2o1[57].path, "p2o1/p47.PNG");
	p2o1[57].time = 20;
	strcpy(p2o1[58].path, "p2o1/p48.PNG");
	p2o1[58].key = Enter_key;
	p2o1[58].move_by = 3;
	p2o1[58].left_on = 1;
	strcpy(p2o1[59].path, "p2o1/p49.PNG");
	p2o1[59].key = Enter_key;
	p2o1[59].move_by = -6;
	p2o1[59].left_on = 1;
	p2o1[59].right_on = -1;
	strcpy(p2o1[60].path, "p2o1/p50.PNG");
	p2o1[60].key = Enter_key;
	p2o1[60].right_on = -1;
	strcpy(p2o1[61].path, "p2o1/p51.PNG");
	p2o1[61].time = 50;
	strcpy(p2o1[62].path, "p2o1/p52.PNG");
	p2o1[62].time = 50;
	strcpy(p2o1[63].path, "p2o1/p51.PNG");
	p2o1[63].time = 50;
	strcpy(p2o1[64].path, "p2o1/p52.PNG");
	p2o1[64].time = 50;
	strcpy(p2o1[65].path, "p2o1/p51.PNG");
	p2o1[65].time = 50;
	strcpy(p2o1[66].path, "p2o1/p53.PNG");
	p2o1[66].key = Enter_key;
	p2o1[66].move_by = 3;
	p2o1[66].left_on = 1;
	strcpy(p2o1[67].path, "p2o1/p54.PNG");
	p2o1[67].key = Enter_key;
	p2o1[67].move_by = -9;
	p2o1[67].left_on = 1;
	p2o1[67].right_on = -1;
	strcpy(p2o1[68].path, "p2o1/p55.PNG");
	p2o1[68].key = Enter_key;
	p2o1[68].right_on = -1;
	strcpy(p2o1[69].path, "p2o1/p56.PNG");
	p2o1[69].time = 200;
	strcpy(p2o1[70].path, "p2o1/p58.PNG");
	p2o1[70].time = 20;
	strcpy(p2o1[71].path, "p2o1/p59.PNG");
	p2o1[71].key = Enter_key;
	p2o1[71].move_by = 3;
	p2o1[71].left_on = 1;
	strcpy(p2o1[72].path, "p2o1/p60.PNG");
	p2o1[72].key = Enter_key;
	p2o1[72].move_by = -6;
	p2o1[72].left_on = 1;
	p2o1[72].right_on = -1;
	strcpy(p2o1[73].path, "p2o1/p61.PNG");
	p2o1[73].key = Enter_key;
	p2o1[73].right_on = -1;
	strcpy(p2o1[74].path, "p2o1/p62.PNG");
	p2o1[74].key = Enter_key;
	p2o1[74].move_by = -3;
	p2o1[74].left_on = 1;
	strcpy(p2o1[75].path, "p2o1/p63.PNG");
	p2o1[75].key = Enter_key;
	p2o1[75].right_on = -1;

}

void load_p2o2(Picture p2o2[])
{
	strcpy(p2o2[0].path, "p2o2/p1.png");
	p2o2[0].key = Enter_key;
	p2o2[0].move_by = 1;
	strcpy(p2o2[1].path, "p2o2/p2.PNG");
	p2o2[1].key = Enter_key;
	p2o2[1].move_by = 3;
	p2o2[1].left_on = 1;
	strcpy(p2o2[2].path, "p2o2/p3.PNG");
	p2o2[2].key = Enter_key;
	p2o2[2].move_by = -2;
	p2o2[2].left_on = 1;
	p2o2[2].right_on = -1;
	strcpy(p2o2[3].path, "p2o2/p4.PNG");
	p2o2[3].key = Enter_key;
	p2o2[3].right_on = -1;
	strcpy(p2o2[4].path, "p2o2/p5.PNG");
	p2o2[4].key = Enter_key;
	p2o2[4].move_by = 3;
	p2o2[4].left_on = 1;
	strcpy(p2o2[5].path, "p2o2/p6.PNG");
	p2o2[5].key = Enter_key;
	p2o2[5].move_by = -4;
	p2o2[5].left_on = 1;
	p2o2[5].right_on = -1;
	strcpy(p2o2[6].path, "p2o2/p7.PNG");
	p2o2[6].key = Enter_key;
	p2o2[6].right_on = -1;
	strcpy(p2o2[7].path, "p2o2/p8.PNG");
	p2o2[7].key = Enter_key;
	p2o2[7].move_by = 3;
	p2o2[7].left_on = 1;
	strcpy(p2o2[8].path, "p2o2/p9.PNG");
	p2o2[8].key = Enter_key;
	p2o2[8].move_by = -4;
	p2o2[8].left_on = 1;
	p2o2[8].right_on = -1;
	strcpy(p2o2[9].path, "p2o2/p10.PNG");
	p2o2[9].key = Enter_key;
	p2o2[9].right_on = -1;
	strcpy(p2o2[10].path, "p2o2/p11.PNG");
	p2o2[10].key = Enter_key;
	p2o2[10].move_by = -3;
	p2o2[10].left_on = 1;
	p2o2[10].right_on = -1;
	strcpy(p2o2[11].path, "p2o2/p12.PNG");
	p2o2[11].key = Enter_key;
	p2o2[11].right_on = -1;
}

void load_p2o3(Picture p2o3[])
{
	strcpy(p2o3[0].path, "p2o3/p1.png");
	p2o3[0].key = Enter_key;
	p2o3[0].move_by = 1;
	strcpy(p2o3[1].path, "p2o3/p2.PNG");
	p2o3[1].key = Enter_key;
	p2o3[1].move_by = 3;
	p2o3[1].left_on = 1;
	strcpy(p2o3[2].path, "p2o3/p3.PNG");
	p2o3[2].key = Enter_key;
	p2o3[2].move_by = -2;
	p2o3[2].left_on = 1;
	p2o3[2].right_on = -1;
	strcpy(p2o3[3].path, "p2o3/p4.PNG");
	p2o3[3].key = Enter_key;
	p2o3[3].right_on = -1;
	strcpy(p2o3[4].path, "p2o3/p5.PNG");
	p2o3[4].key = Enter_key;
	p2o3[4].move_by = 3;
	p2o3[4].left_on = 1;
	strcpy(p2o3[5].path, "p2o3/p6.PNG");
	p2o3[5].key = Enter_key;
	p2o3[5].move_by = -4;
	p2o3[5].left_on = 1;
	p2o3[5].right_on = -1;
	strcpy(p2o3[6].path, "p2o3/p7.PNG");
	p2o3[6].key = Enter_key;
	p2o3[6].right_on = -1;
	strcpy(p2o3[7].path, "p2o3/p8.PNG");
	p2o3[7].key = Enter_key;
	p2o3[7].move_by = -3;
	p2o3[7].left_on = 1;
	p2o3[7].right_on = -1;
	strcpy(p2o3[8].path, "p2o3/p9.PNG");
	p2o3[8].key = Enter_key;
	p2o3[8].right_on = -1;

}

void load_p3o1(Picture p3o1[])
{
	strcpy(p3o1[0].path, "p3o1/p1.png");
	p3o1[0].key = Enter_key;
	p3o1[0].move_by = 1;
	strcpy(p3o1[1].path, "p3o1/p2.PNG");
	p3o1[1].key = Enter_key;
	p3o1[1].move_by = 3;
	p3o1[1].left_on = 1;
	strcpy(p3o1[2].path, "p3o1/p3.PNG");
	p3o1[2].key = Enter_key;
	p3o1[2].move_by = -2;
	p3o1[2].left_on = 1;
	p3o1[2].right_on = -1;
	strcpy(p3o1[3].path, "p3o1/p4.PNG");
	p3o1[3].key = Enter_key;
	p3o1[3].right_on = -1;
	strcpy(p3o1[4].path, "p3o1/p5.PNG");
	p3o1[4].key = Enter_key;
	p3o1[4].move_by = 3;
	p3o1[4].left_on = 1;
	strcpy(p3o1[5].path, "p3o1/p6.PNG");
	p3o1[5].key = Enter_key;
	p3o1[5].move_by = -4;
	p3o1[5].left_on = 1;
	p3o1[5].right_on = -1;
	strcpy(p3o1[6].path, "p3o1/p7.PNG");
	p3o1[6].key = Enter_key;
	p3o1[6].right_on = -1;
	strcpy(p3o1[7].path, "p3o1/p8.PNG");
	p3o1[7].key = Enter_key;
	p3o1[7].move_by = 3;
	p3o1[7].left_on = 1;
	strcpy(p3o1[8].path, "p3o1/p9.PNG");
	p3o1[8].key = Enter_key;
	p3o1[8].move_by = -4;
	p3o1[8].left_on = 1;
	p3o1[8].right_on = -1;
	strcpy(p3o1[9].path, "p3o1/p10.PNG");
	p3o1[9].key = Enter_key;
	p3o1[9].right_on = -1;
	strcpy(p3o1[10].path, "p3o1/p11.PNG");
	p3o1[10].time = 50;
	strcpy(p3o1[11].path, "p3o1/p13.PNG");
	p3o1[11].time = 50;
	strcpy(p3o1[12].path, "p3o1/p11.PNG");
	p3o1[12].time = 50;
	strcpy(p3o1[13].path, "p3o1/p13.PNG");
	p3o1[13].time = 50;
	strcpy(p3o1[14].path, "p3o1/p14.PNG");
	p3o1[14].key = Enter_key;
	p3o1[14].move_by = 3;
	p3o1[14].left_on = 1;
	strcpy(p3o1[15].path, "p3o1/p15.PNG");
	p3o1[15].key = Enter_key;
	p3o1[15].move_by = -8;
	p3o1[15].left_on = 1;
	p3o1[15].right_on = -1;
	strcpy(p3o1[16].path, "p3o1/p16.PNG");
	p3o1[16].key = Enter_key;
	p3o1[16].right_on = -1;

	strcpy(p3o1[17].path, "p3o1/p17.PNG");
	p3o1[17].time = 50;
	strcpy(p3o1[18].path, "p3o1/p18.PNG");
	p3o1[18].time = 50;
	strcpy(p3o1[19].path, "p3o1/p17.PNG");
	p3o1[19].time = 50;
	strcpy(p3o1[20].path, "p3o1/p18.PNG");
	p3o1[20].time = 50;
	strcpy(p3o1[21].path, "p3o1/p17.PNG");
	p3o1[21].time = 50;
	strcpy(p3o1[22].path, "p3o1/p19.PNG");
	p3o1[22].key = Enter_key;
	p3o1[22].move_by = 3;
	p3o1[22].left_on = 1;
	strcpy(p3o1[23].path, "p3o1/p20.PNG");
	p3o1[23].key = Enter_key;
	p3o1[23].move_by = -9;
	p3o1[23].left_on = 1;
	p3o1[23].right_on = -1;
	strcpy(p3o1[24].path, "p3o1/p21.PNG");
	p3o1[24].key = Enter_key;
	p3o1[24].right_on = -1;


	strcpy(p3o1[25].path, "p3o1/p22.PNG");
	p3o1[25].time = 200;
	strcpy(p3o1[21].path, "p3o1/p17.PNG");
	p3o1[21].time = 50;
	strcpy(p3o1[26].path, "p3o1/p23.PNG");
	p3o1[26].key = Enter_key;
	p3o1[26].move_by = 3;
	p3o1[26].left_on = 1;
	strcpy(p3o1[27].path, "p3o1/p24.PNG");
	p3o1[27].key = Enter_key;
	p3o1[27].move_by = -5;
	p3o1[27].left_on = 1;
	p3o1[27].right_on = -1;
	strcpy(p3o1[28].path, "p3o1/p25.PNG");
	p3o1[28].key = Enter_key;
	p3o1[28].right_on = -1;

	strcpy(p3o1[29].path, "p3o1/p26.PNG");
	p3o1[29].time = 50;
	strcpy(p3o1[30].path, "p3o1/p27.PNG");
	p3o1[30].time = 50;
	strcpy(p3o1[31].path, "p3o1/p26.PNG");
	p3o1[31].time = 50;
	strcpy(p3o1[32].path, "p3o1/p27.PNG");
	p3o1[32].time = 50;
	strcpy(p3o1[33].path, "p3o1/p26.PNG");
	p3o1[33].time = 50;
	strcpy(p3o1[34].path, "p3o1/p28.PNG");
	p3o1[34].key = Enter_key;
	p3o1[34].move_by = 3;
	p3o1[34].left_on = 1;
	strcpy(p3o1[35].path, "p3o1/p29.PNG");
	p3o1[35].key = Enter_key;
	p3o1[35].move_by = -9;
	p3o1[35].left_on = 1;
	p3o1[35].right_on = -1;
	strcpy(p3o1[36].path, "p3o1/p30.PNG");
	p3o1[36].key = Enter_key;
	p3o1[36].right_on = -1;

	strcpy(p3o1[37].path, "p3o1/p31.PNG");
	p3o1[37].time = 200;
	strcpy(p3o1[38].path, "p3o1/p32.PNG");
	p3o1[38].time = 20;
	strcpy(p3o1[39].path, "p3o1/p33.PNG");
	p3o1[39].key = Enter_key;
	p3o1[39].move_by = 3;
	p3o1[39].left_on = 1;
	strcpy(p3o1[40].path, "p3o1/p34.PNG");
	p3o1[40].key = Enter_key;
	p3o1[40].move_by = -6;
	p3o1[40].left_on = 1;
	p3o1[40].right_on = -1;
	strcpy(p3o1[41].path, "p3o1/p35.PNG");
	p3o1[41].key = Enter_key;
	p3o1[41].right_on = -1;

	strcpy(p3o1[42].path, "p3o1/p36.PNG");
	p3o1[42].time = 50;
	strcpy(p3o1[43].path, "p3o1/p37.PNG");
	p3o1[43].time = 50;
	strcpy(p3o1[44].path, "p3o1/p36.PNG");
	p3o1[44].time = 50;
	strcpy(p3o1[45].path, "p3o1/p37.PNG");
	p3o1[45].time = 50;
	strcpy(p3o1[46].path, "p3o1/p36.PNG");
	p3o1[46].time = 50;
	strcpy(p3o1[47].path, "p3o1/p38.PNG");
	p3o1[47].key = Enter_key;
	p3o1[47].move_by = 3;
	p3o1[47].left_on = 1;
	strcpy(p3o1[48].path, "p3o1/p39.PNG");
	p3o1[48].key = Enter_key;
	p3o1[48].move_by = -9;
	p3o1[48].left_on = 1;
	p3o1[48].right_on = -1;
	strcpy(p3o1[49].path, "p3o1/p40.PNG");
	p3o1[49].key = Enter_key;
	p3o1[49].right_on = -1;

	strcpy(p3o1[49].path, "p3o1/41.PNG");
	p3o1[49].time = 200;
	strcpy(p3o1[50].path, "p3o1/p42.PNG");
	p3o1[50].key = Enter_key;
	p3o1[50].move_by = 3;
	p3o1[50].left_on = 1;
	strcpy(p3o1[51].path, "p3o1/p43.PNG");
	p3o1[51].key = Enter_key;
	p3o1[51].move_by = -4;
	p3o1[51].left_on = 1;
	p3o1[51].right_on = -1;
	strcpy(p3o1[52].path, "p3o1/p44.PNG");
	p3o1[52].key = Enter_key;
	p3o1[52].right_on = -1;

	strcpy(p3o1[53].path, "p3o1/p45.PNG");
	p3o1[53].time = 50;
	strcpy(p3o1[54].path, "p3o1/p46.PNG");
	p3o1[54].time = 50;
	strcpy(p3o1[55].path, "p3o1/p45.PNG");
	p3o1[55].time = 50;
	strcpy(p3o1[56].path, "p3o1/p46.PNG");
	p3o1[56].time = 50;
	strcpy(p3o1[57].path, "p3o1/p45.PNG");
	p3o1[57].time = 50;
	strcpy(p3o1[58].path, "p3o1/p47.PNG");
	p3o1[58].key = Enter_key;
	p3o1[58].move_by = 3;
	p3o1[58].left_on = 1;
	strcpy(p3o1[59].path, "p3o1/p48.PNG");
	p3o1[59].key = Enter_key;
	p3o1[59].move_by = -9;
	p3o1[59].left_on = 1;
	p3o1[59].right_on = -1;
	strcpy(p3o1[60].path, "p3o1/p49.PNG");
	p3o1[60].key = Enter_key;
	p3o1[60].right_on = -1;

	strcpy(p3o1[61].path, "p3o1/p50.PNG");
	p3o1[61].time = 200;
	strcpy(p3o1[62].path, "p3o1/p50(1).PNG");
	p3o1[62].time = 20;
	strcpy(p3o1[63].path, "p3o1/p51.PNG");
	p3o1[63].key = Enter_key;
	p3o1[63].move_by = 3;
	p3o1[63].left_on = 1;
	strcpy(p3o1[64].path, "p3o1/p52.PNG");
	p3o1[64].key = Enter_key;
	p3o1[64].move_by = -6;
	p3o1[64].left_on = 1;
	p3o1[64].right_on = -1;
	strcpy(p3o1[65].path, "p3o1/p53.PNG");
	p3o1[65].key = Enter_key;
	p3o1[65].right_on = -1;

	strcpy(p3o1[66].path, "p3o1/p54.PNG");
	p3o1[66].time = 50;
	strcpy(p3o1[67].path, "p3o1/p55.PNG");
	p3o1[67].time = 50;
	strcpy(p3o1[68].path, "p3o1/p54.PNG");
	p3o1[68].time = 50;
	strcpy(p3o1[69].path, "p3o1/p55.PNG");
	p3o1[69].time = 50;
	strcpy(p3o1[70].path, "p3o1/p54.PNG");
	p3o1[70].time = 50;
	strcpy(p3o1[71].path, "p3o1/p56.PNG");
	p3o1[71].key = Enter_key;
	p3o1[71].move_by = 3;
	p3o1[71].left_on = 1;
	strcpy(p3o1[72].path, "p3o1/p57.PNG");
	p3o1[72].key = Enter_key;
	p3o1[72].move_by = -9;
	p3o1[72].left_on = 1;
	p3o1[72].right_on = -1;
	strcpy(p3o1[73].path, "p3o1/p58.PNG");
	p3o1[73].key = Enter_key;
	p3o1[73].right_on = -1;

	strcpy(p3o1[74].path, "p3o1/p59.PNG");
	p3o1[74].time = 200;
	strcpy(p3o1[75].path, "p3o1/p60.PNG");
	p3o1[75].key = Enter_key;
	p3o1[75].move_by = 3;
	p3o1[75].left_on = 1;
	strcpy(p3o1[76].path, "p3o1/p61.PNG");
	p3o1[76].key = Enter_key;
	p3o1[76].move_by = -5;
	p3o1[76].left_on = 1;
	p3o1[76].right_on = -1;
	strcpy(p3o1[77].path, "p3o1/p62.PNG");
	p3o1[77].key = Enter_key;
	p3o1[77].right_on = -1;

	strcpy(p3o1[78].path, "p3o1/p63.PNG");
	p3o1[78].key = Enter_key;
	p3o1[78].move_by = -3;
	p3o1[78].left_on = 1;
	p3o1[78].right_on = -1;
	strcpy(p3o1[79].path, "p3o1/p64.PNG");
	p3o1[79].key = Enter_key;
	p3o1[79].right_on = -1;

}

void load_p3o2(Picture p3o2[])
{
	strcpy(p3o2[0].path, "p3o2/p1.png");
	p3o2[0].key = Enter_key;
	p3o2[0].move_by = 1;
	strcpy(p3o2[1].path, "p3o2/p2.PNG");
	p3o2[1].key = Enter_key;
	p3o2[1].move_by = 3;
	p3o2[1].left_on = 1;
	strcpy(p3o2[2].path, "p3o2/p3.PNG");
	p3o2[2].key = Enter_key;
	p3o2[2].move_by = -2;
	p3o2[2].left_on = 1;
	p3o2[2].right_on = -1;
	strcpy(p3o2[3].path, "p3o2/p4.PNG");
	p3o2[3].key = Enter_key;
	p3o2[3].right_on = -1;
	strcpy(p3o2[4].path, "p3o2/p5.PNG");
	p3o2[4].key = Enter_key;
	p3o2[4].move_by = 3;
	p3o2[4].left_on = 1;
	strcpy(p3o2[5].path, "p3o2/p6.PNG");
	p3o2[5].key = Enter_key;
	p3o2[5].move_by = -4;
	p3o2[5].left_on = 1;
	p3o2[5].right_on = -1;
	strcpy(p3o2[6].path, "p3o2/p7.PNG");
	p3o2[6].key = Enter_key;
	p3o2[6].right_on = -1;
	strcpy(p3o2[7].path, "p3o2/p8.PNG");
	p3o2[7].key = Enter_key;
	p3o2[7].move_by = 3;
	p3o2[7].left_on = 1;
	strcpy(p3o2[8].path, "p3o2/p9.PNG");
	p3o2[8].key = Enter_key;
	p3o2[8].move_by = -4;
	p3o2[8].left_on = 1;
	p3o2[8].right_on = -1;
	strcpy(p3o2[9].path, "p3o2/p10.PNG");
	p3o2[9].key = Enter_key;
	p3o2[9].right_on = -1;
	strcpy(p3o2[10].path, "p3o2/p11.PNG");
	p3o2[10].key = Enter_key;
	p3o2[10].move_by = -3;
	p3o2[10].left_on = 1;
	p3o2[10].right_on = -1;
	strcpy(p3o2[11].path, "p3o2/p12.PNG");
	p3o2[11].key = Enter_key;
	p3o2[11].right_on = -1;
}

void load_p3o3(Picture p3o3[])
{
	strcpy(p3o3[0].path, "p3o3/p1.png");
	p3o3[0].key = Enter_key;
	p3o3[0].move_by = 1;
	strcpy(p3o3[1].path, "p3o3/p2.PNG");
	p3o3[1].key = Enter_key;
	p3o3[1].move_by = 3;
	p3o3[1].left_on = 1;
	strcpy(p3o3[2].path, "p3o3/p3.PNG");
	p3o3[2].key = Enter_key;
	p3o3[2].move_by = -2;
	p3o3[2].left_on = 1;
	p3o3[2].right_on = -1;
	strcpy(p3o3[3].path, "p3o3/p4.PNG");
	p3o3[3].key = Enter_key;
	p3o3[3].right_on = -1;
	strcpy(p3o3[4].path, "p3o3/p5.PNG");
	p3o3[4].key = Enter_key;
	p3o3[4].move_by = -3;
	p3o3[4].left_on = 1;
	p3o3[4].right_on = -1;
	strcpy(p3o3[5].path, "p3o3/p6.PNG");
	p3o3[5].key = Enter_key;
	p3o3[5].right_on = -1;

}




//retuens the number of the algo we have chosen. this funtions takes care of the siles wich are menus only.
int get_op(Picture page[], int max_size)
{
	int i = 0, lead = 0;
	IplImage* image;
	while (lead != Enter_key)
	{
		image = cvLoadImage(page[i].path, 1);
		IplImage* pGrayImg = 0;
		pGrayImg = cvCreateImage(cvSize(image->width, image->height), image->depth, 1);
		cvShowImage("Algorithems", image); //display the image
		lead = cvWaitKey(page[i].time); //wait
		cvReleaseImage(&image);
		if (lead == Up_key)
		{
			i <= 0 ? i = 0 : i--;
		}
		if (lead == Down_key)
		{
			i >= max_size - 1 ? i = max_size - 1 : i++;
		}
		if (lead == ESC)
		{
			return ESC;
		}
	}
	return i;
	
}

void load_op_arr(Picture* op_arr[], Picture p1h[], Picture p2h[], Picture p3h[])
{
	load_p1h(p1h);
	op_arr[0] = p1h;
	load_p2h(p2h);
	op_arr[2] = p2h;
	load_p3h(p3h);
	op_arr[1] = p3h;
} // all the loads just organize the contents n the menu
//this is for all the other siles which are not menus. it gets an arrey full of dasta and the return valuie is inorder to know if to terminate the program or not.

int run_op(Picture operation[])
{
	int i = 0, lead = 0;
	IplImage* image;
	while (lead != ESC)
	{
		image = cvLoadImage(operation[i].path, 1);
		IplImage* pGrayImg = 0;
		pGrayImg = cvCreateImage(cvSize(image->width, image->height), image->depth, 1);
		cvShowImage("Algorithems", image); //display the image
		lead = cvWaitKey(operation[i].time); //wait
		cvReleaseImage(&image);
		while (operation[i].time != 0)
		{
			i++;
			image = cvLoadImage(operation[i].path, 1);
			IplImage* pGrayImg = 0;
			pGrayImg = cvCreateImage(cvSize(image->width, image->height), image->depth, 1);
			cvShowImage("Algorithems", image); //display the image
			lead = cvWaitKey(operation[i].time); //wait
			cvReleaseImage(&image);
		}

		if (lead == Left_key)
		{
			i = i + operation[i].left_on;
		}
		if (lead == Right_key)
		{
			i = i + operation[i].right_on;
		}
		if (lead == operation[i].key)
		{
			if (operation[i].move_by == 0)
			{
				i = 0;
			}
			else {
				i = i + operation[i].move_by;
			}
		}
		if (lead == ESC)
		{
			return ESC;
		}
		if (i < 0)
		{
			i = 0;
		}
	}
	return;
}

void op()
{
	int main_op = 0, less_op = 0;
	Picture main_page[ALGORITHEM_NUM] = { 0 };
	Picture p1h[ALGORITHEM_OPTIONS] = { 0 }, p2h[ALGORITHEM_OPTIONS] = { 0 }, p3h[ALGORITHEM_OPTIONS] = { 0 }, p1o1[107] = { 0 }, p1o2[107] = { 0 }, p1o3[107] = { 0 }, p2o1[107] = { 0 }, p2o2[107] = { 0 }, p2o3[107] = { 0 }, p3o1[107] = { 0 }, p3o2[107] = { 0 }, p3o3[107] = { 0 };
	Picture* op_arr[ALGORITHEM_NUM] = { 0 };
	Picture* operation[ALGORITHEM_NUM][ALGORITHEM_OPTIONS] = { 0 };
	load_op_page(main_page);
	load_p1o1(p1o1);
	load_p1o2(p1o2);
	load_p1o3(p1o3);
	load_p2o1(p2o1);
	load_p2o2(p2o2);
	load_p2o3(p2o3);
	load_p3o1(p3o1);
	load_p3o2(p3o2);
	load_p3o3(p3o3);
	load_op_arr(op_arr, p1h, p2h, p3h);
	//the first column is for the main algo and the second wone is for the secondery algo
	operation[0][0] = p1o1;
	operation[0][1] = p1o2;
	operation[0][2] = p1o3;
	operation[2][0] = p2o1;
	operation[2][1] = p2o2;
	operation[2][2] = p2o3;
	operation[1][0] = p3o1;
	operation[1][1] = p3o2;
	operation[1][2] = p3o3;
	main_op = get_op(main_page, ALGORITHEM_NUM);
	while (main_op != ESC)//main algo
	{
		less_op = get_op(op_arr[main_op],ALGORITHEM_OPTIONS);
		if (less_op == ESC) // secondery algo
		{
			main_op = get_op(main_page, ALGORITHEM_NUM);
			continue;
		}
		while (run_op(operation[main_op][less_op]) != ESC)
		{
			less_op = get_op(op_arr[main_op],ALGORITHEM_OPTIONS);
			if (less_op == ESC)
			{
				break;
			}
		}
		main_op = get_op(main_page, ALGORITHEM_NUM);
	}
	
}