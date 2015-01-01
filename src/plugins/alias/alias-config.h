/*
 * Copyright (C) 2003-2015 Sébastien Helleu <flashcode@flashtux.org>
 *
 * This file is part of WeeChat, the extensible chat client.
 *
 * WeeChat is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 3 of the License, or
 * (at your option) any later version.
 *
 * WeeChat is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with WeeChat.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef WEECHAT_ALIAS_CONFIG_H
#define WEECHAT_ALIAS_CONFIG_H 1

extern struct t_config_file *alias_config_file;
extern struct t_config_section *alias_config_section_cmd;
extern struct t_config_section *alias_config_section_completion;

extern void alias_config_cmd_new_option (const char *name,
                                         const char *command);
extern void alias_config_completion_new_option (const char *name,
                                                const char *completion);
extern int alias_config_init ();
extern int alias_config_read ();
extern int alias_config_write ();

#endif /* WEECHAT_ALIAS_CONFIG_H */
