#include <stdio.h>
#include <stdlib.h>
#include "libft/libft.h"
#include "parser.h"

char	*get_cmd_args(char **str, t_cmd cmd);

//Girdi stringini parse tree ye çevirir
t_node	*parse_expression(char *str)
{
	while (*str == ' ' || *str == '\t')
		str++;
	if (ft_strncmp(str, "CMD_", 3) != 0)
		handle_error("Invalid Prompt", 0);
	else
	{
		str += 4;
		t_cmd cmd = get_command_type(&str);
		if (cmd == CMD_UNKNOWN)
			handle_error("Invalid command", 0);
		char *cmd_args = get_cmd_args(&str, cmd);
		t_node *ptr = (t_node *)calloc(1, sizeof(t_node));
		if (!ptr)
			handle_error("Allocation Faild!", 0);
		ptr->cmd = cmd;
		ptr->args = cmd_args;
		//TODO: Child atama kısmı henüz yok devam edicem sonra
		//ptr->child = parse_expression(++str) gibi
		return (ptr);
	}
	return (NULL);
}

/// @brief Baştaki boşlukları atlar ve '(' görene kadar kopyalar.
/// @return Kopyalanan stringi döndürür.
char	*get_cmd_args(char **str, t_cmd cmd)
{
	int	start = 0;
	int	i = 0;

	while ((*str)[i] == ' ' || (*str)[i] == '\t')
		i++;
	start = i;
	while ((*str)[i] && (*str)[i] != '(')
		i++;
	if ((*str)[i] != '(')
		handle_error("Syntax error: Missing '(' after command args", 0);
	char	*args = ft_substr(*str, start, i - start);
	if (!args)
		handle_error("Memory error during arg parsing", 0);
	*str += i;
	return (args);
}

//metin bakarak komut tipini anlar ve return eder
t_cmd	get_command_type(char **str)
{
	// Şimdilik bu iki komut sadece
	if (ft_strncmp(*str, "SELECT", 6) == 0)
	{
		*str += 6;
		return CMD_SELECT;
	}
	if (ft_strncmp(*str, "PROJECT", 7) == 0)
	{
		*str += 7;
		return CMD_PROJECT;
	}
	return (CMD_UNKNOWN);
}

char	*generate_sql(t_node *parse_tree)
{

}

int	main(int argc, char *argv[])
{
	// Veri Tabanı ilişkisel cebir parser programı
	// prompt = "CMD_PROJECT name,age (CMD_SELECT age > 30 (Employees))"


	return (0);
}