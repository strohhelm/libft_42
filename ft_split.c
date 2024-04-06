/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pstrohal <pstrohal@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/10 18:23:38 by pstrohal          #+#    #+#             */
/*   Updated: 2024/03/16 16:38:51 by pstrohal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count_to_next_c(char const *s, char c)
{
	int		i;
	int		ic;
	char	*nextc;

	ic = (int)c;
	i = 0;
	nextc = ft_strchr(s, ic);
	if (nextc == NULL)
	{
		while (s[i])
			i++;
		return (i);
	}
	if (s[i] == *nextc)
		i++;
	while (s[i] != *nextc)
		i++;
	return (i);
}

static int	find_nb_of_strings_in_s(const char *s, char c)
{
	int	i;
	int	sc;

	i = 0;
	sc = 0;
	while (s[sc])
	{
		while (s[sc] == c)
			sc++;
		if (s[sc])
			i++;
		while (s[sc] != c && s[sc])
			sc++;
	}
	return (i);
}

static void	ft_free(char **arr)
{
	int	aindex;

	aindex = 0;
	while (arr[aindex])
		free(arr[aindex++]);
	free(arr);
}

// char	**ft_split(char const *s, char c)
// {
// 	int		sindex;
// 	int		aindex;
// 	char	**arr;

// 	sindex = 0;
// 	aindex = 0;
// 	arr = (char **)malloc((find_nb_of_strings_in_s(s, c) + 2) * sizeof(char *));
// 	printf("%d\n", find_nb_of_strings_in_s(s, c));
// 	if (!s || !arr)
// 		return (NULL);
// 	while (s[sindex])
// 	{
// 		while (s[sindex] == c && s[sindex])
// 			sindex++;
// 		arr[aindex] = ft_substr(s, sindex, ft_count_to_next_c(&s[sindex], c));
// 		if (arr[aindex++] == NULL)
// 		{
// 			while (aindex-- >= 0)
// 				free(arr[aindex]);
// 			free(arr);
// 			return (NULL);
// 		}
// 		sindex += (ft_count_to_next_c(&s[sindex], c));
// 	}
// 	// printf("%d\n", aindex);
// 	// printf("%s\n", arr[0]);
// 	arr[aindex] = NULL;
// 	for (int i = 0; arr[i]; i++)
// 		printf("%s\n", arr[i]);
// 	return (arr);
// }

		// count_to_next_c = ft_count_to_next_c(s[sindex], c);
		// if (count_to_next_c == NULL)
		// 	break ;
		// newstr = (char *)malloc(count_to_next_c + 1);
		// ft_memcpy(newstr, s[sindex], ft_count_to_next_c);
		// arr[aindex] = ft_strdup(newstr);
		// aindex++;
		// sindex += count_to_next_c;

// char	**ft_split(char const *s, char c)
// {
// 	char	*newstr;
// 	int		sindex;
// 	int		aindex;
// 	int		count_to_next_c;
// 	char	**arr;

// 	sindex = 0;
// 	aindex = 0;
// 	arr = malloc((find_nb_of_c_in_s((char *)s, c) + 2) * 8);
// 	newstr = (char *)ft_calloc(ft_strlen(s) + 1, 1);
// 	arr[aindex++] = ft_strdup(newstr);
// 	while (find_nb_of_c_in_s((char *)s, c) > aindex)
// 	{
// 		count_to_next_c = ft_count_to_next_c(&s[sindex], c);
// 		ft_memcpy(newstr, &s[sindex], count_to_next_c);
// 		sindex += (count_to_next_c + 1);
// 		arr[aindex] = ft_strdup(newstr);
// 		aindex++;
// 	}
// 	free(newstr);
// 	arr[aindex + 1] = NULL;
// 	return (arr);
// }

char	**ft_split(char const *s, char c)
{
	int		sindex;
	int		aindex;
	int		count_to_next_c;
	char	**arr;
	int		nb_of_c;

	sindex = 0;
	aindex = 0;
	nb_of_c = find_nb_of_strings_in_s((char *)s, c);
	arr = ft_calloc((nb_of_c + 1), 8);
	if (arr == NULL)
		return (NULL);
	while (nb_of_c > aindex)
	{
		while (s[sindex] == c && s[sindex])
			sindex++;
		count_to_next_c = ft_count_to_next_c(&s[sindex], c);
		arr[aindex] = (char *)ft_calloc(count_to_next_c + 1, 1);
		if (arr[aindex] == NULL)
			return (ft_free(arr), NULL);
		ft_memcpy(arr[aindex++], &s[sindex], count_to_next_c);
		sindex += (count_to_next_c + 1);
	}
	arr[aindex] = NULL;
	return (arr);
}

// int main(void)
// {
// 	char s[] = "split  ||this|for|me|||||!|";
// 	char **de = ft_split(s, '|');
// 	int i = 0;
// 	// printf("%s$\n", de[0]);
// 	while (de[i])
// 	{
// 		printf("%s$\n", de[i]);
// 		i++;
// 	}
// 	return(0);
// }
// char	**ft_split(char const *s, char c)
// {
// 	int		sindex;
// 	int		aindex;
// 	int		next_c;
// 	char	**arr;

// 	sindex = 0;
// 	aindex = 0;
// 	arr = (char **)malloc((find_nb_of_strings_in_s(s, c) + 1) * sizeof(char *));
// 	if (!s || !arr)
// 		return (NULL);
// 	while (s[sindex])
// 	{
// 		while (s[sindex] == c && s[sindex])
// 			sindex++;
// 		next_c = ft_count_to_next_c(&s[sindex], c);
// 		arr[aindex] = ft_substr(s, sindex, next_c);
// 		if (arr[aindex++] == NULL)
// 			return (NULL);
// 		sindex += (next_c);
// 	}
// 	arr[aindex] = NULL;
// 	return (arr);
// }