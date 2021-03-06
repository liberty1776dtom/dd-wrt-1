/* tests/gtest/classfileversion_test.cpp - test the string ClassFileVersion class

   Copyright (C) 1996-2014
   CACAOVM - Verein zur Foerderung der freien virtuellen Maschine CACAO

   This file is part of CACAO.

   This program is free software; you can redistribute it and/or
   modify it under the terms of the GNU General Public License as
   published by the Free Software Foundation; either version 2, or (at
   your option) any later version.

   This program is distributed in the hope that it will be useful, but
   WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA
   02110-1301, USA.

*/

#include "gtest/gtest.h"

#include "vm/loader.hpp"

using namespace cacao;

TEST(ClassFileVersion, lt) {
	ClassFileVersion jdk1(45, 3);
	ClassFileVersion jdk6(50, 0);
	ClassFileVersion jdk7(51, 0);

	ASSERT_LT(jdk1, jdk6);
	ASSERT_LT(jdk1, jdk7);
	ASSERT_LT(jdk6, jdk7);

	ASSERT_FALSE(jdk6 < jdk1);
	ASSERT_FALSE(jdk7 < jdk1);
	ASSERT_FALSE(jdk7 < jdk6);
}

/*
 * These are local overrides for various environment variables in Emacs.
 * Please do not remove this and leave it at the end of the file, where
 * Emacs will automagically detect them.
 * ---------------------------------------------------------------------
 * Local variables:
 * mode: c++
 * indent-tabs-mode: t
 * c-basic-offset: 4
 * tab-width: 4
 * End:
 * vim:noexpandtab:sw=4:ts=4:
 */
