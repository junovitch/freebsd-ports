# Created by: Zach Thompson <hideo@lastamericanempire.com>
# $FreeBSD$

PORTNAME=	bogofilter
PORTREVISION=	1
CATEGORIES=	mail
PKGNAMESUFFIX=	-tc

MAINTAINER=	mandree@FreeBSD.org
# Blanket approval for changes by Zach Thompson (address above)

LIB_DEPENDS=	libtokyocabinet.so:${PORTSDIR}/databases/tokyocabinet

CONFLICTS_INSTALL=	bogofilter-[0-9]* [a-z][a-z]-bogofilter-[1-9]* bogofilter-sqlite-[0-9]* bogofilter-qdbm-[0-9]*

CONFIGURE_ARGS=	--with-database=tokyocabinet
BF_CPPFLAGS=	-I${LOCALBASE}/include
BF_LIBS=
DESCR=		${PKGDIR}/pkg-descr

MASTERDIR=	${.CURDIR}/../bogofilter

.include "${MASTERDIR}/Makefile"
