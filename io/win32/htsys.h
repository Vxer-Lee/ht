/* 
 *	HT Editor
 *	htsys.h (Win32 implementation)
 *
 *	Copyright (C) 1999-2002 Sebastian Biallas (sb@web-productions.de)
 *	Copyright (C) 1999-2002 Stefan Weyergraf (stefan@weyergraf.de)
 *
 *	This program is free software; you can redistribute it and/or modify
 *	it under the terms of the GNU General Public License version 2 as
 *	published by the Free Software Foundation.
 *
 *	This program is distributed in the hope that it will be useful,
 *	but WITHOUT ANY WARRANTY; without even the implied warranty of
 *	MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *	GNU General Public License for more details.
 *
 *	You should have received a copy of the GNU General Public License
 *	along with this program; if not, write to the Free Software
 *	Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.
 */

#ifndef __HTSYS_H__
#define __HTSYS_H__

#include "htio.h"
#include "global.h"
#include "stream.h"

#define HT_SYS_NAME			"Win32"

int sys_canonicalize(char *result, const char *filename);
int sys_findclose(pfind_t *pfind);
int sys_findfirst(const char *dirname, pfind_t *pfind);
int sys_findnext(pfind_t *pfind);
int sys_pstat(pstat_t *s, const char *filename);
void sys_suspend();
int sys_get_free_mem();
int sys_truncate(const char *filename, FILEOFS ofs);
int sys_deletefile(const char *filename);
bool sys_is_path_delim(char c);
int sys_filename_cmp(const char *a, const char *b);

int sys_ipc_exec(ht_streamfile **in, ht_streamfile **out, ht_streamfile **err, int *handle, const char *cmd, int options);
bool sys_ipc_is_valid(int handle);
int sys_ipc_terminate(int handle);

int sys_get_caps();

/*
 *	INIT
 */

bool init_system();

/*
 *	DONE
 */

void done_system();

#endif /* __HTSYS_H__ */
