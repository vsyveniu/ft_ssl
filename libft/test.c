/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsyveniu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/17 16:55:12 by vsyveniu          #+#    #+#             */
/*   Updated: 2017/11/17 16:57:43 by vsyveniu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <ctype.h>
#include <stdio.h>
#include <fcntl.h>

void ft_foo(char *c)
{	
	*c = 'n';			
}

void ft_foo2(unsigned int i, char *c)
{
	(void)i;
	*c = 'm';
}
char ft_foo3(char c)
{
	c = 'L';
	return (c);
}

char ft_foo4(unsigned int i, char c)
{
	(void)i;
	c = 'B';
	return (c);
}

int	main(int argc, char **argv)
{
	(void)argv;
	if ((argc < 2) || (argc > 2))
	{
		return (0);
	}
	else
	{

		

		if(ft_strcmp(argv[1], "ft_mem") == 0)
		{
			///		ft_memset ///
			printf("\n");
			printf("/////////ft_memset/////////\n");
			printf("\n");

			char testMemset[] = "kfdsdjgojsge";
			memset(testMemset, 'a', 7);
			printf("original -> %s\n", testMemset);
			ft_memset(testMemset, 'a', 7);
			printf("custom   -> %s\n", testMemset);
		

		///		ft_bzero ///
			printf("\n");
			printf("/////////ft_bzero/////////\n");
			printf("\n");	
		
			int i;
			i = 0;
			char testBzero[10] = {1, 2, 3, 4, 5, 6 ,7, 8, 9, 10};
			bzero( testBzero, 7);
			printf("original -> ");
			while (i < 10)
			{
				printf("%d ", testBzero[i]);
			i++;
			}
			printf("\n");
			i = 0;
			ft_bzero( testBzero, 7);
			printf("custom   -> ");
			while (i < 10)
			{
				printf("%d ", testBzero[i]);
			i++;
			}
			printf("\n");

		///	ft_memcpy ///
			printf("\n");
			printf("/////////ft_memcpy/////////\n");
			printf("\n");
		
			char testMemcpy[] = "12345678";
			char destMemcpy[46];
			memcpy(destMemcpy, testMemcpy, 7);
			printf("original   -> %s$\n", destMemcpy);
			ft_memcpy(destMemcpy, testMemcpy, 7);
			printf("custom     -> %s$\n", destMemcpy);
		
		/// ft_memccpy ///
			printf("\n");
			printf("/////////ft_memccpy/////////\n");
			printf("\n");
		
			char testMemccpy[] = "test basic !";
			char destMemccpy[] = "the cake is a lie !\0I'm hidden lol\r\n";
			memccpy(destMemccpy, testMemccpy, 't', strlen(testMemccpy));
			printf("original   -> %s$\n", destMemccpy);
			ft_memccpy(destMemccpy, testMemccpy, 't', strlen(testMemccpy));
			printf("custom     -> %s$\n", destMemccpy);

		/// ft_memmove ///
			printf("\n");
			printf("/////////ft_memmove/////////\n");
			printf("\n");
		
			//char testMemmove[0xF00];
			char destMemmove[0xF00];
			char *data = "thi\xffs i\xfas \0a g\xde\xadood \0nyan\0cat\0 !\r\n";
			memmove(destMemmove, data, 33);
			printf("original   -> %s\n", destMemmove);
			ft_memmove(destMemmove, data, 33);
			printf("custom     -> %s\n", destMemmove);
		

			///	ft_memchr ///
			printf("\n");
			printf("/////////ft_memchr/////////\n");
			printf("\n");

			char *destmemchr;
			char *dest2memchr;
			char testmemchr[] = "/|\x12\xff\x09\x42\2002\42|\\";
			destmemchr = memchr(testmemchr, '\200', 10);
			printf("original   -> %s$\n", destmemchr);
			dest2memchr = ft_memchr(testmemchr, '\200', 10);
			printf("custom     -> %s$\n", dest2memchr);

		///	ft_memcmp ///
			printf("\n");
			printf("/////////ft_memcmp/////////\n");
			printf("\n");
		
			char testMemcmp[] = "\xff\xaa\xde\x12";
			char test2Memcmp[] = "\xff\xaa\xde\x12MACOSAAAAA";
			printf("original -> %d\n", memcmp(testMemcmp, test2Memcmp,  4));
			printf("custom   -> %d\n", ft_memcmp(testMemcmp, test2Memcmp, 4));
			
		}
		/// ft_strlen ///

		if (ft_strcmp(argv[1], "ft_str") == 0)
		{
			printf("\n");
			printf("/////////ft_strlen/////////\n");
			printf("\n");
			

			char testStrlen;
			printf("original -> %lu\n",strlen("fuck"));
			printf("custom   -> %zu\n", ft_strlen("fuck"));

			scanf("%s", & testStrlen);

			printf("original -> %lu\n", strlen(&testStrlen));
			printf("custom   -> %zu\n", 	ft_strlen(&testStrlen));
			printf("\n");


			/// ft_strdup ///
			
			printf("\n");
			printf("/////////ft_strdup/////////\n");
			printf("\n");
		
			//printf("original -> %d\n",strcmp("fucksdf", "fuck"));
			//printf("custom   -> %d\n", ft_strcmp("fucksdf", "fuck"));
			printf("\n");

			/// ft_strcpy ///
			
			printf("\n");
			printf("/////////ft_strcpy/////////\n");
			printf("\n");

			char testStrcpy[] = "Å";
			char test2Strcpy[30];
			printf("original -> %s\n", strcpy(test2Strcpy, testStrcpy));
			printf("custom   -> %s\n", ft_strcpy(test2Strcpy, testStrcpy));
			printf("\n");

			///	ft_strncpy ///
			printf("\n");
			printf("/////////ft_strncpy/////////\n");
			printf("\n");
		
			char testStrncpy[30] = "--> nyancat <--\n\r";
			char test2Strcnpy[30];
			printf("original -> %s\n", strncpy(test2Strcnpy, testStrncpy, 12));
			printf("custom   -> %s\n", ft_strncpy(test2Strcnpy, testStrncpy, 12));
			printf("\n");


			///	ft_strcat ///
			printf("\n");
			printf("/////////ft_strcat/////////\n");
			printf("\n");
			
			
			char testStrcat[] = "the cake is a lie !\0I'm hidden lol\r\n";
			char test2Strcat[] = "df";
			printf("original -> %s$\n", strcat(testStrcat, test2Strcat));
			printf("custom   -> %s$\n", ft_strcat(testStrcat, test2Strcat));
			printf("\n");

			/// ft_strncat ///
			printf("\n");
			printf("/////////ft_strncat/////////\n");
			printf("\n");
		
			char testStrncat[] = "the cake is a lie !\0I'm hidden lol\r\n";
			char test2Strncat[] = "df";
			printf("original -> %s$\n", strncat(testStrncat, test2Strncat, 1));
			printf("custom   -> %s\n", ft_strncat(testStrncat, test2Strncat, 1));
			printf("\n");

			/// ft_strlcat ///
			printf("\n");
			printf("/////////ft_strlcat/////////\n");
			printf("\n");
		
			char testStrlcat[] = "o ";
			char test2Strlcat[] = "kurvadsfgsdfklg";
			ft_strlcat(testStrlcat, test2Strlcat, 1);
			printf("%s\n", testStrlcat);
			printf("\n");

			///	ft_strchr ///
			printf("\n");
			printf("/////////ft_strchr/////////\n");
			printf("\n");
		
			char testStrchr[] = "the cake is a lie !\0I'm hidden lol\r\n";
			printf("original -> %s\n", strchr(testStrchr, 't'));
			printf("custom   -> %s\n", ft_strchr(testStrchr, 't'));
			printf("\n");


			///	ft_strrchr ///
			printf("\n");
			printf("/////////ft_strrchr/////////\n");
			printf("\n");
		
			char testStrrchr[] = "fuck";
			printf("original -> %s\n", strrchr(testStrrchr, 'c'));
			printf("custom   -> %s\n", ft_strrchr(testStrrchr, 'c'));
			printf("\n");

			/// ft_strstr///
			printf("\n");
			printf("/////////ft_strstr/////////\n");
			printf("\n");
		
			char testStrstr[] = "MZIRIBMZIRIBMZP";
			char *testStrstr2;
			testStrstr2 = strstr(testStrstr, "MZIRIBMZP");
			printf("original -> %s\n", testStrstr2);
			testStrstr2 = ft_strstr(testStrstr, "MZIRIBMZP");
			printf("custom   -> %s\n", testStrstr2);
			ft_strstr(testStrstr, "MZIRIBMZP");
			printf("\n");
			///	ft_strnstr///

			printf("\n");
			printf("/////////ft_strnstr/////////\n");
			printf("\n");
		
			char testStrnstr[] = "oh no not the empty string !";
			char *testStrnstr2;
			//testStrnstr2 = strnstr(testStrnstr, "uc", 4);
			//printf("original -> %s\n", testStrnstr2);
			testStrnstr2 = ft_strnstr("", testStrnstr, strlen(testStrnstr));
			printf("custom   -> %s$\n", testStrnstr2);
			printf("\n");

			/// ft_strcmp ///
			
			printf("\n");
			printf("/////////ft_strcmp/////////\n");
			printf("\n");
		
			printf("original -> %d\n",strcmp("fuckdf", "fuck"));
			printf("custom   -> %d\n", ft_strcmp("fuckdf", "fuck"));
			printf("\n");

		
		/// ft_strncmp ///
			printf("\n");
			printf("/////////ft_strncmp/////////\n");
			printf("\n");
			printf("original -> %d\n",strncmp("omg1||||||||||||||||", "omg3", 4));
			printf("custom   -> %d\n", ft_strncmp("omg1||||||||||||||||", "omg3", 4));

		

		}
		///	atoi ///
		if (ft_strcmp(argv[1], "ft_atoi") == 0)
		{
			printf("\n");
			printf("/////////ft_atoi/////////\n");
			printf("\n");
		
			char *test = "99999999999999999999999999";
			printf("original -> %d\n", atoi(test));
			//ft_atoi(test);
			printf("custom	 -> %d\n", ft_atoi(test));
		}

		///	ft_isalpha ///
		
		if(ft_strcmp(argv[1], "ft_is") == 0)
		{	
			printf("\n");
			printf("/////////ft_isalpha/////////\n");
			printf("\n");

			int testIsalpha = 'a';
			printf("original -> %d\n", isalpha(testIsalpha));
			printf("custom   -> %d\n", ft_isalpha(testIsalpha));
			printf("Enter the char: \n");
			scanf("%d", &testIsalpha);
			printf("original -> %d\n", isalpha(testIsalpha));
			printf("custom   -> %d\n", ft_isascii(testIsalpha));
		

		///	ft_isdigit ///
			
			printf("\n");
			printf("/////////ft_isdigit/////////\n");
			printf("\n");
		
			int testIsdigit = 5;
			printf("original -> %d\n", isdigit(testIsdigit));
			printf("custom   -> %d\n", ft_isdigit(testIsdigit));

			int testIsdigit1 = 7;
			printf("original -> %d\n", isdigit(testIsdigit1));
			printf("custom   -> %d\n", ft_isdigit(testIsdigit1));



			/// ft_isalnum ///
			printf("\n");
			printf("/////////ft_isalnum/////////\n");
			printf("\n");

			int testisalnum = 5;
			printf("original -> %d\n", isalnum(testisalnum));
			printf("custom   -> %d\n", ft_isalnum(testisalnum));
			int testisalnum1 = 78;
			printf("original -> %d\n", isalnum(testisalnum1));
			printf("custom   -> %d\n", ft_isalnum(testisalnum1));
		

			/// ft_isascii
			printf("\n");
			printf("/////////ft_isascii/////////\n");
			printf("\n");
		
			char c;
			printf("Enter the character:\n");
			scanf("%c", &c);
			printf("original -> %d\n", isascii(c));
			printf("custom   -> %d\n", ft_isascii(c));

			///	ft_isprint///

		
		}

		///	ft_toupper ///
		
		if(ft_strcmp(argv[1], "ft_touplow") == 0)
		{	
			printf("\n");
			printf("/////////ft_toupper/////////\n");
			printf("\n");

			int testtoUpper = 'g';
			printf("Enter the character:\n");
			printf("original -> %c\n", toupper(testtoUpper));
			printf("custom   -> %c\n", ft_toupper(testtoUpper));
		

		/// ft_tolower ///

			printf("\n");
			printf("/////////ft_tolower/////////\n");
			printf("\n");

			int testtoLower = 'L';
			printf("Enter the character:\n");
			printf("original -> %c\n", tolower(testtoLower));
			printf("custom.  -> %c\n", ft_tolower(testtoLower));
		}

		

		

		if(ft_strcmp(argv[1], "ft_mem2") == 0)
		{

			///	ft_memalloc ///

			printf("\n");
			printf("/////////ft_memalloc/////////\n");
			printf("\n");

			unsigned int i;
			unsigned int j;
			char *dest;
			i = 3;
			j = 0;
			dest = ft_memalloc(i);
			while (j < i)
			{
				printf("%d\n", dest[j] );
			j++;
			}

		
		//	ft_memdel ///

			printf("\n");
			printf("/////////ft_memdel/////////\n");
			printf("\n");
			//unsigned int d;
			
		
		}

		if (ft_strcmp(argv[1], "ft_str2") == 0)
		{
			
		///	ft_strnew ///

			printf("\n");
			printf("/////////ft_strnew/////////\n");
			printf("\n");
		
			size_t i;
			size_t j;
			j = 0;
			i = 7;
			char *deststrnew = ft_strnew(i);
			while (j <= i)
			{
				printf("%d\n", deststrnew[j]);
			j++;
			}
		
		///	ft_strdel ///

		///ft_strclr ///

		printf("\n");
		printf("/////////ft_strclr/////////\n");
		printf("\n");
		
			
		char teststrclr[4] = "fuck";
		printf("%lu\n", strlen(teststrclr));
		ft_strclr(teststrclr);
		printf("%lu\n", strlen(teststrclr));

		
		

		///ft_striter ///
		printf("\n");
		printf("/////////ft_striter/////////\n");
		printf("\n");
		
		char teststriter[] = "fuck";
		ft_striter(teststriter, ft_foo);
		printf("%s\n", teststriter);
		
		

		///ft_striteri ///
		printf("\n");
		printf("/////////ft_striteri/////////\n");
		printf("\n");
		
		char teststriteri[] = "fuck";
		ft_striteri(teststriteri, ft_foo2);
		printf("%s\n", teststriteri);
		
		
		///ft_strmap ///
		printf("\n");
		printf("/////////ft_strmap/////////\n");
		printf("\n");
		
		char teststrmap[] = "override this !";
		char *deststrmap;
		deststrmap = ft_strmap(teststrmap, ft_foo3);
		printf("%s\n", deststrmap);
		

		///	ft_strmapi ///
		printf("\n");
		printf("/////////ft_strmapi/////////\n");
		printf("\n");
		
		char teststrmapi[] = "fuck";
		char *deststrmapi;
		deststrmapi = ft_strmapi(teststrmapi, ft_foo4);
		printf("%s\n", deststrmapi);
		

		///ft_strequ ///
		printf("\n");
		printf("/////////ft_strequ////////\n");
		printf("\n");
		
		char teststrequ[] = "fuck";
		char test2strequ[] = "fuckasfasf";
		printf("%d\n",ft_strequ(teststrequ, test2strequ));
		
		
		
		///ft_strnequ ///
		printf("\n");
		printf("/////////ft_strnequ/////////\n");
		printf("\n");
		
		char teststrnequ[] = "fuck";
		char test2strnequ[] = "fulk";
		printf("%d\n",ft_strnequ(teststrnequ, test2strnequ, 3));
		
		

		///ft_strsub ///
		printf("\n");
		printf("/////////ft_strsub/////////\n");
		printf("\n");
		
		char teststrsub[] = "i just want this part #############";
		char *deststrsub;
		deststrsub = (ft_strsub(teststrsub, 5, 10));
		printf("%s", deststrsub);
		
		

		///ft_strjoin ///
		printf("\n");
		printf("/////////ft_strjoin/////////\n");
		printf("\n");

		char *teststrjoin = "my favorite animal is ";
		char *test2strjoin = "the nyancat";
		char *deststrjoin;
		deststrjoin = ft_strjoin(teststrjoin, test2strjoin);

		printf("%s\n", deststrjoin);
		
		

		///ft_strtrim ///
		printf("\n");
		printf("/////////ft_strtrim/////////\n");
		printf("\n");
		
		
		char *deststrtrim;
		char *teststrtrim = "   \t  \n\n \t\t  \n\n\nHello \t  Please\n Trim me !";
		//printf("%s\n", ft_strtrim(test));
		//ft_strtrim(teststrtrim);
		deststrtrim = ft_strtrim(teststrtrim);
		printf("%s$\n", deststrtrim);

		
			///	ft_strsplit ///
		printf("\n");
		printf("/////////ft_strsplit/////////\n");
		printf("\n");

		int k;
		k = 0;
		char teststrsplit[] = "*****//****22223353r**motherfucker!!!!!!!***";
		char **deststrsplit;
		deststrsplit = ft_strsplit(teststrsplit, '*');
		while (deststrsplit[k] != NULL)
		{
			printf("%s$\n", deststrsplit[k]);
		k++;
		}

		/*char *testsplit2;
		char **destsplit2;
		testsplit2 = "olol                     ";
		destsplit2 = ft_strsplit(testsplit2, ' ');
		while (*destsplit2)
		{
			printf("%s$\n", *destsplit2++);
		}

			*/

		
		}

		if (ft_strcmp(argv[1], "ft_itoa") == 0)
		{

		printf("\n");
		printf("/////////ft_itoa/////////\n");
		printf("\n");
			
		int i;
		int j;
		int k;
		int h;
		char *dest;
		i = -2147483646;
		dest = ft_itoa(i);
		printf("%s\n", dest);
		k = -623;
		dest = ft_itoa(k);
		printf("%s\n", dest);
		j = 156;
		dest = ft_itoa(j);
		printf("%s\n", dest);
		h = -00000003;
		dest = ft_itoa(h);
		printf("%s\n", dest);
		}

		if(ft_strcmp(argv[1], "ft_put") == 0)
		{

		printf("\n");
		printf("/////////ft_putchar/////////\n");
		printf("\n");

		ft_putchar('g');
		ft_putchar('\n');
		ft_putchar('K');
		ft_putchar('\n');
		ft_putchar('2');
		ft_putchar('\n');



		printf("\n");
		printf("/////////ft_putstr/////////\n");
		printf("\n");

		ft_putstr("sadgasg");
		
		///ft_putendl ///
		printf("\n");
		printf("/////////ft_putendl/////////\n");
		printf("\n");
		
		char test[] = "fuck";
		ft_putendl(test);

		


		///ft_putnbr///
		
		printf("\n");
		printf("/////////ft_putnbr/////////\n");
		printf("\n");

			int i;
			i = 567;
			ft_putnbr(i);
			ft_putchar('\n');
			ft_putnbr(-2);
			ft_putchar('\n');
			ft_putnbr(456);
			ft_putchar('\n');
			ft_putnbr(99999);
			ft_putchar('\n');
			ft_putnbr(-2147483648);
			ft_putchar('\n');
			ft_putnbr(-214748364);
			ft_putchar('\n');


		///ft_putchar_fd /// 
		}
		if (ft_strcmp(argv[1], "ft_putchar_fd") == 0)
		{
			/* code */
		

		printf("\n");
		printf("/////////ft_putchar_fd/////////\n");
		printf("\n");


		int fd;

		fd = open("fuck.txt", O_CREAT);
		ft_putstr_fd("fuck", fd);

		}


		///ft_lstnew ///

		if (ft_strcmp(argv[1], "ft_lst") == 0)
		{
		struct s_list k;
		struct s_list j;
		k.content = "fuck";
		k.content_size = 4;
		j = *ft_lstnew(k.content, k.content_size);
		printf("%s %zu\n", k.content, k.content_size);
		printf("%s %zu", j.content, j.content_size);

		}

		
		

	}
}
