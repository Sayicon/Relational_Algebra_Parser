#ifndef PARSER_H
# define PARSER_H

//Cebirsel işlemleri tanımlama
typedef enum e_cmd
{
	CMD_SELECT,
	CMD_PROJECT,
	CMD_UNKNOWN,
} t_cmd;

//Parse Tree Yapısı
typedef struct s_node {
	t_cmd	cmd;
	char	*args;
	struct s_node *child;
}	t_node;

void	*handle_error(char *message, int err_type);


#endif