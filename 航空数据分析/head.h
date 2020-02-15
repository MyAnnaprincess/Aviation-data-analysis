/*
	该Win32控制台应用程序在MSVC2010下运行成功
	此模块为航空数据分析
	若想得到航空数据折线图，请运行Win32项目：<航空数据分析折线图>
*/
struct data
	{
		int FFP_DATEyear[14];
		int FFP_DATEmonth[14];
		int LOAD_TIMEyear[14];
		int LOAD_TIMEmonth[14];
		int FLIGHT_COUNT[14];
		int SEG_KM_SUM[14];
		double avg_discount[14];
	};
void read(int i,struct data* D);
void print(struct data* D);
void month(struct data* D, int L[14]);
void value(struct data* D);
void average(struct data* D);
void standard_data(struct data* D);