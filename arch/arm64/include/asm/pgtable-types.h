/*
 * Page table types definitions.
 *
 * Copyright (C) 2014 ARM Ltd.
 * Author: Catalin Marinas <catalin.marinas@arm.com>
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef __ASM_PGTABLE_TYPES_H
#define __ASM_PGTABLE_TYPES_H

#include <asm/types.h>

typedef u64 pteval_t;
typedef u64 pmdval_t;
typedef u64 pudval_t;
typedef u64 pgdval_t;

/*
 * These are used to make use of C type-checking..
 */
/* 
 * commenter: Lu Wang
 * 
 * pgd_t, pud_t, pmd_t, pte_t 其实都是无符号的整型
 * 之所以定义为结构体，是出于两个原因：
 * 1. 起到类型保护的作用，以使得不被滥用
 * 2. 为了满足某些特性。如为了存储用于保护的位
 *    内核中使用 pgprot_t 定义了一些标志位。
 */

typedef struct { pteval_t pte; } pte_t;
#define pte_val(x)	((x).pte)
#define __pte(x)	((pte_t) { (x) } )  /* 将u64转换为 pte_t */

#if CONFIG_PGTABLE_LEVELS > 2
typedef struct { pmdval_t pmd; } pmd_t;
#define pmd_val(x)	((x).pmd)
#define __pmd(x)	((pmd_t) { (x) } )
#endif

#if CONFIG_PGTABLE_LEVELS > 3
typedef struct { pudval_t pud; } pud_t;
#define pud_val(x)	((x).pud)
#define __pud(x)	((pud_t) { (x) } )
#endif

typedef struct { pgdval_t pgd; } pgd_t;
#define pgd_val(x)	((x).pgd)   /* 将pgd_t类型转为u64 */
#define __pgd(x)	((pgd_t) { (x) } )  /* 将u64转换位pgd_t */

typedef struct { pteval_t pgprot; } pgprot_t;
#define pgprot_val(x)	((x).pgprot)
#define __pgprot(x)	((pgprot_t) { (x) } )

#if CONFIG_PGTABLE_LEVELS == 2
#define __ARCH_USE_5LEVEL_HACK
#include <asm-generic/pgtable-nopmd.h>
#elif CONFIG_PGTABLE_LEVELS == 3
#define __ARCH_USE_5LEVEL_HACK
#include <asm-generic/pgtable-nopud.h>
#elif CONFIG_PGTABLE_LEVELS == 4
#include <asm-generic/5level-fixup.h>
#endif

#endif	/* __ASM_PGTABLE_TYPES_H */
