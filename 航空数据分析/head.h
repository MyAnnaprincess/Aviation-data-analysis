/*
	��Win32����̨Ӧ�ó�����MSVC2010�����гɹ�
	��ģ��Ϊ�������ݷ���
	����õ�������������ͼ��������Win32��Ŀ��<�������ݷ�������ͼ>
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