//#include <stdio.h>
//int main()
//{
//	//��5��
//	int i, t, sum;
//	i = 0;
//	t = 1;
//
//	while (i<=4)
//	{
//		i = i + 1;
//		t = i * t;
//		sum = t;
//		printf("%d\n", sum);
//
//	}
//
//	printf("%d\n", t);
//
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	//��1-1/2+1/3.....-1/99+1/100�ĺ�
//	//�����з�����ʽ�ø����ͺ�����double��float���У��ϴ��õ�double�����float
//	//��������е���������sign = -sign��denominator��term����sum��float
//
//	int sign = 1;
//	float deno = 2.0, sum = 1.0, term;
//	//����while ѭ��
//	while (deno<=100)
//	{
//		sign = (-1)*sign;
//		//printf("%d\n", sign);
//		term = sign / deno;
//		//printf("%f\n", term);
//		deno = 1 + deno;
//		//printf("%f\n", deno);
//		sum = sum + term;
//		
//
//		printf("%f\n", sum);
//	}
//	//printf("%g\n", sum);
//	//%f,%g,%e����֮�������
//	//%e �Կ�ѧ��������ʾ��С�������ֻ��һλ��С�����ұ߱���6λ���������ȥ���������㣩�������Ƿ���e���ٽ��ž���10�Ķ��ٴ��ݡ�
//
//	//% f Ҫ��С�����ұ߱���6λ���������ȥ���������㣩
//
//	//	% g û�������С�����ұ߱�����λ��Ҫ�������ֺܴ���Сʱ���Զ���ָ����ʽ��ʾ���Ƚ����ɶ���Ҳ��ǿ��
//	//	��������������������������������
//	//	��Ȩ����������ΪCSDN������С������򡹵�ԭ�����£���ѭCC 4.0 BY - SA��ȨЭ�飬ת���븽��ԭ�ĳ������Ӽ���������
//	//	ԭ�����ӣ�https ://blog.csdn.net/weixin_42000717/article/details/129846149
//	return 0;
//
//}

