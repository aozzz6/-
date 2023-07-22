//#include <stdio.h>
//int main()
//{
//	//求5！
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
//	//求1-1/2+1/3.....-1/99+1/100的和
//	//这题有分数形式用浮点型函数，double和float都行，上次用的double这次用float
//	//这个问题中的正负号用sign = -sign，denominator和term还有sum用float
//
//	int sign = 1;
//	float deno = 2.0, sum = 1.0, term;
//	//进入while 循环
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
//	//%f,%g,%e三者之间的区别
//	//%e 以科学计数法表示，小数点左边只有一位，小数点右边保留6位（过长则截去，不够则补零），接着是符号e，再接着就是10的多少次幂。
//
//	//% f 要求小数点右边保留6位（过长则截去，不够则补零）
//
//	//	% g 没有上面的小数点右边保留几位的要求，在数字很大或很小时会自动以指数形式表示，比较灵活，可读性也最强。
//	//	————————————————
//	//	版权声明：本文为CSDN博主「小杨见过羊」的原创文章，遵循CC 4.0 BY - SA版权协议，转载请附上原文出处链接及本声明。
//	//	原文链接：https ://blog.csdn.net/weixin_42000717/article/details/129846149
//	return 0;
//
//}

