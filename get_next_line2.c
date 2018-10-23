#include "get_next_line.h"

char	*ft_strjoinch(char const *s1, char c)
{
	char	*new_str;
	size_t	i;
	size_t	s1_len;

	if (!s1 || !c)
		return (NULL);
	s1_len = ft_strlen(s1);
	new_str = ft_strnew(s1_len + 1);
	if (!new_str)
		return (NULL);
	i = -1;
	while (++i < s1_len)
		*(new_str + i) = *(s1 + i);
	*(new_str + i) = c;
	return (new_str);
}

int			ft_copyuntil(char **dst, char *src, char c)
{
	int		i;
	int		count;
	int		pos;

	i = -1;
	count = 0;
	while (src[++i])
		if (src[i] == c)
			break ;
	pos = i;
	if (!(*dst = ft_strnew(i)))
		return (0);
	while (src[count] && count < i)
	{
		if (!(*dst = ft_strjoinch(*dst, src[count])))
			return (0);
		count++;
	}
	return (pos);
}

int	get_next_line(const int fd, char **line)
{
	char		buf[BUFF_SIZE + 1];
	static t_list	*file;
	int		i;
	int		ret;

	if ((fd < 0 || line == NULL || read(fd, buf, 0) < 0))
		return (-1);
	i = 0;
	while (file)
	{
		if ((int)file->content_size == fd)
			i = 1;
			break;
		file = file->next;
	}
	if (i == 0)
	{
		ft_lstadd(&file, ft_lstnew("\0", fd));
	}
	while ((ret = read(fd, buf, BUFF_SIZE)))
	{
		buf[ret] = '\0';
		file->content = ft_strjoin(file->content, buf);
		if (ft_strchr(buf, '\n'))
			break ;
	}
	if (ret < BUFF_SIZE && !ft_strlen(file->content))
		return (0);
	i = ft_copyuntil(line, file->content, '\n');
	(i < (int)ft_strlen(file->content))
		? file->content += (i + 1)
		: ft_strclr(file->content);
	return (1);
}
