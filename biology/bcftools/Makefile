# Created by: Reed A. Cartwright <cartwright@asu.edu>
# $FreeBSD$

PORTNAME=	bcftools
PORTVERSION=	1.2
CATEGORIES=	biology

MAINTAINER=	cartwright@asu.edu
COMMENT=	Tools for manipulating next-generation sequencing data

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE

BUILD_DEPENDS=	htslib>=1.2:${PORTSDIR}/biology/htslib
LIB_DEPENDS=	libhts.so:${PORTSDIR}/biology/htslib

USE_GITHUB=	yes
GH_ACCOUNT=	samtools

USES=		gmake shebangfix
SUB_FILES=	pkg-message
SHEBANG_FILES=	vcfutils.pl

OPTIONS_DEFINE=	GPL
GPL_DESC=	Enable modules that rely on GPL code
OPTIONS_DEFAULT=	GPL

GPL_LIB_DEPENDS=	libgsl.so:${PORTSDIR}/math/gsl

.include <bsd.port.options.mk>

CPPFLAGS+=	-I${LOCALBASE}/include
LDFLAGS+=	-L${LOCALBASE}/lib

MAKE_ENV=	INSTALL_LIB="${INSTALL_LIB}" \
			INSTALL_DATA="${INSTALL_DATA}" \
			INSTALL_PROGRAM="${INSTALL_PROGRAM}" \
			INSTALL_SCRIPT="${INSTALL_SCRIPT}" \
			INSTALL_DIR="${MKDIR}"

.if ${PORT_OPTIONS:MGPL}
MAKE_ENV+=	USE_GPL=1
LICENSE=	GPLv3
.endif

PLIST_SUB=	PORTVERSION="${PORTVERSION}"

.include <bsd.port.mk>
