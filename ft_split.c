/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-feli <ade-feli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/14 09:19:51 by ade-feli          #+#    #+#             */
/*   Updated: 2021/01/14 09:20:59 by ade-feli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		count_words(const char *str, char c)
{
	int i;
	int num_words;
	int is_word;

	i = 0;
	num_words = 0;
	is_word = 0;
	while (str[i])
	{
		if (is_word == 0)
		{
			if (str[i] != c)
			{
				is_word = 1;
				num_words++;
			}
		}
		else
		{
			if (str[i] == c)
				is_word = 0;
		}
		i++;
	}
	return (num_words);
}

static char		*put_word(const char *str, char charset)
{
	int		i;
	char	*word;

	i = 0;
	while (str[i] && !(str[i] == charset))
		i++;
	if (!(word = (char *)malloc(sizeof(char) * i + 1)))
		return (word);
	i = 0;
	while (str[i] && str[i] != charset)
	{
		word[i] = str[i];
		i++;
	}
	word[i] = 0;
	return (word);
}

char			**ft_split(char const *s, char c)
{
	int		i;
	char	**res;
	int		num_words;

	i = 0;
	num_words = count_words(s, c);
	if (!(res = malloc(sizeof(char *) * num_words + 1)))
		return (0);
	num_words = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		if (s[i])
		{
			res[num_words] = put_word(&s[i], c);
			num_words++;
		}
		while (s[i] && s[i] != c)
			i++;
	}
	res[num_words] = 0;
	return (res);
}
