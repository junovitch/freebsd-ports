# Created by: Stefan Eggers <seggers@semyam.dinoco.de>
# $FreeBSD$

PORTNAME=	crafty-open-large
PORTVERSION=	20070909
PORTREVISION=	2
CATEGORIES=	games
MASTER_SITES=	LOCAL/dd/crafty
DISTFILES=	large1.zip large2.zip large3.zip large4.zip
DIST_SUBDIR=	crafty

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Large opening book for crafty

BUILD_DEPENDS=	crafty:${PORTSDIR}/games/crafty
RUN_DEPENDS=	crafty:${PORTSDIR}/games/crafty

USES=		zip
NO_WRKSUBDIR=	yes
CONFLICTS=	crafty-open-enormous-* crafty-open-medium-* crafty-open-default-*

post-extract:
	${CAT} ${WRKDIR}/Book1.pgn ${WRKDIR}/Book2.pgn ${WRKDIR}/Book3.pgn ${WRKDIR}/Book4.pgn >${WRKDIR}/Book.pgn
	${RM} ${WRKDIR}/Book1.pgn ${WRKDIR}/Book2.pgn ${WRKDIR}/Book3.pgn ${WRKDIR}/Book4.pgn

do-build:
	@${ECHO_MSG} '================================================================'
	@${ECHO_MSG} 'Ignore warnings about illegal moves.  These warnings are normal.'
	@${ECHO_MSG} '================================================================'
	(cd ${WRKDIR} && crafty <${FILESDIR}/book-building)

do-install:
	${MKDIR} ${STAGEDIR}${PREFIX}/lib/crafty
	${INSTALL_DATA} ${WRKDIR}/book.bin ${STAGEDIR}${PREFIX}/lib/crafty/book.bin

.include <bsd.port.mk>
