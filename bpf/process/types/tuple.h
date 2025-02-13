// SPDX-License-Identifier: GPL-2.0
/* Copyright Authors of Cilium */

#ifndef __TUPLE_H__
#define __TUPLE_H__

struct tuple_type {
	__u32 saddr;
	__u32 daddr;
	__u16 sport;
	__u16 dport;
	__u16 protocol;
	__u16 pad;
};

#endif // __TUPLE_H__
