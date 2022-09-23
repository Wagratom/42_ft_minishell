/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   defines.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-m <lpaulo-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/25 18:20:45 by lpaulo-m          #+#    #+#             */
/*   Updated: 2022/09/23 15:28:26 by lpaulo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DEFINES_H
# define DEFINES_H

/******************************************************************************\
 * CONTROL
\******************************************************************************/

# define DEFAULT_LAST_EXIT 0
# define LAST_EXIT_KEY "?"

/******************************************************************************\
 * ASCII
\******************************************************************************/

# define NULL_CHAR '\0'
# define EQUALS '='
# define SPACE ' '
# define DOLLAR '$'
# define QUESTION '?'
# define SEMICOLON ';'

# define SINGLE_QUOTE '\''
# define DOUBLE_QUOTE '\"'

# define VERTICAL_BAR '|'

# define GREATER_THAN '>'
# define LESS_THAN '<'

# define EMPTY_STR ""

/******************************************************************************\
 * OPERATORS
\******************************************************************************/

# define PIPE "|"

# define TRUNCATE ">"
# define APPEND ">>"

# define READ_FILE "<"
# define HEREDOC "<<"

/******************************************************************************\
 * LEXER
\******************************************************************************/

# define DELIMITER -42

# define TOKENS_DEBUG_MESSAGE "Lexed string \"%s\" into tokens:"

/******************************************************************************\
 * SYNTAX
\******************************************************************************/

# define METACHARS "?\'\"\\$`=*@~<>()!|&; \n"
# define SPECIALCHARS "|;`()!&"

/******************************************************************************\
 * EXECUTOR
\******************************************************************************/

# define CHILD_PROCESS_ID 0

# define PATH_KEY "PATH"

# define HDOC_FEED "> "

# define EKEYEXPIRED 127

/******************************************************************************\
 * BUILTINS
\******************************************************************************/

# define ECHO "echo"
# define ECHO_NO_LINEBREAK_FLAG "-n"

# define CD "cd"
# define CD_NULL 1
# define CD_TOO_MANY_ARGS 1
# define CD_TOO_MANY_ARGS_ERR "too many arguments"
# define CD_CHANGE_DIR_ERR "No such file or directory"
# define CD_NULL_PATH_ERR "CD_NULL_PATH"
# define CD_NO_FILE_OR_DIR 1
# define CD_PWD_UPDATE 2
# define CD_SUCCESS 0
# define HOME_KEY "HOME"

# define PWD "pwd"
# define PWD_KEY "PWD"

# define EXPORT "export"

# define UNSET "unset"

# define ENV "env"

# define EXIT "exit"

/******************************************************************************\
 * FILES
\******************************************************************************/

# define CREATE_PERMISSION 0000664

/******************************************************************************\
 * PIPES
\******************************************************************************/

# define PIPE_READ 0
# define PIPE_WRITE 1

/******************************************************************************\
 * HASH TABLE
\******************************************************************************/

# define HASH_TABLE_SIZE 10000
# define HT_BAD_INDEX -1

/******************************************************************************\
 * CRYPTO
\******************************************************************************/

# define ONE_BIT 0b10000000
# define NULL_BYTE 0b00000000

# define MD5_DIGEST_SIZE 16
# define MD5_HASH_SIZE 33

/******************************************************************************\
 * RUNTIME
\******************************************************************************/

# define MINISHELL_PREFIX "minishell: "
# define PRINT_ERROR_PREFIX "minishell: ERROR: "
# define PRINT_WARNING_PREFIX "minishell: WRNNG: "

#endif
