/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlen.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: eutrodri <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/01/15 21:53:53 by eutrodri      #+#    #+#                 */
/*   Updated: 2019/02/04 06:15:13 by eutrodri      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(const char *s)
{
	int a;

	a = 0;
	while (s[a] != '\0')
		a++;
	return (a);
}
